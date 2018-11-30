import pickle
import graphviz
import numpy as np
from sklearn.tree import _tree
from sklearn import tree

class RandomForestCodeGenerator:
    def __init__(self, forest_clf, feature_num, scaler_mean, scaler_std):
        self.forest_clf = forest_clf
        self.feature_num = feature_num
        self.scaler_mean = scaler_mean
        self.scaler_std = scaler_std
        self.estimator_num = len(self.forest_clf.estimators_)
        self.function_prefix = "dt"

    def __tree_to_code_py(self, tree, funname, feature_array_name):
        code = ""
        tree_ = tree.tree_
        code += "def {}({}):\n".format(funname, feature_array_name)
        def recurse(node, depth):
            rec_code = ""
            indent = "  " * depth
            if tree_.feature[node] != _tree.TREE_UNDEFINED:
                # name = feature_name[node]
                name = '{}[{}]'.format(feature_array_name, tree_.feature[node])
                threshold = tree_.threshold[node]
                rec_code += "{}if {} <= {}:\n".format(indent, name, threshold)
                rec_code += recurse(tree_.children_left[node], depth + 1)
                rec_code += ("{}else:  # if {} > {}\n".format(indent, name, threshold))
                rec_code += recurse(tree_.children_right[node], depth + 1)
            else:
                retval = np.array2string(tree_.value[node][0].astype(int), separator=', ')
                rec_code += "{}return {}\n".format(indent, retval)
            return rec_code

        code += recurse(0, 1)
        return code

    def forest_to_code_py(self):
        code = ""
        #generate code for each decision tree
        for i in range(self.estimator_num):
            funname = self.function_prefix + str(i)
            code += self.__tree_to_code_py(clf.estimators_[i], funname, 'X') + "\n"

        code += "\n"

        #generate tree function array
        funlist = [(self.function_prefix + str(i)) for i in range(len(self.forest_clf.estimators_))]
        code += "dtlist = [{}]\n".format(','.join(funlist))
        return code

    def __tree_to_code_cpp(self, tree, funname, feature_array_name):
        code = ""
        tree_ = tree.tree_
        code += "clf_res {}(unsigned short {}[{}]){{\n".format(funname, feature_array_name, self.feature_num)
        def recurse(node, depth):
            rec_code = ""
            indent = "  " * depth
            if tree_.feature[node] != _tree.TREE_UNDEFINED:
                # name = feature_name[node]
                name = '{}[{}]'.format(feature_array_name, tree_.feature[node])
                threshold = tree_.threshold[node]
                # unscaler threshold
                threshold = threshold * self.scaler_std[node] + self.scaler_mean[node]

                rec_code += "{}if ({} <= {}){{\n".format(indent, name, threshold)
                rec_code += recurse(tree_.children_left[node], depth + 1)
                rec_code += ("{}}}else{{  // if {} > {}\n".format(indent, name, threshold))
                rec_code += recurse(tree_.children_right[node], depth + 1)
                rec_code += "{}}}\n".format(indent)
            else:
                retval = np.array2string(tree_.value[node][0].astype(int), separator=', ')
                retval = retval[1:-1] #remove parenthesis
                rec_code += "{}return clf_res({});\n".format(indent, retval)
            return rec_code

        code += recurse(0, 1)
        code += "}\n"
        return code

    def forest_to_code_cpp(self):
        #generate code to define struct and randomforest_classifier function
        code = ""
        code += "struct clf_res{\n"
        code += "  int not_red;\n"
        code += "  int red;\n"
        code += "  clf_res(int x, int y) : not_red(x), red(y){}\n"
        code += "};\n\n"

        code += "const int estimator_num = {};\n".format(self.estimator_num);
        for i in range(self.estimator_num):
            code += "clf_res {}{}(unsigned short X[{}]);\n".format(self.function_prefix, i, self.feature_num)
        code += "clf_res (*estimators[])(unsigned short*) = {{{}}};\n\n".format(", ".join(["dt{}".format(i) for i in range(self.estimator_num)]))

        code += "clf_res randomforest_classifier(unsigned short X[{}]){{\n".format(self.feature_num)
        code += "  clf_res rst = clf_res(0, 0);\n"
        code += "  for(int i = 0; i < estimator_num; i++){\n"
        code += "    clf_res tmpres = (*estimators[i])(X);\n"
        code += "    rst.not_red += tmpres.not_red;\n"
        code += "    rst.red += tmpres.red;\n"
        code += "  }\n"
        code += "  return rst;\n"
        code += "}\n\n"

        #generate code for each decision tree
        for i in range(self.estimator_num):
            funname = self.function_prefix + str(i)
            code += self.__tree_to_code_cpp(clf.estimators_[i], funname, 'X') + "\n"

        code += "\n"
        return code



    def run_generated_code(self):
        pass

clf = pickle.load(open( './cache/clf.p', 'rb'))
scaler_mean = pickle.load(open( "./cache/scaler_mean.p", "rb" ))
scaler_std = pickle.load(open( "./cache/scaler_std.p", "rb" ))
feature_num = len(scaler_std)

gen = RandomForestCodeGenerator(clf, feature_num, scaler_mean, scaler_std)
cppcode = gen.forest_to_code_cpp()
with open('./sw/src/forest.h', mode='w') as f:
    f.write(cppcode)

# funarray = []
# for i in range(len(clf.estimators_)):
#     funname = 'f{}'.format(str(i))
#     funarray.append(funname)
