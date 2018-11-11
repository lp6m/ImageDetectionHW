import numpy as np
import pickle
import decisiontree as dt
ar = np.array([1,2,3,4])
ar2 = np.array([[1,2,3],[4,5,6]])
ar3 = np.array([[1,2,3]])

# print(ar.shape)
# print(ar2.shape)
# print(ar3.shape)
clf = pickle.load( open( "./cache/clf.p", "rb" ) )
test_features = pickle.load( open('./test_features.p', "rb"))
sklearn_prediction = clf.predict_proba(test_features)[:,1]
# sklearn_prediction = pickle.load( open('./prediction.p', "rb"))
c1 = 0
c2 = 0
myres = 0
for i in range(100):
	res = dt.funarray[i](test_features[0])
	c1 = res[0]
	c2 = res[1]
	myres += float((c2 * 100.0 / (c1+c2)))
myres /= 100
print("myresult", myres)
print("skresult", sklearn_prediction[0]*100)