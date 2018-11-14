struct clf_res{
  int not_red;
  int red;
  clf_res(int x, int y) : not_red(x), red(y){}
};

const int estimator_num = 100;
clf_res dt0(double X[584]);
clf_res dt1(double X[584]);
clf_res dt2(double X[584]);
clf_res dt3(double X[584]);
clf_res dt4(double X[584]);
clf_res dt5(double X[584]);
clf_res dt6(double X[584]);
clf_res dt7(double X[584]);
clf_res dt8(double X[584]);
clf_res dt9(double X[584]);
clf_res dt10(double X[584]);
clf_res dt11(double X[584]);
clf_res dt12(double X[584]);
clf_res dt13(double X[584]);
clf_res dt14(double X[584]);
clf_res dt15(double X[584]);
clf_res dt16(double X[584]);
clf_res dt17(double X[584]);
clf_res dt18(double X[584]);
clf_res dt19(double X[584]);
clf_res dt20(double X[584]);
clf_res dt21(double X[584]);
clf_res dt22(double X[584]);
clf_res dt23(double X[584]);
clf_res dt24(double X[584]);
clf_res dt25(double X[584]);
clf_res dt26(double X[584]);
clf_res dt27(double X[584]);
clf_res dt28(double X[584]);
clf_res dt29(double X[584]);
clf_res dt30(double X[584]);
clf_res dt31(double X[584]);
clf_res dt32(double X[584]);
clf_res dt33(double X[584]);
clf_res dt34(double X[584]);
clf_res dt35(double X[584]);
clf_res dt36(double X[584]);
clf_res dt37(double X[584]);
clf_res dt38(double X[584]);
clf_res dt39(double X[584]);
clf_res dt40(double X[584]);
clf_res dt41(double X[584]);
clf_res dt42(double X[584]);
clf_res dt43(double X[584]);
clf_res dt44(double X[584]);
clf_res dt45(double X[584]);
clf_res dt46(double X[584]);
clf_res dt47(double X[584]);
clf_res dt48(double X[584]);
clf_res dt49(double X[584]);
clf_res dt50(double X[584]);
clf_res dt51(double X[584]);
clf_res dt52(double X[584]);
clf_res dt53(double X[584]);
clf_res dt54(double X[584]);
clf_res dt55(double X[584]);
clf_res dt56(double X[584]);
clf_res dt57(double X[584]);
clf_res dt58(double X[584]);
clf_res dt59(double X[584]);
clf_res dt60(double X[584]);
clf_res dt61(double X[584]);
clf_res dt62(double X[584]);
clf_res dt63(double X[584]);
clf_res dt64(double X[584]);
clf_res dt65(double X[584]);
clf_res dt66(double X[584]);
clf_res dt67(double X[584]);
clf_res dt68(double X[584]);
clf_res dt69(double X[584]);
clf_res dt70(double X[584]);
clf_res dt71(double X[584]);
clf_res dt72(double X[584]);
clf_res dt73(double X[584]);
clf_res dt74(double X[584]);
clf_res dt75(double X[584]);
clf_res dt76(double X[584]);
clf_res dt77(double X[584]);
clf_res dt78(double X[584]);
clf_res dt79(double X[584]);
clf_res dt80(double X[584]);
clf_res dt81(double X[584]);
clf_res dt82(double X[584]);
clf_res dt83(double X[584]);
clf_res dt84(double X[584]);
clf_res dt85(double X[584]);
clf_res dt86(double X[584]);
clf_res dt87(double X[584]);
clf_res dt88(double X[584]);
clf_res dt89(double X[584]);
clf_res dt90(double X[584]);
clf_res dt91(double X[584]);
clf_res dt92(double X[584]);
clf_res dt93(double X[584]);
clf_res dt94(double X[584]);
clf_res dt95(double X[584]);
clf_res dt96(double X[584]);
clf_res dt97(double X[584]);
clf_res dt98(double X[584]);
clf_res dt99(double X[584]);
clf_res (*estimators[])(double*) = {dt0, dt1, dt2, dt3, dt4, dt5, dt6, dt7, dt8, dt9, dt10, dt11, dt12, dt13, dt14, dt15, dt16, dt17, dt18, dt19, dt20, dt21, dt22, dt23, dt24, dt25, dt26, dt27, dt28, dt29, dt30, dt31, dt32, dt33, dt34, dt35, dt36, dt37, dt38, dt39, dt40, dt41, dt42, dt43, dt44, dt45, dt46, dt47, dt48, dt49, dt50, dt51, dt52, dt53, dt54, dt55, dt56, dt57, dt58, dt59, dt60, dt61, dt62, dt63, dt64, dt65, dt66, dt67, dt68, dt69, dt70, dt71, dt72, dt73, dt74, dt75, dt76, dt77, dt78, dt79, dt80, dt81, dt82, dt83, dt84, dt85, dt86, dt87, dt88, dt89, dt90, dt91, dt92, dt93, dt94, dt95, dt96, dt97, dt98, dt99};

clf_res randomforest_classifier(double X[584]){
  clf_res rst = clf_res(0, 0);
  for(int i = 0; i < estimator_num; i++){
    clf_res tmpres = (*estimators[i])(X);
    rst.not_red += tmpres.not_red;
    rst.red += tmpres.red;
  }
  return rst;
}

clf_res dt0(double X[584]){
  if (X[526] <= 54.22465907534518){
    if (X[77] <= 101.08051127327172){
      if (X[433] <= 6.266663312077451){
        if (X[353] <= 55.8527705728476){
          return clf_res(23,  0);
        }else{  // if X[353] > 55.8527705728476
          return clf_res(2, 4);
        }
      }else{  // if X[433] > 6.266663312077451
        if (X[455] <= 46.439766177510286){
          return clf_res(7, 0);
        }else{  // if X[455] > 46.439766177510286
          return clf_res( 0, 62);
        }
      }
    }else{  // if X[77] > 101.08051127327172
      if (X[87] <= 73.54133185948176){
        if (X[355] <= 119.54329723407093){
          return clf_res(46,  0);
        }else{  // if X[355] > 119.54329723407093
          if (X[384] <= 57.13561456891585){
            if (X[350] <= 150.61713549645512){
              return clf_res(3, 1);
            }else{  // if X[350] > 150.61713549645512
              return clf_res(5, 4);
            }
          }else{  // if X[384] > 57.13561456891585
            return clf_res(7, 0);
          }
        }
      }else{  // if X[87] > 73.54133185948176
        return clf_res( 0, 16);
      }
    }
  }else{  // if X[526] > 54.22465907534518
    if (X[36] <= 79.43178322320423){
      if (X[296] <= 138.0738312769558){
        if (X[515] <= -24.410580074038265){
          return clf_res(11,  1);
        }else{  // if X[515] > -24.410580074038265
          if (X[183] <= 70.93917508145616){
            return clf_res(1, 9);
          }else{  // if X[183] > 70.93917508145616
            return clf_res( 0, 21);
          }
        }
      }else{  // if X[296] > 138.0738312769558
        if (X[309] <= 148.11198411551345){
          return clf_res(4, 1);
        }else{  // if X[309] > 148.11198411551345
          return clf_res(6, 0);
        }
      }
    }else{  // if X[36] > 79.43178322320423
      if (X[460] <= 76.94106713891946){
        return clf_res(2, 3);
      }else{  // if X[460] > 76.94106713891946
        return clf_res( 0, 46);
      }
    }
  }
}

clf_res dt1(double X[584]){
  if (X[182] <= 83.62784659634497){
    if (X[242] <= 127.20317303721193){
      if (X[107] <= 78.33694404360733){
        if (X[243] <= 2.8448549015565874){
          return clf_res(2, 4);
        }else{  // if X[243] > 2.8448549015565874
          if (X[378] <= 88.09146751773868){
            if (X[340] <= 50.73735597011084){
              return clf_res(63,  0);
            }else{  // if X[340] > 50.73735597011084
              if (X[371] <= 32.864438563657146){
                return clf_res(15,  0);
              }else{  // if X[371] > 32.864438563657146
                return clf_res(5, 3);
              }
            }
          }else{  // if X[378] > 88.09146751773868
            return clf_res(1, 7);
          }
        }
      }else{  // if X[107] > 78.33694404360733
        return clf_res( 0, 11);
      }
    }else{  // if X[242] > 127.20317303721193
      if (X[488] <= 138.3531411874652){
        if (X[10] <= 81.3485510220327){
          if (X[116] <= 66.37728466524712){
            if (X[294] <= 136.01704336911817){
              if (X[371] <= 72.19043106436858){
                if (X[52] <= 73.75373783722657){
                  return clf_res(0, 9);
                }else{  // if X[52] > 73.75373783722657
                  if (X[433] <= 9.629788366552013){
                    return clf_res(3, 1);
                  }else{  // if X[433] > 9.629788366552013
                    return clf_res(4, 7);
                  }
                }
              }else{  // if X[371] > 72.19043106436858
                return clf_res(0, 9);
              }
            }else{  // if X[294] > 136.01704336911817
              return clf_res(6, 3);
            }
          }else{  // if X[116] > 66.37728466524712
            return clf_res( 0, 47);
          }
        }else{  // if X[10] > 81.3485510220327
          if (X[472] <= -25.052266959159443){
            return clf_res(9, 1);
          }else{  // if X[472] > -25.052266959159443
            if (X[474] <= 107.610328498458){
              if (X[541] <= 41.45303245555127){
                return clf_res(1, 5);
              }else{  // if X[541] > 41.45303245555127
                return clf_res(5, 0);
              }
            }else{  // if X[474] > 107.610328498458
              return clf_res(0, 8);
            }
          }
        }
      }else{  // if X[488] > 138.3531411874652
        if (X[233] <= 29.000530627552603){
          return clf_res(3, 2);
        }else{  // if X[233] > 29.000530627552603
          if (X[159] <= 41.338144622533726){
            return clf_res(15,  0);
          }else{  // if X[159] > 41.338144622533726
            return clf_res(3, 1);
          }
        }
      }
    }
  }else{  // if X[182] > 83.62784659634497
    if (X[425] <= 2.5284766073944525){
      return clf_res(2, 3);
    }else{  // if X[425] > 2.5284766073944525
      return clf_res( 0, 27);
    }
  }
}

clf_res dt2(double X[584]){
  if (X[579] <= 79.82146782190226){
    if (X[385] <= 81.4453359675725){
      if (X[63] <= 69.68888738599335){
        if (X[420] <= 101.40046529936956){
          if (X[5] <= 94.57374404479827){
            if (X[471] <= 13.285727915310485){
              return clf_res(11,  0);
            }else{  // if X[471] > 13.285727915310485
              return clf_res(7, 1);
            }
          }else{  // if X[5] > 94.57374404479827
            return clf_res(26,  0);
          }
        }else{  // if X[420] > 101.40046529936956
          return clf_res(2, 3);
        }
      }else{  // if X[63] > 69.68888738599335
        return clf_res(1, 4);
      }
    }else{  // if X[385] > 81.4453359675725
      if (X[106] <= -0.9515461186715086){
        if (X[542] <= 56.25283601027063){
          if (X[128] <= 109.28518516142894){
            return clf_res(7, 2);
          }else{  // if X[128] > 109.28518516142894
            return clf_res(4, 3);
          }
        }else{  // if X[542] > 56.25283601027063
          if (X[454] <= 89.77883004180892){
            return clf_res(7, 0);
          }else{  // if X[454] > 89.77883004180892
            if (X[372] <= 84.98773358390577){
              return clf_res( 0, 11);
            }else{  // if X[372] > 84.98773358390577
              return clf_res(2, 5);
            }
          }
        }
      }else{  // if X[106] > -0.9515461186715086
        if (X[430] <= 58.09959881920031){
          return clf_res(19,  0);
        }else{  // if X[430] > 58.09959881920031
          if (X[424] <= -18.931896430591625){
            return clf_res(4, 0);
          }else{  // if X[424] > -18.931896430591625
            if (X[308] <= 99.43765943177108){
              if (X[74] <= 21.344254261705856){
                return clf_res( 0, 16);
              }else{  // if X[74] > 21.344254261705856
                return clf_res(6, 0);
              }
            }else{  // if X[308] > 99.43765943177108
              if (X[477] <= 116.90750311405006){
                return clf_res(  0, 105);
              }else{  // if X[477] > 116.90750311405006
                if (X[578] <= 161.06483848878693){
                  return clf_res(4, 4);
                }else{  // if X[578] > 161.06483848878693
                  return clf_res(0, 9);
                }
              }
            }
          }
        }
      }
    }
  }else{  // if X[579] > 79.82146782190226
    return clf_res(22,  0);
  }
}

clf_res dt3(double X[584]){
  if (X[170] <= 45.37315346077437){
    if (X[448] <= 82.48056044318822){
      if (X[324] <= 73.03471789245971){
        return clf_res(5, 2);
      }else{  // if X[324] > 73.03471789245971
        return clf_res(13,  0);
      }
    }else{  // if X[448] > 82.48056044318822
      if (X[79] <= 3.1471691306824283){
        if (X[401] <= 39.32815779459428){
          return clf_res(10,  0);
        }else{  // if X[401] > 39.32815779459428
          if (X[498] <= 34.0195755443754){
            return clf_res(2, 2);
          }else{  // if X[498] > 34.0195755443754
            return clf_res( 0, 11);
          }
        }
      }else{  // if X[79] > 3.1471691306824283
        if (X[240] <= 69.68923099676992){
          if (X[346] <= 83.98083401286148){
            if (X[381] <= 109.38332313643158){
              return clf_res(5, 1);
            }else{  // if X[381] > 109.38332313643158
              if (X[376] <= 74.44783455657544){
                return clf_res(2, 4);
              }else{  // if X[376] > 74.44783455657544
                return clf_res( 0, 39);
              }
            }
          }else{  // if X[346] > 83.98083401286148
            return clf_res(4, 4);
          }
        }else{  // if X[240] > 69.68923099676992
          if (X[356] <= 114.40844236666783){
            return clf_res(2, 6);
          }else{  // if X[356] > 114.40844236666783
            return clf_res( 0, 24);
          }
        }
      }
    }
  }else{  // if X[170] > 45.37315346077437
    if (X[453] <= 93.27484392631195){
      return clf_res(83,  0);
    }else{  // if X[453] > 93.27484392631195
      if (X[484] <= 61.71003896029934){
        if (X[489] <= 78.43213857408588){
          return clf_res(4, 4);
        }else{  // if X[489] > 78.43213857408588
          if (X[254] <= 39.34514517186351){
            if (X[519] <= 100.96405201074116){
              return clf_res(4, 1);
            }else{  // if X[519] > 100.96405201074116
              return clf_res(1, 9);
            }
          }else{  // if X[254] > 39.34514517186351
            if (X[96] <= 87.21681351801931){
              return clf_res(1, 4);
            }else{  // if X[96] > 87.21681351801931
              return clf_res( 0, 33);
            }
          }
        }
      }else{  // if X[484] > 61.71003896029934
        return clf_res(4, 1);
      }
    }
  }
}

clf_res dt4(double X[584]){
  if (X[453] <= 45.59997189525151){
    return clf_res(115,   0);
  }else{  // if X[453] > 45.59997189525151
    if (X[243] <= 131.91090985546438){
      if (X[85] <= 76.64107065902598){
        if (X[306] <= 95.40829809149635){
          if (X[35] <= 13.05348134383544){
            return clf_res( 0, 22);
          }else{  // if X[35] > 13.05348134383544
            return clf_res( 4, 10);
          }
        }else{  // if X[306] > 95.40829809149635
          if (X[445] <= 11.888841623534368){
            return clf_res(2, 6);
          }else{  // if X[445] > 11.888841623534368
            return clf_res( 0, 92);
          }
        }
      }else{  // if X[85] > 76.64107065902598
        if (X[506] <= 40.76910657232043){
          if (X[552] <= 68.76390065724469){
            return clf_res(0, 7);
          }else{  // if X[552] > 68.76390065724469
            return clf_res(3, 6);
          }
        }else{  // if X[506] > 40.76910657232043
          return clf_res(4, 1);
        }
      }
    }else{  // if X[243] > 131.91090985546438
      return clf_res(9, 4);
    }
  }
}

clf_res dt5(double X[584]){
  if (X[170] <= 45.72444816020111){
    if (X[281] <= 112.99327750228511){
      if (X[133] <= 39.87068533900565){
        if (X[150] <= 69.75208060763502){
          if (X[462] <= 96.07825193263703){
            return clf_res(8, 0);
          }else{  // if X[462] > 96.07825193263703
            if (X[399] <= 52.70119340948129){
              return clf_res(0, 6);
            }else{  // if X[399] > 52.70119340948129
              return clf_res(5, 0);
            }
          }
        }else{  // if X[150] > 69.75208060763502
          return clf_res(1, 5);
        }
      }else{  // if X[133] > 39.87068533900565
        if (X[513] <= 123.65493838859548){
          return clf_res(25,  0);
        }else{  // if X[513] > 123.65493838859548
          return clf_res(2, 2);
        }
      }
    }else{  // if X[281] > 112.99327750228511
      if (X[379] <= 177.5781844936392){
        if (X[408] <= 76.38190879012143){
          if (X[150] <= 47.51956513420555){
            if (X[140] <= 70.09591231177288){
              return clf_res(0, 7);
            }else{  // if X[140] > 70.09591231177288
              return clf_res(2, 8);
            }
          }else{  // if X[150] > 47.51956513420555
            if (X[540] <= 126.03897373737456){
              return clf_res( 0, 62);
            }else{  // if X[540] > 126.03897373737456
              return clf_res(1, 7);
            }
          }
        }else{  // if X[408] > 76.38190879012143
          if (X[135] <= 99.72314724152835){
            return clf_res(4, 1);
          }else{  // if X[135] > 99.72314724152835
            return clf_res(8, 0);
          }
        }
      }else{  // if X[379] > 177.5781844936392
        return clf_res(4, 1);
      }
    }
  }else{  // if X[170] > 45.72444816020111
    if (X[519] <= -26.131271508100657){
      if (X[478] <= 45.899253589065715){
        return clf_res(23,  0);
      }else{  // if X[478] > 45.899253589065715
        return clf_res(6, 1);
      }
    }else{  // if X[519] > -26.131271508100657
      if (X[340] <= 67.10540373339032){
        if (X[50] <= 102.90722707356039){
          if (X[459] <= -14.170373339364236){
            return clf_res(5, 2);
          }else{  // if X[459] > -14.170373339364236
            if (X[251] <= 134.96443343543766){
              return clf_res(3, 3);
            }else{  // if X[251] > 134.96443343543766
              return clf_res( 0, 10);
            }
          }
        }else{  // if X[50] > 102.90722707356039
          if (X[116] <= 127.57207576812073){
            if (X[338] <= 17.498114517924556){
              return clf_res(30,  0);
            }else{  // if X[338] > 17.498114517924556
              return clf_res(11,  2);
            }
          }else{  // if X[116] > 127.57207576812073
            return clf_res( 0, 10);
          }
        }
      }else{  // if X[340] > 67.10540373339032
        if (X[412] <= 94.38001397004845){
          return clf_res( 0, 13);
        }else{  // if X[412] > 94.38001397004845
          return clf_res(3, 4);
        }
      }
    }
  }
}

clf_res dt6(double X[584]){
  if (X[119] <= 62.45451780319108){
    if (X[407] <= 109.33717608467569){
      if (X[310] <= 71.97885439480163){
        return clf_res(88,  0);
      }else{  // if X[310] > 71.97885439480163
        if (X[36] <= 65.97961189750245){
          return clf_res(5, 1);
        }else{  // if X[36] > 65.97961189750245
          return clf_res(16,  0);
        }
      }
    }else{  // if X[407] > 109.33717608467569
      if (X[320] <= 180.91684936220088){
        if (X[329] <= 17.62254086210919){
          if (X[28] <= 72.08895819118696){
            return clf_res(3, 3);
          }else{  // if X[28] > 72.08895819118696
            return clf_res(5, 1);
          }
        }else{  // if X[329] > 17.62254086210919
          if (X[304] <= 93.18061560535101){
            return clf_res( 0, 88);
          }else{  // if X[304] > 93.18061560535101
            return clf_res(1, 7);
          }
        }
      }else{  // if X[320] > 180.91684936220088
        return clf_res(6, 1);
      }
    }
  }else{  // if X[119] > 62.45451780319108
    if (X[385] <= 136.75145460627223){
      if (X[443] <= 25.3210271813948){
        return clf_res(1, 4);
      }else{  // if X[443] > 25.3210271813948
        return clf_res( 0, 46);
      }
    }else{  // if X[385] > 136.75145460627223
      return clf_res(3, 6);
    }
  }
}

clf_res dt7(double X[584]){
  if (X[359] <= 55.856743842293675){
    if (X[548] <= 139.27169648104297){
      if (X[443] <= 22.437463243982837){
        return clf_res(43,  0);
      }else{  // if X[443] > 22.437463243982837
        if (X[112] <= 98.07242128124484){
          return clf_res(5, 1);
        }else{  // if X[112] > 98.07242128124484
          return clf_res( 0, 28);
        }
      }
    }else{  // if X[548] > 139.27169648104297
      return clf_res(58,  0);
    }
  }else{  // if X[359] > 55.856743842293675
    if (X[90] <= -43.91594753801773){
      return clf_res(10,  0);
    }else{  // if X[90] > -43.91594753801773
      if (X[351] <= 159.66723332888893){
        if (X[246] <= 95.70279278478068){
          if (X[492] <= 76.34698143633833){
            if (X[113] <= 75.46243010937005){
              if (X[191] <= 5.141415393922596){
                return clf_res(0, 9);
              }else{  // if X[191] > 5.141415393922596
                return clf_res(2, 4);
              }
            }else{  // if X[113] > 75.46243010937005
              return clf_res( 0, 72);
            }
          }else{  // if X[492] > 76.34698143633833
            return clf_res(2, 6);
          }
        }else{  // if X[246] > 95.70279278478068
          if (X[95] <= 98.36196091500113){
            return clf_res(2, 4);
          }else{  // if X[95] > 98.36196091500113
            return clf_res(1, 4);
          }
        }
      }else{  // if X[351] > 159.66723332888893
        if (X[558] <= 154.64142224839026){
          if (X[141] <= -7.119521791673176){
            return clf_res(2, 5);
          }else{  // if X[141] > -7.119521791673176
            return clf_res(0, 9);
          }
        }else{  // if X[558] > 154.64142224839026
          if (X[190] <= 86.62845273743628){
            return clf_res(5, 7);
          }else{  // if X[190] > 86.62845273743628
            return clf_res(5, 1);
          }
        }
      }
    }
  }
}

clf_res dt8(double X[584]){
  if (X[35] <= 44.25959322312327){
    if (X[559] <= 107.0405771728627){
      if (X[96] <= -33.37480122651332){
        return clf_res(9, 0);
      }else{  // if X[96] > -33.37480122651332
        if (X[360] <= 94.2885859548903){
          return clf_res(6, 2);
        }else{  // if X[360] > 94.2885859548903
          if (X[329] <= 56.29509718257399){
            if (X[31] <= 142.55530086859787){
              if (X[91] <= 40.24676566903631){
                return clf_res(8, 0);
              }else{  // if X[91] > 40.24676566903631
                return clf_res(3, 3);
              }
            }else{  // if X[31] > 142.55530086859787
              if (X[152] <= 13.081178750832866){
                if (X[349] <= 69.94500754253818){
                  return clf_res(2, 4);
                }else{  // if X[349] > 69.94500754253818
                  return clf_res(4, 5);
                }
              }else{  // if X[152] > 13.081178750832866
                return clf_res(0, 5);
              }
            }
          }else{  // if X[329] > 56.29509718257399
            if (X[539] <= 65.41684803375662){
              if (X[230] <= 53.233834294135875){
                return clf_res(0, 7);
              }else{  // if X[230] > 53.233834294135875
                return clf_res(1, 5);
              }
            }else{  // if X[539] > 65.41684803375662
              return clf_res( 0, 38);
            }
          }
        }
      }
    }else{  // if X[559] > 107.0405771728627
      if (X[234] <= 70.2743870718165){
        if (X[352] <= 50.600631742620735){
          return clf_res(0, 7);
        }else{  // if X[352] > 50.600631742620735
          if (X[564] <= 27.406974783377073){
            return clf_res(3, 1);
          }else{  // if X[564] > 27.406974783377073
            if (X[467] <= -19.26212043821811){
              return clf_res(2, 4);
            }else{  // if X[467] > -19.26212043821811
              if (X[188] <= 95.29022249964703){
                return clf_res(0, 5);
              }else{  // if X[188] > 95.29022249964703
                return clf_res(1, 3);
              }
            }
          }
        }
      }else{  // if X[234] > 70.2743870718165
        if (X[561] <= 93.39194194768334){
          return clf_res( 0, 20);
        }else{  // if X[561] > 93.39194194768334
          return clf_res(1, 7);
        }
      }
    }
  }else{  // if X[35] > 44.25959322312327
    if (X[391] <= 101.48239554683553){
      if (X[475] <= 11.089024434612664){
        return clf_res(38,  0);
      }else{  // if X[475] > 11.089024434612664
        if (X[68] <= 90.73931693318632){
          return clf_res(9, 2);
        }else{  // if X[68] > 90.73931693318632
          if (X[26] <= 61.897232889317316){
            return clf_res(13,  0);
          }else{  // if X[26] > 61.897232889317316
            return clf_res(5, 1);
          }
        }
      }
    }else{  // if X[391] > 101.48239554683553
      if (X[93] <= 42.899407054607){
        return clf_res(8, 5);
      }else{  // if X[93] > 42.899407054607
        return clf_res( 0, 48);
      }
    }
  }
}

clf_res dt9(double X[584]){
  if (X[551] <= 48.581830986538144){
    if (X[70] <= 142.59732704094733){
      if (X[381] <= -97.00487275706689){
        return clf_res(5, 1);
      }else{  // if X[381] > -97.00487275706689
        if (X[119] <= 86.25626744831928){
          if (X[507] <= 17.663615311625836){
            return clf_res(12,  0);
          }else{  // if X[507] > 17.663615311625836
            return clf_res(6, 1);
          }
        }else{  // if X[119] > 86.25626744831928
          return clf_res(81,  0);
        }
      }
    }else{  // if X[70] > 142.59732704094733
      if (X[111] <= 33.870489005929116){
        if (X[478] <= 88.75969785489526){
          return clf_res(6, 0);
        }else{  // if X[478] > 88.75969785489526
          return clf_res(1, 4);
        }
      }else{  // if X[111] > 33.870489005929116
        if (X[381] <= 164.3375691900038){
          return clf_res( 0, 19);
        }else{  // if X[381] > 164.3375691900038
          return clf_res(1, 4);
        }
      }
    }
  }else{  // if X[551] > 48.581830986538144
    if (X[18] <= 33.62020926819898){
      return clf_res(7, 0);
    }else{  // if X[18] > 33.62020926819898
      if (X[366] <= 102.10090062258223){
        if (X[232] <= 36.75467522311415){
          if (X[99] <= 18.692386455039127){
            return clf_res(1, 7);
          }else{  // if X[99] > 18.692386455039127
            return clf_res(6, 3);
          }
        }else{  // if X[232] > 36.75467522311415
          if (X[149] <= 6.699887444235358){
            if (X[16] <= 62.84255444893755){
              return clf_res(3, 2);
            }else{  // if X[16] > 62.84255444893755
              return clf_res(1, 3);
            }
          }else{  // if X[149] > 6.699887444235358
            if (X[16] <= 66.70585081478782){
              if (X[275] <= 163.31772253510528){
                return clf_res( 0, 75);
              }else{  // if X[275] > 163.31772253510528
                return clf_res( 1, 10);
              }
            }else{  // if X[16] > 66.70585081478782
              if (X[499] <= 85.60593042271049){
                return clf_res(3, 3);
              }else{  // if X[499] > 85.60593042271049
                if (X[323] <= 58.01198088674943){
                  return clf_res(2, 2);
                }else{  // if X[323] > 58.01198088674943
                  return clf_res(0, 9);
                }
              }
            }
          }
        }
      }else{  // if X[366] > 102.10090062258223
        return clf_res(4, 2);
      }
    }
  }
}

clf_res dt10(double X[584]){
  if (X[532] <= 68.8112036380208){
    if (X[385] <= 63.378270819781584){
      return clf_res(22,  0);
    }else{  // if X[385] > 63.378270819781584
      if (X[426] <= 35.84572520726067){
        return clf_res(12,  0);
      }else{  // if X[426] > 35.84572520726067
        if (X[70] <= 28.26811192754174){
          if (X[307] <= 53.54452127735722){
            if (X[180] <= 187.18970135488883){
              if (X[49] <= 33.15415125865379){
                return clf_res(10,  0);
              }else{  // if X[49] > 33.15415125865379
                if (X[156] <= 82.66934398101074){
                  return clf_res(11,  1);
                }else{  // if X[156] > 82.66934398101074
                  return clf_res(3, 2);
                }
              }
            }else{  // if X[180] > 187.18970135488883
              return clf_res(0, 8);
            }
          }else{  // if X[307] > 53.54452127735722
            return clf_res( 0, 19);
          }
        }else{  // if X[70] > 28.26811192754174
          if (X[157] <= 90.6269221683846){
            if (X[304] <= 136.585753756676){
              if (X[57] <= 47.90165091091759){
                if (X[103] <= 79.73702477056901){
                  return clf_res( 0, 47);
                }else{  // if X[103] > 79.73702477056901
                  if (X[547] <= 65.54624679872364){
                    return clf_res(4, 1);
                  }else{  // if X[547] > 65.54624679872364
                    return clf_res(0, 9);
                  }
                }
              }else{  // if X[57] > 47.90165091091759
                return clf_res( 0, 39);
              }
            }else{  // if X[304] > 136.585753756676
              if (X[295] <= 61.723462598911965){
                return clf_res( 0, 26);
              }else{  // if X[295] > 61.723462598911965
                return clf_res(7, 2);
              }
            }
          }else{  // if X[157] > 90.6269221683846
            return clf_res(6, 6);
          }
        }
      }
    }
  }else{  // if X[532] > 68.8112036380208
    if (X[249] <= 132.33988147187335){
      return clf_res(41,  0);
    }else{  // if X[249] > 132.33988147187335
      return clf_res(7, 2);
    }
  }
}

clf_res dt11(double X[584]){
  if (X[144] <= 33.20944856658732){
    if (X[85] <= 119.89375516802187){
      return clf_res(34,  0);
    }else{  // if X[85] > 119.89375516802187
      if (X[542] <= 60.33438848880803){
        return clf_res(4, 0);
      }else{  // if X[542] > 60.33438848880803
        return clf_res(4, 4);
      }
    }
  }else{  // if X[144] > 33.20944856658732
    if (X[401] <= 39.630889689569514){
      return clf_res(40,  0);
    }else{  // if X[401] > 39.630889689569514
      if (X[434] <= 10.679651097017523){
        return clf_res(23,  0);
      }else{  // if X[434] > 10.679651097017523
        if (X[57] <= 178.4294896742008){
          if (X[19] <= 72.79612431330591){
            if (X[501] <= 35.87871330462485){
              return clf_res(7, 0);
            }else{  // if X[501] > 35.87871330462485
              if (X[88] <= 37.9359806378861){
                if (X[540] <= 70.06182330972106){
                  if (X[554] <= 111.80759592886234){
                    if (X[183] <= 44.62510168946712){
                      return clf_res(6, 2);
                    }else{  // if X[183] > 44.62510168946712
                      return clf_res(0, 8);
                    }
                  }else{  // if X[554] > 111.80759592886234
                    return clf_res( 0, 17);
                  }
                }else{  // if X[540] > 70.06182330972106
                  return clf_res(15,  0);
                }
              }else{  // if X[88] > 37.9359806378861
                return clf_res( 0, 30);
              }
            }
          }else{  // if X[19] > 72.79612431330591
            if (X[458] <= 43.375090772251596){
              return clf_res( 0, 34);
            }else{  // if X[458] > 43.375090772251596
              return clf_res(1, 4);
            }
          }
        }else{  // if X[57] > 178.4294896742008
          return clf_res( 0, 52);
        }
      }
    }
  }
}

clf_res dt12(double X[584]){
  if (X[166] <= 56.84032578230489){
    if (X[391] <= 71.60222984766665){
      return clf_res(71,  0);
    }else{  // if X[391] > 71.60222984766665
      if (X[231] <= 42.26059436093383){
        if (X[404] <= 215.30365892584143){
          return clf_res(4, 7);
        }else{  // if X[404] > 215.30365892584143
          return clf_res( 0, 15);
        }
      }else{  // if X[231] > 42.26059436093383
        if (X[452] <= 94.26981802631107){
          return clf_res(8, 0);
        }else{  // if X[452] > 94.26981802631107
          return clf_res(1, 8);
        }
      }
    }
  }else{  // if X[166] > 56.84032578230489
    if (X[418] <= 90.09630321103515){
      return clf_res(24,  0);
    }else{  // if X[418] > 90.09630321103515
      if (X[301] <= 95.15622759041256){
        if (X[90] <= 78.03970655490842){
          if (X[531] <= -6.639145596408184){
            return clf_res( 0, 23);
          }else{  // if X[531] > -6.639145596408184
            if (X[437] <= 98.76118244405825){
              return clf_res(5, 1);
            }else{  // if X[437] > 98.76118244405825
              return clf_res(5, 1);
            }
          }
        }else{  // if X[90] > 78.03970655490842
          if (X[334] <= 159.37556032358384){
            if (X[317] <= 92.2930659615088){
              return clf_res( 0, 78);
            }else{  // if X[317] > 92.2930659615088
              return clf_res(1, 6);
            }
          }else{  // if X[334] > 159.37556032358384
            if (X[23] <= 28.000000480380397){
              return clf_res( 0, 12);
            }else{  // if X[23] > 28.000000480380397
              return clf_res(2, 5);
            }
          }
        }
      }else{  // if X[301] > 95.15622759041256
        return clf_res(6, 2);
      }
    }
  }
}

clf_res dt13(double X[584]){
  if (X[329] <= 44.40095698761711){
    if (X[102] <= 190.89241743542067){
      if (X[56] <= 107.68519560085574){
        if (X[143] <= 69.3018087234106){
          if (X[22] <= 26.521740912622988){
            return clf_res(4, 3);
          }else{  // if X[22] > 26.521740912622988
            return clf_res(76,  0);
          }
        }else{  // if X[143] > 69.3018087234106
          return clf_res(1, 4);
        }
      }else{  // if X[56] > 107.68519560085574
        return clf_res(5, 3);
      }
    }else{  // if X[102] > 190.89241743542067
      return clf_res(1, 8);
    }
  }else{  // if X[329] > 44.40095698761711
    if (X[186] <= 160.16788187355183){
      if (X[333] <= 60.99916866101245){
        if (X[333] <= 17.67119852727734){
          return clf_res(0, 7);
        }else{  // if X[333] > 17.67119852727734
          if (X[387] <= 153.8940514757834){
            if (X[526] <= 57.132683276965125){
              if (X[0] <= 108.72210411096138){
                return clf_res(4, 1);
              }else{  // if X[0] > 108.72210411096138
                return clf_res(6, 0);
              }
            }else{  // if X[526] > 57.132683276965125
              if (X[496] <= 103.9494199449895){
                return clf_res(0, 5);
              }else{  // if X[496] > 103.9494199449895
                return clf_res(3, 4);
              }
            }
          }else{  // if X[387] > 153.8940514757834
            return clf_res(8, 0);
          }
        }
      }else{  // if X[333] > 60.99916866101245
        if (X[470] <= -25.672999109593373){
          return clf_res(6, 3);
        }else{  // if X[470] > -25.672999109593373
          if (X[95] <= 98.96430426648855){
            if (X[370] <= 84.70997547443832){
              if (X[252] <= 57.75142924261449){
                return clf_res( 0, 42);
              }else{  // if X[252] > 57.75142924261449
                if (X[11] <= 7.838983082940093){
                  return clf_res( 0, 19);
                }else{  // if X[11] > 7.838983082940093
                  return clf_res(2, 5);
                }
              }
            }else{  // if X[370] > 84.70997547443832
              return clf_res(1, 3);
            }
          }else{  // if X[95] > 98.96430426648855
            return clf_res(4, 7);
          }
        }
      }
    }else{  // if X[186] > 160.16788187355183
      return clf_res( 0, 50);
    }
  }
}

clf_res dt14(double X[584]){
  if (X[308] <= 48.75512084509713){
    if (X[527] <= 134.52386575105174){
      if (X[353] <= 56.59343441022833){
        return clf_res(81,  0);
      }else{  // if X[353] > 56.59343441022833
        return clf_res(4, 1);
      }
    }else{  // if X[527] > 134.52386575105174
      if (X[498] <= 9.247446498448458){
        if (X[44] <= 64.00307738084192){
          return clf_res(14,  0);
        }else{  // if X[44] > 64.00307738084192
          return clf_res(2, 3);
        }
      }else{  // if X[498] > 9.247446498448458
        return clf_res( 2, 11);
      }
    }
  }else{  // if X[308] > 48.75512084509713
    if (X[387] <= 66.30829442830493){
      if (X[243] <= 79.72405444562816){
        return clf_res(8, 0);
      }else{  // if X[243] > 79.72405444562816
        return clf_res(5, 1);
      }
    }else{  // if X[387] > 66.30829442830493
      if (X[16] <= 104.86525508177198){
        if (X[539] <= 31.90057601475459){
          return clf_res(4, 1);
        }else{  // if X[539] > 31.90057601475459
          if (X[412] <= 5.678374009375226){
            return clf_res(3, 1);
          }else{  // if X[412] > 5.678374009375226
            if (X[397] <= 89.42020765901626){
              return clf_res(1, 7);
            }else{  // if X[397] > 89.42020765901626
              return clf_res(  0, 126);
            }
          }
        }
      }else{  // if X[16] > 104.86525508177198
        return clf_res(8, 2);
      }
    }
  }
}

clf_res dt15(double X[584]){
  if (X[413] <= 45.81925014002443){
    return clf_res(84,  0);
  }else{  // if X[413] > 45.81925014002443
    if (X[281] <= -8.823900532265505){
      if (X[189] <= 70.81016924916007){
        if (X[127] <= 113.44731688700585){
          return clf_res(6, 0);
        }else{  // if X[127] > 113.44731688700585
          return clf_res(5, 1);
        }
      }else{  // if X[189] > 70.81016924916007
        return clf_res(2, 5);
      }
    }else{  // if X[281] > -8.823900532265505
      if (X[424] <= -19.008881327984817){
        return clf_res(8, 0);
      }else{  // if X[424] > -19.008881327984817
        if (X[409] <= 83.21291677726767){
          return clf_res(4, 5);
        }else{  // if X[409] > 83.21291677726767
          if (X[432] <= 49.002649175494824){
            if (X[85] <= 176.09026121621557){
              return clf_res( 0, 39);
            }else{  // if X[85] > 176.09026121621557
              return clf_res(7, 4);
            }
          }else{  // if X[432] > 49.002649175494824
            if (X[250] <= 187.86501123492133){
              if (X[151] <= -118.37757142297042){
                return clf_res(1, 6);
              }else{  // if X[151] > -118.37757142297042
                return clf_res(  0, 103);
              }
            }else{  // if X[250] > 187.86501123492133
              return clf_res(1, 4);
            }
          }
        }
      }
    }
  }
}

clf_res dt16(double X[584]){
  if (X[435] <= 38.935910632778366){
    if (X[230] <= 86.88596461312832){
      return clf_res(4, 1);
    }else{  // if X[230] > 86.88596461312832
      return clf_res(51,  0);
    }
  }else{  // if X[435] > 38.935910632778366
    if (X[368] <= 90.24712681880676){
      if (X[113] <= 9.325612579245604){
        if (X[153] <= 66.80819544234465){
          if (X[429] <= 107.15435737524218){
            return clf_res(34,  0);
          }else{  // if X[429] > 107.15435737524218
            return clf_res(5, 1);
          }
        }else{  // if X[153] > 66.80819544234465
          return clf_res(4, 5);
        }
      }else{  // if X[113] > 9.325612579245604
        if (X[51] <= 73.15135306343333){
          return clf_res( 0, 11);
        }else{  // if X[51] > 73.15135306343333
          return clf_res(7, 3);
        }
      }
    }else{  // if X[368] > 90.24712681880676
      if (X[162] <= -33.28940175820973){
        return clf_res(6, 0);
      }else{  // if X[162] > -33.28940175820973
        if (X[177] <= 105.76367828569913){
          if (X[326] <= 2.7711190520019144){
            return clf_res(1, 5);
          }else{  // if X[326] > 2.7711190520019144
            if (X[481] <= 58.835013720318344){
              return clf_res(1, 6);
            }else{  // if X[481] > 58.835013720318344
              return clf_res( 0, 73);
            }
          }
        }else{  // if X[177] > 105.76367828569913
          if (X[486] <= 107.83258267110705){
            if (X[27] <= 0.8459869550292893){
              return clf_res(1, 4);
            }else{  // if X[27] > 0.8459869550292893
              if (X[123] <= 139.86412895164315){
                return clf_res(4, 2);
              }else{  // if X[123] > 139.86412895164315
                return clf_res(7, 0);
              }
            }
          }else{  // if X[486] > 107.83258267110705
            if (X[406] <= 107.92762567362288){
              return clf_res(3, 1);
            }else{  // if X[406] > 107.92762567362288
              if (X[331] <= 34.458029005855906){
                return clf_res(3, 5);
              }else{  // if X[331] > 34.458029005855906
                return clf_res( 0, 37);
              }
            }
          }
        }
      }
    }
  }
}

clf_res dt17(double X[584]){
  if (X[329] <= 41.849900544247184){
    if (X[273] <= 119.79535537565914){
      if (X[556] <= 66.78190088733236){
        return clf_res(34,  0);
      }else{  // if X[556] > 66.78190088733236
        if (X[379] <= 51.68799028539745){
          return clf_res(3, 1);
        }else{  // if X[379] > 51.68799028539745
          return clf_res(19,  0);
        }
      }
    }else{  // if X[273] > 119.79535537565914
      if (X[344] <= 157.3677704819735){
        if (X[246] <= 66.26940783389497){
          return clf_res(14,  0);
        }else{  // if X[246] > 66.26940783389497
          return clf_res(4, 1);
        }
      }else{  // if X[344] > 157.3677704819735
        return clf_res(4, 3);
      }
    }
  }else{  // if X[329] > 41.849900544247184
    if (X[204] <= 23.365501540283056){
      return clf_res( 0, 32);
    }else{  // if X[204] > 23.365501540283056
      if (X[387] <= 92.46628782755006){
        if (X[492] <= 85.6738718225707){
          if (X[245] <= 166.0097281037055){
            if (X[353] <= 16.10886675409897){
              return clf_res(6, 6);
            }else{  // if X[353] > 16.10886675409897
              if (X[319] <= 169.90744270731517){
                if (X[473] <= 20.843682159807553){
                  if (X[455] <= 60.28732230071493){
                    return clf_res(3, 1);
                  }else{  // if X[455] > 60.28732230071493
                    return clf_res( 0, 32);
                  }
                }else{  // if X[473] > 20.843682159807553
                  return clf_res( 0, 55);
                }
              }else{  // if X[319] > 169.90744270731517
                return clf_res(2, 2);
              }
            }
          }else{  // if X[245] > 166.0097281037055
            if (X[31] <= 107.91994165510064){
              return clf_res(8, 0);
            }else{  // if X[31] > 107.91994165510064
              return clf_res(2, 5);
            }
          }
        }else{  // if X[492] > 85.6738718225707
          return clf_res(20,  0);
        }
      }else{  // if X[387] > 92.46628782755006
        if (X[292] <= 56.255683199999446){
          return clf_res(3, 3);
        }else{  // if X[292] > 56.255683199999446
          return clf_res(22,  0);
        }
      }
    }
  }
}

clf_res dt18(double X[584]){
  if (X[476] <= 41.31459953510672){
    if (X[53] <= 99.27959383541807){
      if (X[51] <= 25.46323287692724){
        return clf_res(2, 2);
      }else{  // if X[51] > 25.46323287692724
        return clf_res(6, 0);
      }
    }else{  // if X[53] > 99.27959383541807
      if (X[300] <= 16.882931171358415){
        return clf_res(19,  0);
      }else{  // if X[300] > 16.882931171358415
        if (X[233] <= 129.57371626997138){
          return clf_res(8, 2);
        }else{  // if X[233] > 129.57371626997138
          return clf_res(5, 0);
        }
      }
    }
  }else{  // if X[476] > 41.31459953510672
    if (X[34] <= 117.37872251327667){
      if (X[556] <= 76.0078607441259){
        if (X[31] <= 65.30106132362006){
          if (X[583] <= 121.46095816059513){
            if (X[481] <= 29.336117343373125){
              if (X[108] <= 64.91658852181877){
                return clf_res(14,  0);
              }else{  // if X[108] > 64.91658852181877
                return clf_res(5, 1);
              }
            }else{  // if X[481] > 29.336117343373125
              return clf_res(1, 4);
            }
          }else{  // if X[583] > 121.46095816059513
            return clf_res(3, 7);
          }
        }else{  // if X[31] > 65.30106132362006
          if (X[446] <= 23.57337771300746){
            return clf_res(0, 6);
          }else{  // if X[446] > 23.57337771300746
            return clf_res(1, 5);
          }
        }
      }else{  // if X[556] > 76.0078607441259
        if (X[315] <= 39.29914081842553){
          return clf_res(23,  0);
        }else{  // if X[315] > 39.29914081842553
          return clf_res(5, 1);
        }
      }
    }else{  // if X[34] > 117.37872251327667
      if (X[434] <= 5.713161150661758){
        return clf_res(21,  0);
      }else{  // if X[434] > 5.713161150661758
        if (X[430] <= 107.16811560758886){
          return clf_res(10,  0);
        }else{  // if X[430] > 107.16811560758886
          if (X[241] <= 69.04078478038267){
            return clf_res( 0, 89);
          }else{  // if X[241] > 69.04078478038267
            if (X[513] <= 14.830960484655144){
              if (X[321] <= 72.86854903606583){
                return clf_res(1, 6);
              }else{  // if X[321] > 72.86854903606583
                return clf_res(2, 5);
              }
            }else{  // if X[513] > 14.830960484655144
              return clf_res( 0, 31);
            }
          }
        }
      }
    }
  }
}

clf_res dt19(double X[584]){
  if (X[475] <= 44.70675739949996){
    if (X[496] <= 198.67465187002225){
      if (X[471] <= 36.702497783801505){
        if (X[406] <= 47.326308283365954){
          return clf_res(41,  0);
        }else{  // if X[406] > 47.326308283365954
          if (X[241] <= 66.85173558895906){
            return clf_res(3, 3);
          }else{  // if X[241] > 66.85173558895906
            return clf_res(1, 3);
          }
        }
      }else{  // if X[471] > 36.702497783801505
        if (X[136] <= 34.417676852672265){
          return clf_res(13,  0);
        }else{  // if X[136] > 34.417676852672265
          if (X[341] <= 149.58403245746013){
            return clf_res( 0, 21);
          }else{  // if X[341] > 149.58403245746013
            return clf_res(2, 2);
          }
        }
      }
    }else{  // if X[496] > 198.67465187002225
      return clf_res(34,  0);
    }
  }else{  // if X[475] > 44.70675739949996
    if (X[180] <= -18.991576140678227){
      if (X[181] <= 57.814322913579865){
        return clf_res(17,  0);
      }else{  // if X[181] > 57.814322913579865
        if (X[454] <= 22.624968337777926){
          return clf_res(6, 0);
        }else{  // if X[454] > 22.624968337777926
          return clf_res( 0, 11);
        }
      }
    }else{  // if X[180] > -18.991576140678227
      if (X[362] <= 109.47640911697762){
        if (X[555] <= 39.31200377989845){
          if (X[244] <= 137.20338841347944){
            return clf_res(6, 0);
          }else{  // if X[244] > 137.20338841347944
            return clf_res(1, 7);
          }
        }else{  // if X[555] > 39.31200377989845
          if (X[471] <= 160.46986456858664){
            if (X[138] <= -21.90172934934903){
              if (X[105] <= 68.40542262046972){
                return clf_res(2, 2);
              }else{  // if X[105] > 68.40542262046972
                return clf_res( 0, 11);
              }
            }else{  // if X[138] > -21.90172934934903
              return clf_res( 0, 72);
            }
          }else{  // if X[471] > 160.46986456858664
            if (X[16] <= 83.37830610475427){
              return clf_res(0, 7);
            }else{  // if X[16] > 83.37830610475427
              return clf_res(5, 8);
            }
          }
        }
      }else{  // if X[362] > 109.47640911697762
        return clf_res(6, 1);
      }
    }
  }
}

clf_res dt20(double X[584]){
  if (X[442] <= 47.944316975022474){
    if (X[503] <= 204.8914201771862){
      return clf_res(76,  0);
    }else{  // if X[503] > 204.8914201771862
      if (X[179] <= 44.82828435731251){
        return clf_res(4, 1);
      }else{  // if X[179] > 44.82828435731251
        return clf_res(8, 0);
      }
    }
  }else{  // if X[442] > 47.944316975022474
    if (X[290] <= 90.87479961455642){
      if (X[417] <= 91.44750410544611){
        return clf_res(9, 0);
      }else{  // if X[417] > 91.44750410544611
        if (X[127] <= 87.75177254406753){
          if (X[391] <= 94.99953046303493){
            if (X[203] <= 66.80958684279095){
              return clf_res(3, 7);
            }else{  // if X[203] > 66.80958684279095
              if (X[400] <= 87.90836190696768){
                return clf_res(1, 5);
              }else{  // if X[400] > 87.90836190696768
                return clf_res( 0, 13);
              }
            }
          }else{  // if X[391] > 94.99953046303493
            if (X[228] <= 165.66691491462552){
              return clf_res(  0, 127);
            }else{  // if X[228] > 165.66691491462552
              if (X[410] <= 70.9437231213965){
                return clf_res(0, 8);
              }else{  // if X[410] > 70.9437231213965
                return clf_res(2, 5);
              }
            }
          }
        }else{  // if X[127] > 87.75177254406753
          return clf_res(3, 3);
        }
      }
    }else{  // if X[290] > 90.87479961455642
      return clf_res(6, 4);
    }
  }
}

clf_res dt21(double X[584]){
  if (X[483] <= 25.843058374559593){
    if (X[244] <= 152.0504458124555){
      return clf_res(42,  0);
    }else{  // if X[244] > 152.0504458124555
      return clf_res(6, 2);
    }
  }else{  // if X[483] > 25.843058374559593
    if (X[38] <= 178.07315249095114){
      if (X[239] <= 57.48843210940055){
        if (X[559] <= 69.66646470278523){
          if (X[233] <= 108.24242796842695){
            if (X[359] <= -86.41767565767614){
              return clf_res(4, 1);
            }else{  // if X[359] > -86.41767565767614
              if (X[15] <= 158.5308226918982){
                return clf_res(39,  0);
              }else{  // if X[15] > 158.5308226918982
                return clf_res(4, 1);
              }
            }
          }else{  // if X[233] > 108.24242796842695
            if (X[468] <= 164.3544241041607){
              if (X[253] <= 45.70352580709518){
                return clf_res(4, 3);
              }else{  // if X[253] > 45.70352580709518
                if (X[180] <= 93.38077674274737){
                  return clf_res(0, 9);
                }else{  // if X[180] > 93.38077674274737
                  return clf_res(3, 2);
                }
              }
            }else{  // if X[468] > 164.3544241041607
              return clf_res(8, 0);
            }
          }
        }else{  // if X[559] > 69.66646470278523
          if (X[92] <= 75.12200433262703){
            return clf_res(3, 1);
          }else{  // if X[92] > 75.12200433262703
            return clf_res( 0, 12);
          }
        }
      }else{  // if X[239] > 57.48843210940055
        if (X[116] <= 49.278358270075756){
          if (X[343] <= 70.00972035257273){
            if (X[26] <= 104.49091123998768){
              if (X[556] <= -46.83808251916946){
                return clf_res(5, 2);
              }else{  // if X[556] > -46.83808251916946
                if (X[435] <= 121.58498229374312){
                  return clf_res( 0, 26);
                }else{  // if X[435] > 121.58498229374312
                  return clf_res(1, 5);
                }
              }
            }else{  // if X[26] > 104.49091123998768
              if (X[219] <= 119.03457578697743){
                return clf_res(2, 3);
              }else{  // if X[219] > 119.03457578697743
                return clf_res(7, 0);
              }
            }
          }else{  // if X[343] > 70.00972035257273
            return clf_res(8, 2);
          }
        }else{  // if X[116] > 49.278358270075756
          return clf_res( 0, 49);
        }
      }
    }else{  // if X[38] > 178.07315249095114
      if (X[76] <= 76.57117233899447){
        return clf_res( 0, 26);
      }else{  // if X[76] > 76.57117233899447
        return clf_res(1, 4);
      }
    }
  }
}

clf_res dt22(double X[584]){
  if (X[39] <= 27.761539810619627){
    if (X[437] <= 75.56451674280805){
      return clf_res(9, 1);
    }else{  // if X[437] > 75.56451674280805
      return clf_res(32,  0);
    }
  }else{  // if X[39] > 27.761539810619627
    if (X[424] <= 72.0166958521859){
      return clf_res(24,  0);
    }else{  // if X[424] > 72.0166958521859
      if (X[43] <= 67.48572309858115){
        if (X[567] <= 82.4508002339482){
          if (X[422] <= 12.389498717161832){
            return clf_res(8, 2);
          }else{  // if X[422] > 12.389498717161832
            if (X[84] <= 146.21461336352456){
              return clf_res(4, 9);
            }else{  // if X[84] > 146.21461336352456
              return clf_res( 0, 21);
            }
          }
        }else{  // if X[567] > 82.4508002339482
          if (X[309] <= 18.593740244135958){
            return clf_res( 0, 10);
          }else{  // if X[309] > 18.593740244135958
            if (X[418] <= 64.10637898934088){
              return clf_res(43,  0);
            }else{  // if X[418] > 64.10637898934088
              if (X[382] <= 94.55662545906861){
                return clf_res( 0, 25);
              }else{  // if X[382] > 94.55662545906861
                return clf_res(2, 3);
              }
            }
          }
        }
      }else{  // if X[43] > 67.48572309858115
        if (X[149] <= 27.05294325530462){
          if (X[151] <= 84.3270845084086){
            return clf_res( 0, 52);
          }else{  // if X[151] > 84.3270845084086
            if (X[111] <= -4.050451804252038){
              return clf_res(3, 4);
            }else{  // if X[111] > -4.050451804252038
              return clf_res( 0, 13);
            }
          }
        }else{  // if X[149] > 27.05294325530462
          if (X[504] <= 75.04751044282285){
            return clf_res(0, 9);
          }else{  // if X[504] > 75.04751044282285
            return clf_res(3, 8);
          }
        }
      }
    }
  }
}

clf_res dt23(double X[584]){
  if (X[499] <= 29.830929960481548){
    if (X[268] <= 153.10044827459387){
      if (X[495] <= -11.889008846128462){
        return clf_res(27,  0);
      }else{  // if X[495] > -11.889008846128462
        return clf_res(9, 3);
      }
    }else{  // if X[268] > 153.10044827459387
      if (X[310] <= 92.60900315231562){
        return clf_res(2, 8);
      }else{  // if X[310] > 92.60900315231562
        return clf_res(3, 3);
      }
    }
  }else{  // if X[499] > 29.830929960481548
    if (X[62] <= 27.537230499213194){
      if (X[203] <= 56.84672408822049){
        if (X[100] <= -6.2590220658244675){
          return clf_res(1, 4);
        }else{  // if X[100] > -6.2590220658244675
          if (X[331] <= 75.27436890164947){
            if (X[338] <= 115.26680150295087){
              return clf_res(41,  0);
            }else{  // if X[338] > 115.26680150295087
              return clf_res(5, 2);
            }
          }else{  // if X[331] > 75.27436890164947
            return clf_res(5, 3);
          }
        }
      }else{  // if X[203] > 56.84672408822049
        if (X[284] <= 34.61281602384933){
          if (X[108] <= 89.28102974446215){
            if (X[370] <= 73.21126393036933){
              return clf_res(3, 1);
            }else{  // if X[370] > 73.21126393036933
              return clf_res(16,  0);
            }
          }else{  // if X[108] > 89.28102974446215
            return clf_res(0, 8);
          }
        }else{  // if X[284] > 34.61281602384933
          if (X[333] <= 80.16861347825866){
            return clf_res( 0, 51);
          }else{  // if X[333] > 80.16861347825866
            if (X[522] <= 81.84324365593086){
              return clf_res(0, 7);
            }else{  // if X[522] > 81.84324365593086
              return clf_res(5, 1);
            }
          }
        }
      }
    }else{  // if X[62] > 27.537230499213194
      if (X[287] <= 108.26711382702987){
        if (X[128] <= 55.850080526804796){
          return clf_res(4, 7);
        }else{  // if X[128] > 55.850080526804796
          return clf_res(6, 0);
        }
      }else{  // if X[287] > 108.26711382702987
        if (X[64] <= 98.75922811503925){
          if (X[517] <= 79.49018547834922){
            return clf_res( 0, 49);
          }else{  // if X[517] > 79.49018547834922
            return clf_res(1, 4);
          }
        }else{  // if X[64] > 98.75922811503925
          return clf_res(2, 4);
        }
      }
    }
  }
}

clf_res dt24(double X[584]){
  if (X[326] <= 40.36857168651188){
    if (X[452] <= 98.19192862813064){
      if (X[452] <= 6.910691293183273){
        return clf_res(46,  0);
      }else{  // if X[452] > 6.910691293183273
        return clf_res(5, 1);
      }
    }else{  // if X[452] > 98.19192862813064
      if (X[308] <= 39.27013468778664){
        if (X[461] <= 46.95562687881592){
          return clf_res(5, 1);
        }else{  // if X[461] > 46.95562687881592
          return clf_res(8, 0);
        }
      }else{  // if X[308] > 39.27013468778664
        return clf_res(1, 8);
      }
    }
  }else{  // if X[326] > 40.36857168651188
    if (X[449] <= 75.97777250781624){
      return clf_res(31,  0);
    }else{  // if X[449] > 75.97777250781624
      if (X[464] <= 96.99236301127071){
        if (X[64] <= 122.01228309008901){
          if (X[51] <= 119.57268039557863){
            if (X[545] <= 37.50981561863232){
              return clf_res(9, 2);
            }else{  // if X[545] > 37.50981561863232
              if (X[218] <= 15.152658224744233){
                return clf_res(1, 8);
              }else{  // if X[218] > 15.152658224744233
                return clf_res( 0, 31);
              }
            }
          }else{  // if X[51] > 119.57268039557863
            return clf_res(5, 3);
          }
        }else{  // if X[64] > 122.01228309008901
          if (X[292] <= 87.23049148262183){
            if (X[195] <= 151.6013105453017){
              if (X[434] <= 38.565003206959894){
                return clf_res( 0, 83);
              }else{  // if X[434] > 38.565003206959894
                return clf_res(1, 5);
              }
            }else{  // if X[195] > 151.6013105453017
              return clf_res(2, 2);
            }
          }else{  // if X[292] > 87.23049148262183
            return clf_res(3, 4);
          }
        }
      }else{  // if X[464] > 96.99236301127071
        if (X[329] <= 112.83914991373716){
          return clf_res(14,  0);
        }else{  // if X[329] > 112.83914991373716
          return clf_res(4, 2);
        }
      }
    }
  }
}

clf_res dt25(double X[584]){
  if (X[425] <= 40.47203411802402){
    if (X[40] <= 145.63491866818222){
      if (X[22] <= -83.1920086188961){
        return clf_res(5, 2);
      }else{  // if X[22] > -83.1920086188961
        if (X[31] <= 141.396138207295){
          return clf_res(38,  0);
        }else{  // if X[31] > 141.396138207295
          return clf_res(6, 1);
        }
      }
    }else{  // if X[40] > 145.63491866818222
      if (X[431] <= 109.55980316766768){
        if (X[575] <= 47.313474048393545){
          if (X[535] <= 61.62066720891509){
            return clf_res(3, 3);
          }else{  // if X[535] > 61.62066720891509
            return clf_res(1, 6);
          }
        }else{  // if X[575] > 47.313474048393545
          return clf_res(6, 1);
        }
      }else{  // if X[431] > 109.55980316766768
        return clf_res(7, 0);
      }
    }
  }else{  // if X[425] > 40.47203411802402
    if (X[27] <= -22.724062999697054){
      if (X[424] <= 72.00768081679692){
        return clf_res(4, 3);
      }else{  // if X[424] > 72.00768081679692
        return clf_res(20,  0);
      }
    }else{  // if X[27] > -22.724062999697054
      if (X[89] <= 51.25418610457226){
        if (X[409] <= 71.461282963587){
          return clf_res(15,  0);
        }else{  // if X[409] > 71.461282963587
          if (X[336] <= 57.2011855078219){
            if (X[313] <= 9.439012362837019){
              return clf_res(0, 4);
            }else{  // if X[313] > 9.439012362837019
              return clf_res(11,  1);
            }
          }else{  // if X[336] > 57.2011855078219
            if (X[201] <= 158.1424118623979){
              if (X[200] <= 60.674311988865966){
                if (X[414] <= 37.27474594631942){
                  return clf_res(5, 1);
                }else{  // if X[414] > 37.27474594631942
                  return clf_res( 0, 16);
                }
              }else{  // if X[200] > 60.674311988865966
                return clf_res( 0, 19);
              }
            }else{  // if X[201] > 158.1424118623979
              return clf_res(3, 4);
            }
          }
        }
      }else{  // if X[89] > 51.25418610457226
        if (X[155] <= 4.639265954354148){
          return clf_res( 0, 58);
        }else{  // if X[155] > 4.639265954354148
          if (X[338] <= 140.85947836083062){
            if (X[351] <= 23.0222154642411){
              if (X[171] <= 76.06578978979911){
                return clf_res(0, 9);
              }else{  // if X[171] > 76.06578978979911
                return clf_res(2, 4);
              }
            }else{  // if X[351] > 23.0222154642411
              return clf_res(4, 2);
            }
          }else{  // if X[338] > 140.85947836083062
            if (X[512] <= 109.7248107373499){
              return clf_res(1, 8);
            }else{  // if X[512] > 109.7248107373499
              return clf_res( 0, 12);
            }
          }
        }
      }
    }
  }
}

clf_res dt26(double X[584]){
  if (X[448] <= 51.95606381089862){
    if (X[560] <= 190.35973978195193){
      if (X[182] <= 43.7253595409957){
        if (X[6] <= 74.37569636906983){
          if (X[442] <= 106.52768411018243){
            if (X[44] <= 2.9475892085467947){
              return clf_res(5, 1);
            }else{  // if X[44] > 2.9475892085467947
              return clf_res(7, 0);
            }
          }else{  // if X[442] > 106.52768411018243
            if (X[385] <= 160.6792938599063){
              if (X[267] <= 54.258965422097646){
                return clf_res( 0, 49);
              }else{  // if X[267] > 54.258965422097646
                if (X[294] <= -11.667022341213439){
                  return clf_res(4, 6);
                }else{  // if X[294] > -11.667022341213439
                  if (X[278] <= 109.4963261866043){
                    return clf_res( 0, 18);
                  }else{  // if X[278] > 109.4963261866043
                    if (X[405] <= 55.9689297556414){
                      return clf_res(3, 1);
                    }else{  // if X[405] > 55.9689297556414
                      if (X[11] <= 12.319930088507306){
                        return clf_res( 0, 27);
                      }else{  // if X[11] > 12.319930088507306
                        return clf_res(3, 2);
                      }
                    }
                  }
                }
              }
            }else{  // if X[385] > 160.6792938599063
              return clf_res(3, 2);
            }
          }
        }else{  // if X[6] > 74.37569636906983
          return clf_res(8, 2);
        }
      }else{  // if X[182] > 43.7253595409957
        if (X[574] <= 171.38960840847506){
          return clf_res( 0, 44);
        }else{  // if X[574] > 171.38960840847506
          return clf_res( 1, 10);
        }
      }
    }else{  // if X[560] > 190.35973978195193
      if (X[149] <= 101.65382159467177){
        return clf_res(14,  0);
      }else{  // if X[149] > 101.65382159467177
        if (X[360] <= 58.733055777558604){
          return clf_res(7, 0);
        }else{  // if X[360] > 58.733055777558604
          if (X[243] <= 60.70445033541797){
            return clf_res(1, 3);
          }else{  // if X[243] > 60.70445033541797
            return clf_res(5, 1);
          }
        }
      }
    }
  }else{  // if X[448] > 51.95606381089862
    if (X[476] <= 22.29013314197032){
      if (X[365] <= 49.468161040599725){
        return clf_res(17,  0);
      }else{  // if X[365] > 49.468161040599725
        return clf_res(2, 2);
      }
    }else{  // if X[476] > 22.29013314197032
      return clf_res(37,  0);
    }
  }
}

clf_res dt27(double X[584]){
  if (X[356] <= 52.745772098224606){
    if (X[12] <= 195.7330957170996){
      if (X[168] <= -27.419152564911926){
        return clf_res(40,  0);
      }else{  // if X[168] > -27.419152564911926
        if (X[176] <= 104.1755430211648){
          if (X[354] <= -41.55321748724445){
            if (X[78] <= 43.32246430795363){
              return clf_res(0, 6);
            }else{  // if X[78] > 43.32246430795363
              return clf_res(1, 7);
            }
          }else{  // if X[354] > -41.55321748724445
            if (X[233] <= 60.34244928289581){
              return clf_res(21,  0);
            }else{  // if X[233] > 60.34244928289581
              if (X[500] <= 55.328557629907465){
                return clf_res(5, 0);
              }else{  // if X[500] > 55.328557629907465
                return clf_res(2, 3);
              }
            }
          }
        }else{  // if X[176] > 104.1755430211648
          if (X[454] <= -3.18371275887651){
            return clf_res(32,  0);
          }else{  // if X[454] > -3.18371275887651
            return clf_res(3, 1);
          }
        }
      }
    }else{  // if X[12] > 195.7330957170996
      return clf_res(2, 8);
    }
  }else{  // if X[356] > 52.745772098224606
    if (X[14] <= 52.8869685151969){
      if (X[508] <= 129.51835477048652){
        if (X[340] <= 89.64326238095165){
          return clf_res( 0, 56);
        }else{  // if X[340] > 89.64326238095165
          return clf_res(1, 3);
        }
      }else{  // if X[508] > 129.51835477048652
        return clf_res(4, 3);
      }
    }else{  // if X[14] > 52.8869685151969
      if (X[539] <= 24.43701252695237){
        return clf_res(8, 0);
      }else{  // if X[539] > 24.43701252695237
        if (X[569] <= -23.776232651114302){
          return clf_res(6, 2);
        }else{  // if X[569] > -23.776232651114302
          if (X[207] <= 162.9612120295732){
            if (X[391] <= 108.56451854954214){
              return clf_res( 0, 49);
            }else{  // if X[391] > 108.56451854954214
              if (X[199] <= 133.08455477077285){
                return clf_res(1, 5);
              }else{  // if X[199] > 133.08455477077285
                return clf_res(0, 8);
              }
            }
          }else{  // if X[207] > 162.9612120295732
            return clf_res(6, 2);
          }
        }
      }
    }
  }
}

clf_res dt28(double X[584]){
  if (X[262] <= 56.93371210843869){
    if (X[500] <= 150.62374443854333){
      if (X[58] <= 7.694278931681204){
        if (X[175] <= 62.37456187664512){
          if (X[561] <= 102.2468549663703){
            return clf_res(12,  0);
          }else{  // if X[561] > 102.2468549663703
            return clf_res(8, 1);
          }
        }else{  // if X[175] > 62.37456187664512
          return clf_res(5, 3);
        }
      }else{  // if X[58] > 7.694278931681204
        if (X[164] <= 27.133622039191707){
          if (X[400] <= 57.73542185841527){
            if (X[56] <= 95.0475485433422){
              return clf_res(2, 8);
            }else{  // if X[56] > 95.0475485433422
              return clf_res(4, 5);
            }
          }else{  // if X[400] > 57.73542185841527
            return clf_res(9, 0);
          }
        }else{  // if X[164] > 27.133622039191707
          return clf_res( 0, 24);
        }
      }
    }else{  // if X[500] > 150.62374443854333
      if (X[479] <= 65.57076953395203){
        return clf_res(48,  0);
      }else{  // if X[479] > 65.57076953395203
        if (X[347] <= 32.71331904792594){
          return clf_res(8, 0);
        }else{  // if X[347] > 32.71331904792594
          return clf_res(1, 3);
        }
      }
    }
  }else{  // if X[262] > 56.93371210843869
    if (X[142] <= 45.68651323055236){
      if (X[549] <= 40.152541932739695){
        return clf_res(6, 1);
      }else{  // if X[549] > 40.152541932739695
        return clf_res(12,  0);
      }
    }else{  // if X[142] > 45.68651323055236
      if (X[365] <= 66.10592012090359){
        if (X[415] <= 88.36307867499568){
          return clf_res(8, 0);
        }else{  // if X[415] > 88.36307867499568
          if (X[499] <= 25.385225832408036){
            return clf_res(4, 8);
          }else{  // if X[499] > 25.385225832408036
            return clf_res( 0, 92);
          }
        }
      }else{  // if X[365] > 66.10592012090359
        if (X[562] <= 47.53575244047487){
          return clf_res(5, 1);
        }else{  // if X[562] > 47.53575244047487
          return clf_res(3, 4);
        }
      }
    }
  }
}

clf_res dt29(double X[584]){
  if (X[227] <= 48.686162818210136){
    if (X[60] <= 155.51485621194502){
      if (X[144] <= 96.30010849407101){
        if (X[365] <= 63.49460336582717){
          return clf_res(50,  0);
        }else{  // if X[365] > 63.49460336582717
          if (X[568] <= 14.075847324332713){
            return clf_res(7, 1);
          }else{  // if X[568] > 14.075847324332713
            return clf_res(2, 2);
          }
        }
      }else{  // if X[144] > 96.30010849407101
        if (X[184] <= -64.70307899136216){
          return clf_res(0, 9);
        }else{  // if X[184] > -64.70307899136216
          if (X[514] <= 72.84437544541706){
            return clf_res(10,  0);
          }else{  // if X[514] > 72.84437544541706
            return clf_res(6, 1);
          }
        }
      }
    }else{  // if X[60] > 155.51485621194502
      return clf_res(0, 8);
    }
  }else{  // if X[227] > 48.686162818210136
    if (X[305] <= 26.92798472282643){
      if (X[356] <= 65.52063296299872){
        if (X[412] <= 95.94517575642233){
          return clf_res(25,  0);
        }else{  // if X[412] > 95.94517575642233
          return clf_res(4, 1);
        }
      }else{  // if X[356] > 65.52063296299872
        if (X[325] <= 134.09503143903885){
          return clf_res( 0, 16);
        }else{  // if X[325] > 134.09503143903885
          if (X[504] <= 38.21740054754061){
            return clf_res(5, 0);
          }else{  // if X[504] > 38.21740054754061
            return clf_res(4, 2);
          }
        }
      }
    }else{  // if X[305] > 26.92798472282643
      if (X[217] <= 72.46995015552915){
        if (X[253] <= 160.82039029131596){
          if (X[230] <= 59.708467395278376){
            return clf_res( 0, 62);
          }else{  // if X[230] > 59.708467395278376
            if (X[488] <= 128.398471381851){
              return clf_res( 0, 26);
            }else{  // if X[488] > 128.398471381851
              return clf_res(1, 4);
            }
          }
        }else{  // if X[253] > 160.82039029131596
          if (X[343] <= 146.41407718580993){
            if (X[188] <= 2.1800687453271053){
              if (X[296] <= 65.54143424576104){
                return clf_res(0, 6);
              }else{  // if X[296] > 65.54143424576104
                return clf_res(3, 2);
              }
            }else{  // if X[188] > 2.1800687453271053
              return clf_res(0, 9);
            }
          }else{  // if X[343] > 146.41407718580993
            return clf_res(9, 5);
          }
        }
      }else{  // if X[217] > 72.46995015552915
        return clf_res(4, 1);
      }
    }
  }
}

clf_res dt30(double X[584]){
  if (X[198] <= 52.60920832502946){
    if (X[354] <= 154.1184714660904){
      if (X[50] <= 145.6909545498727){
        if (X[470] <= 81.23440980225683){
          if (X[161] <= 83.08560577003666){
            return clf_res(6, 1);
          }else{  // if X[161] > 83.08560577003666
            return clf_res(57,  0);
          }
        }else{  // if X[470] > 81.23440980225683
          if (X[153] <= 140.98693384502886){
            return clf_res(3, 3);
          }else{  // if X[153] > 140.98693384502886
            return clf_res(4, 2);
          }
        }
      }else{  // if X[50] > 145.6909545498727
        if (X[473] <= 116.95365533534913){
          return clf_res(4, 3);
        }else{  // if X[473] > 116.95365533534913
          return clf_res(0, 8);
        }
      }
    }else{  // if X[354] > 154.1184714660904
      if (X[289] <= 91.31966935939734){
        return clf_res( 0, 13);
      }else{  // if X[289] > 91.31966935939734
        if (X[474] <= 53.73033342039434){
          return clf_res(2, 3);
        }else{  // if X[474] > 53.73033342039434
          return clf_res(0, 5);
        }
      }
    }
  }else{  // if X[198] > 52.60920832502946
    if (X[49] <= 96.75883827542073){
      if (X[415] <= 80.15275972806519){
        return clf_res(33,  0);
      }else{  // if X[415] > 80.15275972806519
        if (X[243] <= 88.09296181134633){
          if (X[269] <= 135.02046697632701){
            return clf_res( 0, 63);
          }else{  // if X[269] > 135.02046697632701
            if (X[264] <= 62.02652177081174){
              if (X[467] <= 70.94405053940127){
                return clf_res(2, 7);
              }else{  // if X[467] > 70.94405053940127
                return clf_res( 0, 18);
              }
            }else{  // if X[264] > 62.02652177081174
              if (X[481] <= 171.5763282112703){
                return clf_res(3, 2);
              }else{  // if X[481] > 171.5763282112703
                return clf_res(0, 4);
              }
            }
          }
        }else{  // if X[243] > 88.09296181134633
          return clf_res(13,  0);
        }
      }
    }else{  // if X[49] > 96.75883827542073
      if (X[436] <= -15.127339892699059){
        return clf_res( 0, 18);
      }else{  // if X[436] > -15.127339892699059
        return clf_res(4, 4);
      }
    }
  }
}

clf_res dt31(double X[584]){
  if (X[550] <= 51.6577401298283){
    if (X[511] <= 62.271841730186864){
      if (X[24] <= -28.094828015478647){
        return clf_res(7, 1);
      }else{  // if X[24] > -28.094828015478647
        return clf_res(30,  0);
      }
    }else{  // if X[511] > 62.271841730186864
      if (X[391] <= -25.343963369244833){
        return clf_res(49,  0);
      }else{  // if X[391] > -25.343963369244833
        if (X[516] <= 132.6698953898561){
          if (X[550] <= -42.08222894105772){
            return clf_res(3, 4);
          }else{  // if X[550] > -42.08222894105772
            if (X[37] <= 164.1273381187285){
              return clf_res( 0, 42);
            }else{  // if X[37] > 164.1273381187285
              return clf_res(2, 4);
            }
          }
        }else{  // if X[516] > 132.6698953898561
          if (X[413] <= 89.12939797913674){
            return clf_res(15,  0);
          }else{  // if X[413] > 89.12939797913674
            return clf_res(1, 7);
          }
        }
      }
    }
  }else{  // if X[550] > 51.6577401298283
    if (X[110] <= 81.98043903042976){
      if (X[34] <= 50.956278366546705){
        if (X[188] <= 73.00140418833095){
          return clf_res(17,  0);
        }else{  // if X[188] > 73.00140418833095
          return clf_res(5, 5);
        }
      }else{  // if X[34] > 50.956278366546705
        if (X[0] <= 58.95050870182312){
          return clf_res( 1, 10);
        }else{  // if X[0] > 58.95050870182312
          return clf_res(3, 1);
        }
      }
    }else{  // if X[110] > 81.98043903042976
      if (X[69] <= 32.10072891299244){
        if (X[24] <= 95.11977881528725){
          return clf_res(4, 3);
        }else{  // if X[24] > 95.11977881528725
          return clf_res(0, 6);
        }
      }else{  // if X[69] > 32.10072891299244
        if (X[398] <= 116.03811170123909){
          if (X[87] <= -2.223151955303017){
            return clf_res(1, 3);
          }else{  // if X[87] > -2.223151955303017
            if (X[142] <= 111.7324504888644){
              return clf_res( 1, 10);
            }else{  // if X[142] > 111.7324504888644
              return clf_res( 0, 45);
            }
          }
        }else{  // if X[398] > 116.03811170123909
          return clf_res(3, 2);
        }
      }
    }
  }
}

clf_res dt32(double X[584]){
  if (X[75] <= 30.504689006937145){
    if (X[162] <= 65.68692389033052){
      return clf_res(30,  0);
    }else{  // if X[162] > 65.68692389033052
      if (X[523] <= 65.90391609556326){
        return clf_res(6, 2);
      }else{  // if X[523] > 65.90391609556326
        return clf_res(0, 7);
      }
    }
  }else{  // if X[75] > 30.504689006937145
    if (X[272] <= 36.22495490402987){
      if (X[575] <= 71.67494538196912){
        if (X[448] <= 18.96127980900378){
          return clf_res(4, 1);
        }else{  // if X[448] > 18.96127980900378
          return clf_res(8, 0);
        }
      }else{  // if X[575] > 71.67494538196912
        if (X[46] <= 94.68126428767016){
          if (X[11] <= 114.12979019345201){
            return clf_res(9, 0);
          }else{  // if X[11] > 114.12979019345201
            return clf_res(1, 5);
          }
        }else{  // if X[46] > 94.68126428767016
          return clf_res(0, 8);
        }
      }
    }else{  // if X[272] > 36.22495490402987
      if (X[137] <= 94.75606510950723){
        if (X[405] <= 17.401639848018174){
          return clf_res(54,  0);
        }else{  // if X[405] > 17.401639848018174
          if (X[202] <= 98.33335753178895){
            return clf_res(7, 5);
          }else{  // if X[202] > 98.33335753178895
            if (X[195] <= 65.10690698783364){
              return clf_res(3, 1);
            }else{  // if X[195] > 65.10690698783364
              if (X[414] <= 31.300092918451394){
                return clf_res( 0, 38);
              }else{  // if X[414] > 31.300092918451394
                return clf_res(2, 4);
              }
            }
          }
        }
      }else{  // if X[137] > 94.75606510950723
        if (X[217] <= 104.34777157517318){
          if (X[55] <= 73.05106549192745){
            if (X[340] <= 158.9754285388877){
              return clf_res( 0, 69);
            }else{  // if X[340] > 158.9754285388877
              return clf_res(1, 4);
            }
          }else{  // if X[55] > 73.05106549192745
            return clf_res(5, 6);
          }
        }else{  // if X[217] > 104.34777157517318
          return clf_res(3, 2);
        }
      }
    }
  }
}

clf_res dt33(double X[584]){
  if (X[570] <= 37.45191028723385){
    if (X[581] <= 70.31638463156209){
      if (X[478] <= 86.78197020467917){
        return clf_res(8, 4);
      }else{  // if X[478] > 86.78197020467917
        return clf_res(2, 9);
      }
    }else{  // if X[581] > 70.31638463156209
      if (X[498] <= 1.1506512909484883){
        return clf_res(59,  0);
      }else{  // if X[498] > 1.1506512909484883
        if (X[111] <= 145.9905063757025){
          if (X[420] <= -1.444488216602963){
            return clf_res(10,  0);
          }else{  // if X[420] > -1.444488216602963
            return clf_res(5, 2);
          }
        }else{  // if X[111] > 145.9905063757025
          return clf_res( 0, 22);
        }
      }
    }
  }else{  // if X[570] > 37.45191028723385
    if (X[468] <= 85.90975880487204){
      if (X[400] <= 118.06879743564033){
        if (X[299] <= -15.650495861796898){
          return clf_res(10,  1);
        }else{  // if X[299] > -15.650495861796898
          if (X[368] <= 162.04548961250265){
            if (X[408] <= 81.26181309960704){
              if (X[208] <= 57.07057477596904){
                if (X[493] <= 141.20968155481927){
                  return clf_res(3, 2);
                }else{  // if X[493] > 141.20968155481927
                  return clf_res( 0, 11);
                }
              }else{  // if X[208] > 57.07057477596904
                return clf_res( 0, 82);
              }
            }else{  // if X[408] > 81.26181309960704
              return clf_res(7, 0);
            }
          }else{  // if X[368] > 162.04548961250265
            if (X[331] <= 29.350240541100536){
              return clf_res(0, 7);
            }else{  // if X[331] > 29.350240541100536
              if (X[30] <= -8.802955905120289){
                return clf_res(4, 3);
              }else{  // if X[30] > -8.802955905120289
                return clf_res(8, 0);
              }
            }
          }
        }
      }else{  // if X[400] > 118.06879743564033
        return clf_res(8, 0);
      }
    }else{  // if X[468] > 85.90975880487204
      return clf_res(18,  0);
    }
  }
}

clf_res dt34(double X[584]){
  if (X[165] <= 33.89288340699876){
    if (X[81] <= 111.41526414015891){
      return clf_res(33,  0);
    }else{  // if X[81] > 111.41526414015891
      return clf_res(7, 1);
    }
  }else{  // if X[165] > 33.89288340699876
    if (X[421] <= 96.17770730889238){
      if (X[543] <= 74.90681527184472){
        return clf_res(32,  0);
      }else{  // if X[543] > 74.90681527184472
        return clf_res(4, 1);
      }
    }else{  // if X[421] > 96.17770730889238
      if (X[369] <= -19.970010145421675){
        if (X[87] <= 60.90597452893645){
          if (X[237] <= 109.30644478420933){
            return clf_res(10,  0);
          }else{  // if X[237] > 109.30644478420933
            return clf_res(3, 1);
          }
        }else{  // if X[87] > 60.90597452893645
          if (X[368] <= -15.307328659102225){
            return clf_res(1, 3);
          }else{  // if X[368] > -15.307328659102225
            return clf_res( 0, 10);
          }
        }
      }else{  // if X[369] > -19.970010145421675
        if (X[95] <= 139.22725887149554){
          if (X[210] <= 35.61752438900894){
            if (X[201] <= 91.52978623900985){
              if (X[419] <= 89.85791954586344){
                return clf_res(13,  0);
              }else{  // if X[419] > 89.85791954586344
                return clf_res(1, 5);
              }
            }else{  // if X[201] > 91.52978623900985
              return clf_res(0, 7);
            }
          }else{  // if X[210] > 35.61752438900894
            if (X[417] <= 5.234455783911503){
              return clf_res(13,  0);
            }else{  // if X[417] > 5.234455783911503
              if (X[285] <= 131.11917694107){
                return clf_res(6, 0);
              }else{  // if X[285] > 131.11917694107
                if (X[323] <= 57.85870291985654){
                  return clf_res( 0, 46);
                }else{  // if X[323] > 57.85870291985654
                  if (X[89] <= -10.590968547493127){
                    if (X[570] <= 74.96004004034263){
                      if (X[59] <= 97.52625775885363){
                        return clf_res(1, 6);
                      }else{  // if X[59] > 97.52625775885363
                        return clf_res( 0, 13);
                      }
                    }else{  // if X[570] > 74.96004004034263
                      return clf_res(1, 3);
                    }
                  }else{  // if X[89] > -10.590968547493127
                    return clf_res( 0, 14);
                  }
                }
              }
            }
          }
        }else{  // if X[95] > 139.22725887149554
          return clf_res( 0, 50);
        }
      }
    }
  }
}

clf_res dt35(double X[584]){
  if (X[430] <= 47.807949859579246){
    return clf_res(102,   0);
  }else{  // if X[430] > 47.807949859579246
    if (X[342] <= 117.9505268347825){
      if (X[251] <= 45.17353365621785){
        if (X[235] <= 129.88637867485747){
          if (X[562] <= 21.55001101810481){
            return clf_res(8, 1);
          }else{  // if X[562] > 21.55001101810481
            if (X[69] <= 194.21239241306444){
              return clf_res(6, 6);
            }else{  // if X[69] > 194.21239241306444
              return clf_res(0, 8);
            }
          }
        }else{  // if X[235] > 129.88637867485747
          return clf_res( 0, 11);
        }
      }else{  // if X[251] > 45.17353365621785
        if (X[71] <= 4.684346345364798){
          return clf_res( 0, 79);
        }else{  // if X[71] > 4.684346345364798
          if (X[399] <= 91.03305234615047){
            if (X[79] <= 47.12151601217076){
              return clf_res( 0, 15);
            }else{  // if X[79] > 47.12151601217076
              return clf_res(4, 2);
            }
          }else{  // if X[399] > 91.03305234615047
            return clf_res( 0, 29);
          }
        }
      }
    }else{  // if X[342] > 117.9505268347825
      if (X[311] <= 74.76297882223264){
        return clf_res(2, 7);
      }else{  // if X[311] > 74.76297882223264
        return clf_res(5, 0);
      }
    }
  }
}

clf_res dt36(double X[584]){
  if (X[0] <= 35.49999972115437){
    if (X[43] <= 129.37187312852993){
      return clf_res(30,  0);
    }else{  // if X[43] > 129.37187312852993
      return clf_res(6, 1);
    }
  }else{  // if X[0] > 35.49999972115437
    if (X[339] <= 112.31800145901461){
      if (X[104] <= 24.07060444701954){
        if (X[511] <= 38.36848597634541){
          if (X[136] <= 121.37165053488948){
            return clf_res(12,  0);
          }else{  // if X[136] > 121.37165053488948
            if (X[342] <= 40.1555410229511){
              return clf_res(0, 8);
            }else{  // if X[342] > 40.1555410229511
              return clf_res(4, 4);
            }
          }
        }else{  // if X[511] > 38.36848597634541
          if (X[551] <= 63.399527231555226){
            return clf_res(1, 3);
          }else{  // if X[551] > 63.399527231555226
            return clf_res( 0, 34);
          }
        }
      }else{  // if X[104] > 24.07060444701954
        if (X[263] <= 81.16779747329834){
          if (X[468] <= 117.03074638446198){
            if (X[272] <= -3.833035664549456){
              return clf_res(3, 2);
            }else{  // if X[272] > -3.833035664549456
              return clf_res(5, 2);
            }
          }else{  // if X[468] > 117.03074638446198
            return clf_res(17,  0);
          }
        }else{  // if X[263] > 81.16779747329834
          return clf_res(0, 6);
        }
      }
    }else{  // if X[339] > 112.31800145901461
      if (X[138] <= 154.19624914352292){
        if (X[265] <= 40.015936771794266){
          if (X[201] <= 54.175568482287815){
            if (X[356] <= 110.29654971021462){
              return clf_res(6, 1);
            }else{  // if X[356] > 110.29654971021462
              return clf_res(0, 9);
            }
          }else{  // if X[201] > 54.175568482287815
            if (X[176] <= 101.57786336151025){
              return clf_res( 0, 16);
            }else{  // if X[176] > 101.57786336151025
              return clf_res(1, 5);
            }
          }
        }else{  // if X[265] > 40.015936771794266
          if (X[432] <= 113.92812758369182){
            if (X[219] <= 54.95329040777958){
              if (X[180] <= 71.41051537629141){
                if (X[532] <= 75.93733711479652){
                  return clf_res(3, 1);
                }else{  // if X[532] > 75.93733711479652
                  return clf_res(6, 1);
                }
              }else{  // if X[180] > 71.41051537629141
                return clf_res(8, 0);
              }
            }else{  // if X[219] > 54.95329040777958
              if (X[404] <= 3.950579031818137){
                return clf_res(9, 0);
              }else{  // if X[404] > 3.950579031818137
                if (X[384] <= 93.60868012517561){
                  return clf_res(5, 1);
                }else{  // if X[384] > 93.60868012517561
                  return clf_res( 0, 14);
                }
              }
            }
          }else{  // if X[432] > 113.92812758369182
            return clf_res(1, 6);
          }
        }
      }else{  // if X[138] > 154.19624914352292
        return clf_res( 0, 54);
      }
    }
  }
}

clf_res dt37(double X[584]){
  if (X[326] <= 41.68941638121935){
    if (X[132] <= 142.3237723136371){
      if (X[306] <= 107.43238429890101){
        if (X[235] <= 60.99145556259339){
          if (X[575] <= 157.39878785762266){
            return clf_res(51,  0);
          }else{  // if X[575] > 157.39878785762266
            return clf_res(4, 1);
          }
        }else{  // if X[235] > 60.99145556259339
          if (X[552] <= 77.64247962654682){
            return clf_res(5, 3);
          }else{  // if X[552] > 77.64247962654682
            return clf_res(6, 2);
          }
        }
      }else{  // if X[306] > 107.43238429890101
        return clf_res(3, 4);
      }
    }else{  // if X[132] > 142.3237723136371
      return clf_res(0, 8);
    }
  }else{  // if X[326] > 41.68941638121935
    if (X[283] <= 70.87677965004632){
      if (X[391] <= 62.70553512955252){
        return clf_res(38,  0);
      }else{  // if X[391] > 62.70553512955252
        if (X[116] <= 72.44638563920569){
          if (X[145] <= 111.53399592457659){
            return clf_res(5, 1);
          }else{  // if X[145] > 111.53399592457659
            return clf_res(5, 3);
          }
        }else{  // if X[116] > 72.44638563920569
          return clf_res( 0, 42);
        }
      }
    }else{  // if X[283] > 70.87677965004632
      if (X[298] <= 59.022241210392295){
        if (X[32] <= 70.44466238168607){
          if (X[48] <= 124.64407985532948){
            return clf_res( 0, 57);
          }else{  // if X[48] > 124.64407985532948
            if (X[23] <= 39.93856633617708){
              return clf_res(0, 5);
            }else{  // if X[23] > 39.93856633617708
              return clf_res(2, 5);
            }
          }
        }else{  // if X[32] > 70.44466238168607
          if (X[264] <= 31.127545528732288){
            return clf_res( 0, 12);
          }else{  // if X[264] > 31.127545528732288
            return clf_res(2, 3);
          }
        }
      }else{  // if X[298] > 59.022241210392295
        if (X[308] <= 50.96799291437118){
          return clf_res(7, 0);
        }else{  // if X[308] > 50.96799291437118
          if (X[341] <= 44.58529339992148){
            return clf_res(1, 3);
          }else{  // if X[341] > 44.58529339992148
            return clf_res(7, 0);
          }
        }
      }
    }
  }
}

clf_res dt38(double X[584]){
  if (X[421] <= 44.21174739190898){
    if (X[165] <= 85.87200671773087){
      return clf_res(51,  0);
    }else{  // if X[165] > 85.87200671773087
      if (X[359] <= 56.62929966516196){
        return clf_res(19,  0);
      }else{  // if X[359] > 56.62929966516196
        return clf_res(5, 3);
      }
    }
  }else{  // if X[421] > 44.21174739190898
    if (X[222] <= 43.03143610934989){
      if (X[325] <= 112.88887954604796){
        if (X[194] <= -110.59460521686617){
          return clf_res(1, 3);
        }else{  // if X[194] > -110.59460521686617
          if (X[480] <= 99.6176114702783){
            return clf_res(4, 1);
          }else{  // if X[480] > 99.6176114702783
            return clf_res(13,  0);
          }
        }
      }else{  // if X[325] > 112.88887954604796
        if (X[121] <= 103.6261250237934){
          if (X[110] <= 2.056077148339476){
            return clf_res(0, 8);
          }else{  // if X[110] > 2.056077148339476
            return clf_res(2, 3);
          }
        }else{  // if X[121] > 103.6261250237934
          return clf_res(4, 5);
        }
      }
    }else{  // if X[222] > 43.03143610934989
      if (X[498] <= 37.42498917932212){
        if (X[220] <= 133.57038611494676){
          return clf_res(11,  0);
        }else{  // if X[220] > 133.57038611494676
          return clf_res(2, 3);
        }
      }else{  // if X[498] > 37.42498917932212
        if (X[14] <= 88.9224662186532){
          if (X[411] <= 6.432932450176047){
            return clf_res(3, 2);
          }else{  // if X[411] > 6.432932450176047
            if (X[457] <= 85.02935575318233){
              if (X[259] <= 1.0887460633208583){
                return clf_res(1, 4);
              }else{  // if X[259] > 1.0887460633208583
                return clf_res( 0, 21);
              }
            }else{  // if X[457] > 85.02935575318233
              return clf_res( 0, 75);
            }
          }
        }else{  // if X[14] > 88.9224662186532
          if (X[108] <= 70.83221381710692){
            if (X[264] <= 152.657775299486){
              if (X[468] <= -4.617408132473795){
                return clf_res(3, 1);
              }else{  // if X[468] > -4.617408132473795
                return clf_res(2, 6);
              }
            }else{  // if X[264] > 152.657775299486
              return clf_res(6, 0);
            }
          }else{  // if X[108] > 70.83221381710692
            return clf_res( 0, 23);
          }
        }
      }
    }
  }
}

clf_res dt39(double X[584]){
  if (X[528] <= 84.87637903569396){
    if (X[455] <= 110.41309520644718){
      return clf_res(96,  0);
    }else{  // if X[455] > 110.41309520644718
      if (X[144] <= 32.42582492138492){
        if (X[357] <= 151.98089496584475){
          return clf_res(0, 7);
        }else{  // if X[357] > 151.98089496584475
          return clf_res(4, 3);
        }
      }else{  // if X[144] > 32.42582492138492
        if (X[352] <= 186.0254768653705){
          return clf_res(  0, 140);
        }else{  // if X[352] > 186.0254768653705
          return clf_res(3, 7);
        }
      }
    }
  }else{  // if X[528] > 84.87637903569396
    if (X[212] <= 153.48698090780738){
      return clf_res(19,  0);
    }else{  // if X[212] > 153.48698090780738
      return clf_res(4, 2);
    }
  }
}

clf_res dt40(double X[584]){
  if (X[93] <= 73.07774321385743){
    if (X[218] <= 132.17661618765595){
      if (X[245] <= 24.77106599934371){
        if (X[425] <= 43.38138966107283){
          if (X[275] <= 135.0411314252591){
            return clf_res(29,  0);
          }else{  // if X[275] > 135.0411314252591
            return clf_res(5, 2);
          }
        }else{  // if X[425] > 43.38138966107283
          if (X[419] <= 95.17474739548946){
            return clf_res(17,  0);
          }else{  // if X[419] > 95.17474739548946
            if (X[456] <= 74.75283200801456){
              if (X[510] <= 83.83709206259593){
                return clf_res(4, 1);
              }else{  // if X[510] > 83.83709206259593
                return clf_res(0, 7);
              }
            }else{  // if X[456] > 74.75283200801456
              return clf_res( 0, 16);
            }
          }
        }
      }else{  // if X[245] > 24.77106599934371
        if (X[486] <= -34.282343676154035){
          return clf_res(18,  0);
        }else{  // if X[486] > -34.282343676154035
          if (X[80] <= 91.50245857573496){
            if (X[224] <= 41.70013112169963){
              return clf_res(5, 1);
            }else{  // if X[224] > 41.70013112169963
              return clf_res(1, 3);
            }
          }else{  // if X[80] > 91.50245857573496
            return clf_res(14,  1);
          }
        }
      }
    }else{  // if X[218] > 132.17661618765595
      if (X[560] <= 46.25655178984431){
        if (X[63] <= 126.65879610261165){
          if (X[226] <= 69.64449291669398){
            return clf_res(3, 2);
          }else{  // if X[226] > 69.64449291669398
            if (X[131] <= 112.82890452007572){
              return clf_res(3, 5);
            }else{  // if X[131] > 112.82890452007572
              return clf_res(0, 7);
            }
          }
        }else{  // if X[63] > 126.65879610261165
          return clf_res( 0, 22);
        }
      }else{  // if X[560] > 46.25655178984431
        if (X[271] <= 133.21263006974885){
          if (X[216] <= 61.99017435054003){
            if (X[556] <= 159.8724221115953){
              return clf_res(3, 2);
            }else{  // if X[556] > 159.8724221115953
              return clf_res(4, 0);
            }
          }else{  // if X[216] > 61.99017435054003
            if (X[307] <= 14.12449627874814){
              if (X[396] <= 152.25348658340477){
                return clf_res(0, 5);
              }else{  // if X[396] > 152.25348658340477
                return clf_res(1, 4);
              }
            }else{  // if X[307] > 14.12449627874814
              if (X[130] <= 99.23476298686685){
                if (X[293] <= 109.81226150948561){
                  if (X[485] <= 124.59538260834366){
                    if (X[276] <= 46.48216455257409){
                      return clf_res(0, 9);
                    }else{  // if X[276] > 46.48216455257409
                      return clf_res(1, 4);
                    }
                  }else{  // if X[485] > 124.59538260834366
                    if (X[346] <= 57.02870589152805){
                      return clf_res(5, 2);
                    }else{  // if X[346] > 57.02870589152805
                      return clf_res(1, 5);
                    }
                  }
                }else{  // if X[293] > 109.81226150948561
                  return clf_res(0, 9);
                }
              }else{  // if X[130] > 99.23476298686685
                return clf_res(11,  2);
              }
            }
          }
        }else{  // if X[271] > 133.21263006974885
          return clf_res(6, 0);
        }
      }
    }
  }else{  // if X[93] > 73.07774321385743
    if (X[443] <= 28.4633338021499){
      return clf_res( 0, 36);
    }else{  // if X[443] > 28.4633338021499
      return clf_res(1, 8);
    }
  }
}

clf_res dt41(double X[584]){
  if (X[28] <= 52.13562230328757){
    if (X[535] <= 129.31468386105342){
      if (X[369] <= 58.00773469480567){
        if (X[155] <= 43.87018222301449){
          if (X[323] <= 116.57838496339552){
            return clf_res(6, 1);
          }else{  // if X[323] > 116.57838496339552
            return clf_res(3, 2);
          }
        }else{  // if X[155] > 43.87018222301449
          if (X[106] <= 118.33482151251589){
            return clf_res(37,  0);
          }else{  // if X[106] > 118.33482151251589
            return clf_res(8, 1);
          }
        }
      }else{  // if X[369] > 58.00773469480567
        if (X[43] <= 119.37282000556185){
          return clf_res(4, 0);
        }else{  // if X[43] > 119.37282000556185
          return clf_res(0, 8);
        }
      }
    }else{  // if X[535] > 129.31468386105342
      if (X[285] <= 97.00987315730109){
        return clf_res(4, 2);
      }else{  // if X[285] > 97.00987315730109
        if (X[314] <= 62.74479280847742){
          if (X[564] <= 98.70567060876164){
            if (X[496] <= 111.16218698060305){
              return clf_res(2, 5);
            }else{  // if X[496] > 111.16218698060305
              return clf_res(3, 4);
            }
          }else{  // if X[564] > 98.70567060876164
            return clf_res(0, 6);
          }
        }else{  // if X[314] > 62.74479280847742
          return clf_res( 0, 17);
        }
      }
    }
  }else{  // if X[28] > 52.13562230328757
    if (X[267] <= 191.66276832965156){
      if (X[402] <= 157.0662526515632){
        if (X[472] <= 76.86461260886196){
          if (X[421] <= 102.1584370169258){
            return clf_res(6, 2);
          }else{  // if X[421] > 102.1584370169258
            if (X[436] <= 30.895062656736705){
              return clf_res(3, 1);
            }else{  // if X[436] > 30.895062656736705
              if (X[415] <= 7.088238248705906){
                if (X[187] <= 67.74613060378925){
                  return clf_res(3, 5);
                }else{  // if X[187] > 67.74613060378925
                  return clf_res(6, 0);
                }
              }else{  // if X[415] > 7.088238248705906
                if (X[91] <= 10.158972853094866){
                  if (X[77] <= 102.77880569164682){
                    return clf_res(0, 9);
                  }else{  // if X[77] > 102.77880569164682
                    return clf_res(1, 7);
                  }
                }else{  // if X[91] > 10.158972853094866
                  return clf_res( 0, 94);
                }
              }
            }
          }
        }else{  // if X[472] > 76.86461260886196
          return clf_res(5, 0);
        }
      }else{  // if X[402] > 157.0662526515632
        return clf_res(15,  0);
      }
    }else{  // if X[267] > 191.66276832965156
      return clf_res(15,  0);
    }
  }
}

clf_res dt42(double X[584]){
  if (X[507] <= 26.539351980359346){
    if (X[132] <= 64.74868848680339){
      return clf_res(4, 2);
    }else{  // if X[132] > 64.74868848680339
      return clf_res(43,  0);
    }
  }else{  // if X[507] > 26.539351980359346
    if (X[191] <= 93.06696843433457){
      if (X[247] <= 64.46101310531193){
        return clf_res( 0, 51);
      }else{  // if X[247] > 64.46101310531193
        if (X[144] <= 150.6384483400634){
          if (X[8] <= 6.99999986786165){
            if (X[382] <= 72.2334442415533){
              return clf_res(2, 5);
            }else{  // if X[382] > 72.2334442415533
              return clf_res(1, 7);
            }
          }else{  // if X[8] > 6.99999986786165
            return clf_res( 0, 14);
          }
        }else{  // if X[144] > 150.6384483400634
          return clf_res(7, 3);
        }
      }
    }else{  // if X[191] > 93.06696843433457
      if (X[413] <= 17.826424642043925){
        return clf_res(53,  0);
      }else{  // if X[413] > 17.826424642043925
        if (X[59] <= 90.16707672500137){
          if (X[423] <= 41.89843445080127){
            return clf_res( 0, 53);
          }else{  // if X[423] > 41.89843445080127
            return clf_res(1, 8);
          }
        }else{  // if X[59] > 90.16707672500137
          if (X[537] <= -15.536054143202058){
            return clf_res(4, 0);
          }else{  // if X[537] > -15.536054143202058
            if (X[148] <= 169.18556820113176){
              if (X[454] <= 43.093674313676786){
                return clf_res(1, 5);
              }else{  // if X[454] > 43.093674313676786
                return clf_res( 0, 16);
              }
            }else{  // if X[148] > 169.18556820113176
              return clf_res(2, 3);
            }
          }
        }
      }
    }
  }
}

clf_res dt43(double X[584]){
  if (X[299] <= 38.277175845882255){
    if (X[67] <= 144.58874012518706){
      if (X[314] <= -98.98266994312337){
        return clf_res(6, 2);
      }else{  // if X[314] > -98.98266994312337
        return clf_res(45,  0);
      }
    }else{  // if X[67] > 144.58874012518706
      if (X[493] <= 14.690300743160634){
        return clf_res( 0, 10);
      }else{  // if X[493] > 14.690300743160634
        return clf_res(2, 6);
      }
    }
  }else{  // if X[299] > 38.277175845882255
    if (X[140] <= 75.5620898105893){
      if (X[492] <= 77.96941221873584){
        if (X[426] <= 73.03705332113107){
          return clf_res(6, 0);
        }else{  // if X[426] > 73.03705332113107
          if (X[26] <= 54.02167093227005){
            if (X[301] <= 110.68627516754484){
              if (X[254] <= 33.775867409331916){
                return clf_res(3, 4);
              }else{  // if X[254] > 33.775867409331916
                return clf_res( 0, 44);
              }
            }else{  // if X[301] > 110.68627516754484
              if (X[294] <= 47.8475629664293){
                if (X[553] <= 72.82705751229639){
                  return clf_res(0, 9);
                }else{  // if X[553] > 72.82705751229639
                  return clf_res(2, 3);
                }
              }else{  // if X[294] > 47.8475629664293
                if (X[438] <= 97.16755296277336){
                  return clf_res(4, 5);
                }else{  // if X[438] > 97.16755296277336
                  return clf_res(9, 1);
                }
              }
            }
          }else{  // if X[26] > 54.02167093227005
            if (X[511] <= 69.45654938131344){
              if (X[59] <= 104.08513772374171){
                return clf_res(0, 7);
              }else{  // if X[59] > 104.08513772374171
                if (X[437] <= 39.44770716264718){
                  return clf_res(7, 0);
                }else{  // if X[437] > 39.44770716264718
                  return clf_res(5, 2);
                }
              }
            }else{  // if X[511] > 69.45654938131344
              return clf_res(9, 0);
            }
          }
        }
      }else{  // if X[492] > 77.96941221873584
        return clf_res(31,  0);
      }
    }else{  // if X[140] > 75.5620898105893
      if (X[43] <= 82.14499853301017){
        if (X[242] <= 90.7474935039554){
          return clf_res( 0, 51);
        }else{  // if X[242] > 90.7474935039554
          return clf_res(3, 3);
        }
      }else{  // if X[43] > 82.14499853301017
        return clf_res(3, 3);
      }
    }
  }
}

clf_res dt44(double X[584]){
  if (X[434] <= 44.122208477919166){
    return clf_res(73,  0);
  }else{  // if X[434] > 44.122208477919166
    if (X[368] <= 6.846522057269198){
      if (X[116] <= 56.38523299458061){
        if (X[181] <= 38.81888120365568){
          return clf_res(7, 5);
        }else{  // if X[181] > 38.81888120365568
          if (X[334] <= 66.05811323373159){
            return clf_res(32,  0);
          }else{  // if X[334] > 66.05811323373159
            return clf_res(1, 3);
          }
        }
      }else{  // if X[116] > 56.38523299458061
        return clf_res( 0, 21);
      }
    }else{  // if X[368] > 6.846522057269198
      if (X[523] <= 73.91557264507554){
        if (X[496] <= 89.8573605819324){
          if (X[381] <= 64.1161159808631){
            return clf_res(3, 3);
          }else{  // if X[381] > 64.1161159808631
            return clf_res( 0, 16);
          }
        }else{  // if X[496] > 89.8573605819324
          if (X[438] <= 51.62822960155877){
            return clf_res(5, 0);
          }else{  // if X[438] > 51.62822960155877
            return clf_res(4, 3);
          }
        }
      }else{  // if X[523] > 73.91557264507554
        if (X[445] <= 78.04484867811043){
          if (X[39] <= 134.83727562014522){
            if (X[302] <= 49.99017380633816){
              if (X[164] <= 56.997382711611706){
                if (X[268] <= 140.51332022456614){
                  return clf_res( 1, 10);
                }else{  // if X[268] > 140.51332022456614
                  return clf_res(4, 1);
                }
              }else{  // if X[164] > 56.997382711611706
                return clf_res( 0, 15);
              }
            }else{  // if X[302] > 49.99017380633816
              return clf_res( 0, 27);
            }
          }else{  // if X[39] > 134.83727562014522
            return clf_res( 0, 43);
          }
        }else{  // if X[445] > 78.04484867811043
          return clf_res(5, 3);
        }
      }
    }
  }
}

clf_res dt45(double X[584]){
  if (X[331] <= 58.92332453803678){
    if (X[70] <= 139.9826326044371){
      if (X[139] <= 50.319837239088116){
        if (X[42] <= 70.35307199639968){
          if (X[266] <= 182.43903889959324){
            if (X[120] <= -61.9203626957906){
              return clf_res(11,  1);
            }else{  // if X[120] > -61.9203626957906
              if (X[541] <= 95.59946096637786){
                return clf_res(37,  0);
              }else{  // if X[541] > 95.59946096637786
                if (X[520] <= 89.4174085083925){
                  return clf_res(24,  0);
                }else{  // if X[520] > 89.4174085083925
                  return clf_res(6, 1);
                }
              }
            }
          }else{  // if X[266] > 182.43903889959324
            return clf_res(4, 5);
          }
        }else{  // if X[42] > 70.35307199639968
          if (X[578] <= 141.16459422582054){
            return clf_res(10,  2);
          }else{  // if X[578] > 141.16459422582054
            return clf_res(0, 4);
          }
        }
      }else{  // if X[139] > 50.319837239088116
        return clf_res( 0, 14);
      }
    }else{  // if X[70] > 139.9826326044371
      if (X[319] <= 65.42132034575549){
        return clf_res( 0, 38);
      }else{  // if X[319] > 65.42132034575549
        if (X[524] <= 96.25306622035619){
          return clf_res(3, 4);
        }else{  // if X[524] > 96.25306622035619
          return clf_res(3, 6);
        }
      }
    }
  }else{  // if X[331] > 58.92332453803678
    if (X[478] <= 73.7862732543322){
      if (X[545] <= 33.117781788932945){
        if (X[53] <= 43.1743940053124){
          return clf_res(10,  0);
        }else{  // if X[53] > 43.1743940053124
          return clf_res(5, 2);
        }
      }else{  // if X[545] > 33.117781788932945
        return clf_res(5, 5);
      }
    }else{  // if X[478] > 73.7862732543322
      if (X[195] <= 155.28840703824287){
        if (X[453] <= 27.455145977746536){
          return clf_res(2, 5);
        }else{  // if X[453] > 27.455145977746536
          return clf_res( 0, 63);
        }
      }else{  // if X[195] > 155.28840703824287
        if (X[52] <= 81.37611340572523){
          return clf_res(2, 5);
        }else{  // if X[52] > 81.37611340572523
          return clf_res(5, 3);
        }
      }
    }
  }
}

clf_res dt46(double X[584]){
  if (X[575] <= 31.815293659207548){
    if (X[489] <= 95.94459324440726){
      return clf_res(52,  0);
    }else{  // if X[489] > 95.94459324440726
      if (X[452] <= 43.92146917921628){
        return clf_res(13,  0);
      }else{  // if X[452] > 43.92146917921628
        if (X[419] <= 12.176530650181768){
          return clf_res(5, 1);
        }else{  // if X[419] > 12.176530650181768
          if (X[69] <= 86.27602137132585){
            return clf_res(3, 4);
          }else{  // if X[69] > 86.27602137132585
            return clf_res( 0, 11);
          }
        }
      }
    }
  }else{  // if X[575] > 31.815293659207548
    if (X[180] <= 68.88291927687577){
      if (X[117] <= -30.815189285981496){
        return clf_res(19,  0);
      }else{  // if X[117] > -30.815189285981496
        return clf_res(1, 4);
      }
    }else{  // if X[180] > 68.88291927687577
      if (X[75] <= 45.1478302691966){
        if (X[39] <= 34.39250526713031){
          return clf_res(4, 0);
        }else{  // if X[39] > 34.39250526713031
          if (X[576] <= 112.65693210879752){
            if (X[299] <= 48.7952596280586){
              if (X[562] <= 80.70966378749662){
                return clf_res(2, 3);
              }else{  // if X[562] > 80.70966378749662
                return clf_res(0, 5);
              }
            }else{  // if X[299] > 48.7952596280586
              if (X[60] <= 64.73981110288673){
                if (X[219] <= 97.97134320257085){
                  return clf_res(0, 4);
                }else{  // if X[219] > 97.97134320257085
                  return clf_res(1, 4);
                }
              }else{  // if X[60] > 64.73981110288673
                return clf_res( 0, 89);
              }
            }
          }else{  // if X[576] > 112.65693210879752
            return clf_res(5, 5);
          }
        }
      }else{  // if X[75] > 45.1478302691966
        if (X[189] <= 157.89291110630225){
          if (X[385] <= -36.27647229097275){
            return clf_res(12,  0);
          }else{  // if X[385] > -36.27647229097275
            if (X[518] <= 110.08337402847886){
              return clf_res(6, 2);
            }else{  // if X[518] > 110.08337402847886
              if (X[235] <= 84.33640895398973){
                return clf_res( 0, 13);
              }else{  // if X[235] > 84.33640895398973
                return clf_res(1, 4);
              }
            }
          }
        }else{  // if X[189] > 157.89291110630225
          return clf_res( 1, 11);
        }
      }
    }
  }
}

clf_res dt47(double X[584]){
  if (X[206] <= 63.602769867462854){
    if (X[121] <= 118.83549132647994){
      if (X[258] <= -69.51250391528055){
        if (X[305] <= 27.228706485374016){
          return clf_res(5, 1);
        }else{  // if X[305] > 27.228706485374016
          return clf_res(0, 7);
        }
      }else{  // if X[258] > -69.51250391528055
        if (X[582] <= 55.76377468371801){
          if (X[479] <= 117.68544571331815){
            if (X[528] <= 154.158425485473){
              return clf_res(47,  0);
            }else{  // if X[528] > 154.158425485473
              return clf_res(4, 1);
            }
          }else{  // if X[479] > 117.68544571331815
            return clf_res(6, 1);
          }
        }else{  // if X[582] > 55.76377468371801
          if (X[361] <= 9.681139348201462){
            return clf_res(0, 9);
          }else{  // if X[361] > 9.681139348201462
            if (X[34] <= 4.53842373083965){
              return clf_res(11,  0);
            }else{  // if X[34] > 4.53842373083965
              return clf_res(2, 3);
            }
          }
        }
      }
    }else{  // if X[121] > 118.83549132647994
      if (X[412] <= -8.372623943430845){
        return clf_res(18,  0);
      }else{  // if X[412] > -8.372623943430845
        if (X[363] <= 174.70219119608527){
          if (X[193] <= 60.699703174753786){
            return clf_res( 0, 31);
          }else{  // if X[193] > 60.699703174753786
            if (X[423] <= 91.56975123054454){
              return clf_res(3, 3);
            }else{  // if X[423] > 91.56975123054454
              return clf_res(2, 3);
            }
          }
        }else{  // if X[363] > 174.70219119608527
          return clf_res(4, 2);
        }
      }
    }
  }else{  // if X[206] > 63.602769867462854
    if (X[62] <= -5.603086154580499){
      if (X[538] <= 81.17227235523323){
        if (X[546] <= 145.7353078194054){
          return clf_res(0, 7);
        }else{  // if X[546] > 145.7353078194054
          return clf_res(3, 8);
        }
      }else{  // if X[538] > 81.17227235523323
        return clf_res( 0, 24);
      }
    }else{  // if X[62] > -5.603086154580499
      if (X[80] <= 46.64751747562593){
        if (X[578] <= 95.27381116406195){
          if (X[89] <= 86.6963446918445){
            if (X[405] <= 6.561582992815154){
              return clf_res(8, 0);
            }else{  // if X[405] > 6.561582992815154
              return clf_res(0, 5);
            }
          }else{  // if X[89] > 86.6963446918445
            if (X[195] <= 67.06356384591288){
              return clf_res(1, 6);
            }else{  // if X[195] > 67.06356384591288
              if (X[219] <= 157.37648866357657){
                return clf_res( 0, 23);
              }else{  // if X[219] > 157.37648866357657
                return clf_res( 1, 11);
              }
            }
          }
        }else{  // if X[578] > 95.27381116406195
          return clf_res( 0, 17);
        }
      }else{  // if X[80] > 46.64751747562593
        return clf_res(8, 0);
      }
    }
  }
}

clf_res dt48(double X[584]){
  if (X[440] <= 41.985361964628254){
    return clf_res(40,  0);
  }else{  // if X[440] > 41.985361964628254
    if (X[90] <= -46.316251470822756){
      return clf_res(40,  0);
    }else{  // if X[90] > -46.316251470822756
      if (X[511] <= 61.194365437009516){
        if (X[39] <= 21.62099118733014){
          return clf_res(4, 3);
        }else{  // if X[39] > 21.62099118733014
          return clf_res(6, 1);
        }
      }else{  // if X[511] > 61.194365437009516
        if (X[35] <= 10.194659944036818){
          if (X[230] <= 56.07464732695472){
            if (X[537] <= 87.37047698505604){
              return clf_res(5, 1);
            }else{  // if X[537] > 87.37047698505604
              return clf_res(0, 8);
            }
          }else{  // if X[230] > 56.07464732695472
            if (X[104] <= 98.40669920811737){
              return clf_res( 0, 76);
            }else{  // if X[104] > 98.40669920811737
              if (X[431] <= 61.498774819875806){
                return clf_res(1, 8);
              }else{  // if X[431] > 61.498774819875806
                return clf_res(0, 9);
              }
            }
          }
        }else{  // if X[35] > 10.194659944036818
          if (X[136] <= 60.486722864099384){
            if (X[425] <= 119.3853519915018){
              if (X[446] <= 54.25579566863023){
                if (X[458] <= 42.75312032469279){
                  return clf_res(6, 3);
                }else{  // if X[458] > 42.75312032469279
                  if (X[314] <= -22.33163621818338){
                    return clf_res(0, 5);
                  }else{  // if X[314] > -22.33163621818338
                    return clf_res(2, 4);
                  }
                }
              }else{  // if X[446] > 54.25579566863023
                return clf_res(6, 1);
              }
            }else{  // if X[425] > 119.3853519915018
              return clf_res(13,  0);
            }
          }else{  // if X[136] > 60.486722864099384
            if (X[24] <= 194.8332430688048){
              if (X[300] <= 28.371749060969396){
                return clf_res( 0, 18);
              }else{  // if X[300] > 28.371749060969396
                if (X[208] <= 149.09391740726923){
                  return clf_res( 0, 11);
                }else{  // if X[208] > 149.09391740726923
                  return clf_res(2, 6);
                }
              }
            }else{  // if X[24] > 194.8332430688048
              return clf_res(4, 2);
            }
          }
        }
      }
    }
  }
}

clf_res dt49(double X[584]){
  if (X[434] <= 44.122208477919166){
    return clf_res(61,  0);
  }else{  // if X[434] > 44.122208477919166
    if (X[440] <= 0.0421568762237996){
      return clf_res(33,  0);
    }else{  // if X[440] > 0.0421568762237996
      if (X[37] <= 111.92285721576077){
        if (X[216] <= -135.82884736895144){
          return clf_res(0, 9);
        }else{  // if X[216] > -135.82884736895144
          if (X[350] <= 138.48993764889312){
            if (X[352] <= 30.551494387927434){
              if (X[312] <= 64.69004433237842){
                return clf_res(18,  0);
              }else{  // if X[312] > 64.69004433237842
                return clf_res(5, 1);
              }
            }else{  // if X[352] > 30.551494387927434
              return clf_res(5, 3);
            }
          }else{  // if X[350] > 138.48993764889312
            if (X[255] <= 83.62066356870956){
              return clf_res( 0, 10);
            }else{  // if X[255] > 83.62066356870956
              return clf_res(2, 5);
            }
          }
        }
      }else{  // if X[37] > 111.92285721576077
        if (X[381] <= 161.49101482022368){
          if (X[119] <= -1.302417759390849){
            if (X[200] <= 75.84746970645213){
              return clf_res(0, 8);
            }else{  // if X[200] > 75.84746970645213
              if (X[175] <= 59.67490558946868){
                return clf_res(0, 7);
              }else{  // if X[175] > 59.67490558946868
                return clf_res(2, 2);
              }
            }
          }else{  // if X[119] > -1.302417759390849
            return clf_res(  0, 107);
          }
        }else{  // if X[381] > 161.49101482022368
          return clf_res(2, 5);
        }
      }
    }
  }
}

clf_res dt50(double X[584]){
  if (X[162] <= 65.7752704797843){
    if (X[553] <= 116.2850389151885){
      if (X[441] <= 12.602657186062878){
        return clf_res(89,  0);
      }else{  // if X[441] > 12.602657186062878
        if (X[64] <= 111.03436947378955){
          if (X[412] <= 29.588900011180563){
            return clf_res(11,  0);
          }else{  // if X[412] > 29.588900011180563
            return clf_res(4, 4);
          }
        }else{  // if X[64] > 111.03436947378955
          if (X[329] <= 37.30486192979801){
            return clf_res(8, 2);
          }else{  // if X[329] > 37.30486192979801
            if (X[512] <= 96.07300406948735){
              return clf_res(5, 3);
            }else{  // if X[512] > 96.07300406948735
              return clf_res( 0, 25);
            }
          }
        }
      }
    }else{  // if X[553] > 116.2850389151885
      if (X[288] <= 168.64722409006177){
        if (X[473] <= -23.505814028003726){
          return clf_res(4, 1);
        }else{  // if X[473] > -23.505814028003726
          if (X[433] <= 85.19975232750355){
            return clf_res(5, 3);
          }else{  // if X[433] > 85.19975232750355
            if (X[455] <= 63.462056863748025){
              return clf_res(3, 1);
            }else{  // if X[455] > 63.462056863748025
              return clf_res( 0, 26);
            }
          }
        }
      }else{  // if X[288] > 168.64722409006177
        return clf_res(7, 3);
      }
    }
  }else{  // if X[162] > 65.7752704797843
    if (X[214] <= 105.09470464575716){
      if (X[149] <= 56.522460167310484){
        return clf_res( 0, 23);
      }else{  // if X[149] > 56.522460167310484
        if (X[276] <= 112.15660951559722){
          return clf_res(5, 4);
        }else{  // if X[276] > 112.15660951559722
          return clf_res(1, 4);
        }
      }
    }else{  // if X[214] > 105.09470464575716
      return clf_res( 0, 44);
    }
  }
}

clf_res dt51(double X[584]){
  if (X[284] <= 49.48908284075559){
    if (X[81] <= 173.35878583209194){
      if (X[298] <= 25.50475821105251){
        return clf_res(49,  0);
      }else{  // if X[298] > 25.50475821105251
        if (X[212] <= 11.8057018417649){
          return clf_res(3, 6);
        }else{  // if X[212] > 11.8057018417649
          if (X[64] <= 38.639314094199186){
            return clf_res(5, 1);
          }else{  // if X[64] > 38.639314094199186
            if (X[140] <= -3.7917714380095973){
              return clf_res(33,  0);
            }else{  // if X[140] > -3.7917714380095973
              return clf_res(9, 1);
            }
          }
        }
      }
    }else{  // if X[81] > 173.35878583209194
      return clf_res( 0, 11);
    }
  }else{  // if X[284] > 49.48908284075559
    if (X[522] <= 37.06969873923116){
      return clf_res(10,  0);
    }else{  // if X[522] > 37.06969873923116
      if (X[577] <= 147.1277014472953){
        if (X[351] <= 96.90190270834401){
          if (X[492] <= 153.40113643388594){
            if (X[142] <= 53.054405956875996){
              if (X[338] <= 75.7160441430884){
                if (X[270] <= 129.31884831180648){
                  return clf_res(0, 9);
                }else{  // if X[270] > 129.31884831180648
                  return clf_res(3, 4);
                }
              }else{  // if X[338] > 75.7160441430884
                return clf_res( 0, 11);
              }
            }else{  // if X[142] > 53.054405956875996
              if (X[528] <= -21.35955584356388){
                if (X[555] <= 32.74079593063021){
                  return clf_res(1, 4);
                }else{  // if X[555] > 32.74079593063021
                  return clf_res( 0, 19);
                }
              }else{  // if X[528] > -21.35955584356388
                return clf_res( 0, 78);
              }
            }
          }else{  // if X[492] > 153.40113643388594
            return clf_res(3, 2);
          }
        }else{  // if X[351] > 96.90190270834401
          return clf_res(2, 6);
        }
      }else{  // if X[577] > 147.1277014472953
        if (X[238] <= 72.4491179389218){
          return clf_res(4, 5);
        }else{  // if X[238] > 72.4491179389218
          return clf_res(2, 4);
        }
      }
    }
  }
}

clf_res dt52(double X[584]){
  if (X[18] <= 25.396498096557394){
    return clf_res(25,  0);
  }else{  // if X[18] > 25.396498096557394
    if (X[119] <= 95.8828835610592){
      if (X[358] <= 60.31912151281009){
        if (X[448] <= 97.651067737391){
          if (X[567] <= -4.7091284597890635){
            if (X[465] <= 43.87670699893152){
              return clf_res(10,  1);
            }else{  // if X[465] > 43.87670699893152
              return clf_res(2, 4);
            }
          }else{  // if X[567] > -4.7091284597890635
            if (X[21] <= 42.07131985490754){
              return clf_res(4, 2);
            }else{  // if X[21] > 42.07131985490754
              if (X[279] <= 60.922743569595866){
                return clf_res(5, 6);
              }else{  // if X[279] > 60.922743569595866
                return clf_res(1, 8);
              }
            }
          }
        }else{  // if X[448] > 97.651067737391
          return clf_res(43,  0);
        }
      }else{  // if X[358] > 60.31912151281009
        if (X[52] <= 85.8000780060607){
          if (X[442] <= 96.44537780402865){
            if (X[577] <= -15.277280230304378){
              return clf_res(10,  0);
            }else{  // if X[577] > -15.277280230304378
              return clf_res(4, 4);
            }
          }else{  // if X[442] > 96.44537780402865
            if (X[287] <= 35.770977678438705){
              return clf_res(4, 2);
            }else{  // if X[287] > 35.770977678438705
              if (X[391] <= 77.90048352340666){
                return clf_res(1, 8);
              }else{  // if X[391] > 77.90048352340666
                return clf_res( 0, 69);
              }
            }
          }
        }else{  // if X[52] > 85.8000780060607
          if (X[447] <= 110.31320861650836){
            return clf_res(6, 2);
          }else{  // if X[447] > 110.31320861650836
            return clf_res(4, 5);
          }
        }
      }
    }else{  // if X[119] > 95.8828835610592
      if (X[77] <= 109.553163229408){
        return clf_res( 0, 48);
      }else{  // if X[77] > 109.553163229408
        return clf_res(1, 6);
      }
    }
  }
}

clf_res dt53(double X[584]){
  if (X[178] <= 46.267941447290575){
    if (X[140] <= 124.5310652258377){
      if (X[392] <= 6.372829508098498){
        if (X[347] <= 7.77118639693591){
          return clf_res(3, 1);
        }else{  // if X[347] > 7.77118639693591
          return clf_res(46,  0);
        }
      }else{  // if X[392] > 6.372829508098498
        if (X[431] <= 51.065577698313085){
          return clf_res(15,  0);
        }else{  // if X[431] > 51.065577698313085
          return clf_res(0, 5);
        }
      }
    }else{  // if X[140] > 124.5310652258377
      if (X[248] <= 64.80456139075653){
        return clf_res( 0, 22);
      }else{  // if X[248] > 64.80456139075653
        return clf_res(1, 3);
      }
    }
  }else{  // if X[178] > 46.267941447290575
    if (X[121] <= 82.6532295870746){
      if (X[351] <= 82.55886944551366){
        return clf_res( 0, 21);
      }else{  // if X[351] > 82.55886944551366
        if (X[349] <= 54.77013789130753){
          return clf_res(8, 3);
        }else{  // if X[349] > 54.77013789130753
          if (X[278] <= -4.7663974700952){
            if (X[304] <= 55.77779264723404){
              return clf_res(2, 2);
            }else{  // if X[304] > 55.77779264723404
              return clf_res(9, 0);
            }
          }else{  // if X[278] > -4.7663974700952
            if (X[528] <= 99.06758351596288){
              if (X[470] <= 108.52681019113781){
                if (X[96] <= 40.99849893311372){
                  if (X[536] <= 39.27941391908362){
                    return clf_res(2, 3);
                  }else{  // if X[536] > 39.27941391908362
                    if (X[467] <= -30.59694983617622){
                      return clf_res(1, 8);
                    }else{  // if X[467] > -30.59694983617622
                      return clf_res( 0, 23);
                    }
                  }
                }else{  // if X[96] > 40.99849893311372
                  return clf_res(9, 3);
                }
              }else{  // if X[470] > 108.52681019113781
                if (X[402] <= 39.24874785876938){
                  return clf_res(1, 7);
                }else{  // if X[402] > 39.24874785876938
                  return clf_res( 0, 36);
                }
              }
            }else{  // if X[528] > 99.06758351596288
              return clf_res(6, 1);
            }
          }
        }
      }
    }else{  // if X[121] > 82.6532295870746
      if (X[214] <= 32.4191674685447){
        return clf_res( 0, 17);
      }else{  // if X[214] > 32.4191674685447
        if (X[415] <= 60.104102137597295){
          return clf_res(18,  0);
        }else{  // if X[415] > 60.104102137597295
          return clf_res(8, 1);
        }
      }
    }
  }
}

clf_res dt54(double X[584]){
  if (X[414] <= 39.88294162367308){
    return clf_res(105,   0);
  }else{  // if X[414] > 39.88294162367308
    if (X[169] <= 125.69614038194732){
      if (X[176] <= 46.68169077266147){
        if (X[454] <= 107.12861896203381){
          return clf_res(5, 7);
        }else{  // if X[454] > 107.12861896203381
          if (X[383] <= 95.01958387577173){
            if (X[198] <= 183.12057557222167){
              return clf_res(  0, 110);
            }else{  // if X[198] > 183.12057557222167
              return clf_res(1, 3);
            }
          }else{  // if X[383] > 95.01958387577173
            return clf_res(1, 4);
          }
        }
      }else{  // if X[176] > 46.68169077266147
        if (X[443] <= 33.371543257880056){
          if (X[544] <= 60.043711695331496){
            return clf_res(3, 6);
          }else{  // if X[544] > 60.043711695331496
            if (X[207] <= -61.465213395839164){
              return clf_res(1, 5);
            }else{  // if X[207] > -61.465213395839164
              return clf_res( 0, 19);
            }
          }
        }else{  // if X[443] > 33.371543257880056
          if (X[50] <= 68.53796541460609){
            return clf_res(2, 2);
          }else{  // if X[50] > 68.53796541460609
            return clf_res(5, 0);
          }
        }
      }
    }else{  // if X[169] > 125.69614038194732
      return clf_res(5, 1);
    }
  }
}

clf_res dt55(double X[584]){
  if (X[36] <= 78.91865317199127){
    if (X[414] <= 86.3868129484266){
      if (X[543] <= 116.13737642564769){
        return clf_res(92,  0);
      }else{  // if X[543] > 116.13737642564769
        if (X[458] <= 76.4365723681105){
          return clf_res(3, 2);
        }else{  // if X[458] > 76.4365723681105
          return clf_res(16,  0);
        }
      }
    }else{  // if X[414] > 86.3868129484266
      if (X[365] <= -4.7602825618950675){
        return clf_res(5, 1);
      }else{  // if X[365] > -4.7602825618950675
        if (X[88] <= 39.866118117868496){
          if (X[259] <= 70.09170084585405){
            return clf_res(3, 5);
          }else{  // if X[259] > 70.09170084585405
            return clf_res(5, 0);
          }
        }else{  // if X[88] > 39.866118117868496
          if (X[258] <= 193.55772007433865){
            if (X[542] <= -20.945860638025003){
              return clf_res(4, 4);
            }else{  // if X[542] > -20.945860638025003
              if (X[320] <= 69.57717609650987){
                return clf_res(2, 5);
              }else{  // if X[320] > 69.57717609650987
                if (X[463] <= 66.07865293447962){
                  return clf_res( 0, 92);
                }else{  // if X[463] > 66.07865293447962
                  return clf_res(1, 7);
                }
              }
            }
          }else{  // if X[258] > 193.55772007433865
            return clf_res(3, 2);
          }
        }
      }
    }
  }else{  // if X[36] > 78.91865317199127
    if (X[18] <= 198.63165352543905){
      return clf_res( 0, 28);
    }else{  // if X[18] > 198.63165352543905
      return clf_res(1, 4);
    }
  }
}

clf_res dt56(double X[584]){
  if (X[223] <= 61.10165734465983){
    if (X[402] <= 78.39111870849806){
      return clf_res(52,  0);
    }else{  // if X[402] > 78.39111870849806
      if (X[497] <= 45.635749369456086){
        if (X[372] <= 140.21528187669762){
          if (X[574] <= 29.63460686203365){
            return clf_res(33,  0);
          }else{  // if X[574] > 29.63460686203365
            return clf_res(1, 9);
          }
        }else{  // if X[372] > 140.21528187669762
          if (X[462] <= 5.93574057475163){
            return clf_res(2, 5);
          }else{  // if X[462] > 5.93574057475163
            return clf_res(1, 4);
          }
        }
      }else{  // if X[497] > 45.635749369456086
        if (X[464] <= 138.24994859746246){
          if (X[461] <= 66.31202443916115){
            if (X[404] <= 85.27647393557801){
              return clf_res(1, 3);
            }else{  // if X[404] > 85.27647393557801
              return clf_res( 0, 30);
            }
          }else{  // if X[461] > 66.31202443916115
            if (X[463] <= 127.9317212773779){
              return clf_res(7, 3);
            }else{  // if X[463] > 127.9317212773779
              return clf_res( 0, 11);
            }
          }
        }else{  // if X[464] > 138.24994859746246
          return clf_res(7, 2);
        }
      }
    }
  }else{  // if X[223] > 61.10165734465983
    if (X[191] <= 5.634641266013226){
      if (X[130] <= 53.793912068469616){
        return clf_res(1, 5);
      }else{  // if X[130] > 53.793912068469616
        if (X[34] <= 68.19694161179042){
          return clf_res( 0, 21);
        }else{  // if X[34] > 68.19694161179042
          return clf_res(1, 5);
        }
      }
    }else{  // if X[191] > 5.634641266013226
      if (X[45] <= -38.917557030762424){
        return clf_res(10,  0);
      }else{  // if X[45] > -38.917557030762424
        if (X[129] <= 106.55252501011572){
          if (X[342] <= 95.89572026763523){
            if (X[275] <= 38.89269623086739){
              return clf_res(6, 0);
            }else{  // if X[275] > 38.89269623086739
              if (X[66] <= 29.058061470240972){
                return clf_res(3, 4);
              }else{  // if X[66] > 29.058061470240972
                return clf_res( 0, 19);
              }
            }
          }else{  // if X[342] > 95.89572026763523
            return clf_res(8, 2);
          }
        }else{  // if X[129] > 106.55252501011572
          return clf_res( 0, 29);
        }
      }
    }
  }
}

clf_res dt57(double X[584]){
  if (X[174] <= 37.84000954259447){
    if (X[40] <= 140.40532891236626){
      if (X[189] <= 122.97361701786983){
        if (X[160] <= 51.55602295482545){
          if (X[283] <= 127.41429722227483){
            return clf_res(33,  0);
          }else{  // if X[283] > 127.41429722227483
            return clf_res(4, 1);
          }
        }else{  // if X[160] > 51.55602295482545
          return clf_res(5, 2);
        }
      }else{  // if X[189] > 122.97361701786983
        return clf_res(0, 5);
      }
    }else{  // if X[40] > 140.40532891236626
      if (X[177] <= 41.357414363985384){
        return clf_res(4, 4);
      }else{  // if X[177] > 41.357414363985384
        return clf_res( 0, 11);
      }
    }
  }else{  // if X[174] > 37.84000954259447
    if (X[381] <= 69.29383982438337){
      if (X[564] <= 155.5781171127688){
        if (X[414] <= 3.8117247179215212){
          return clf_res(22,  0);
        }else{  // if X[414] > 3.8117247179215212
          if (X[561] <= 183.78608579089902){
            if (X[21] <= 46.134918425754805){
              return clf_res( 1, 10);
            }else{  // if X[21] > 46.134918425754805
              return clf_res( 0, 27);
            }
          }else{  // if X[561] > 183.78608579089902
            return clf_res(2, 3);
          }
        }
      }else{  // if X[564] > 155.5781171127688
        return clf_res(19,  0);
      }
    }else{  // if X[381] > 69.29383982438337
      if (X[503] <= 76.50486146391924){
        if (X[73] <= 74.81997977557788){
          if (X[138] <= 38.401943243449544){
            return clf_res(2, 7);
          }else{  // if X[138] > 38.401943243449544
            return clf_res(4, 3);
          }
        }else{  // if X[73] > 74.81997977557788
          return clf_res(7, 2);
        }
      }else{  // if X[503] > 76.50486146391924
        if (X[507] <= 59.562286789806926){
          return clf_res(3, 1);
        }else{  // if X[507] > 59.562286789806926
          if (X[141] <= 33.09213487109855){
            return clf_res( 0, 23);
          }else{  // if X[141] > 33.09213487109855
            if (X[253] <= 84.3852720423284){
              if (X[489] <= 47.37668132542531){
                if (X[216] <= 129.53325847209663){
                  return clf_res( 0, 11);
                }else{  // if X[216] > 129.53325847209663
                  return clf_res(5, 5);
                }
              }else{  // if X[489] > 47.37668132542531
                return clf_res( 0, 53);
              }
            }else{  // if X[253] > 84.3852720423284
              return clf_res(4, 2);
            }
          }
        }
      }
    }
  }
}

clf_res dt58(double X[584]){
  if (X[398] <= 42.937728001162725){
    if (X[329] <= 149.94955716267913){
      return clf_res(48,  0);
    }else{  // if X[329] > 149.94955716267913
      return clf_res(3, 1);
    }
  }else{  // if X[398] > 42.937728001162725
    if (X[413] <= 100.93269605390796){
      if (X[335] <= 36.581475644759706){
        return clf_res(44,  0);
      }else{  // if X[335] > 36.581475644759706
        if (X[64] <= 129.92568038838667){
          return clf_res(15,  0);
        }else{  // if X[64] > 129.92568038838667
          return clf_res(7, 2);
        }
      }
    }else{  // if X[413] > 100.93269605390796
      if (X[76] <= 38.821401885604544){
        if (X[475] <= 15.243057743283298){
          return clf_res(8, 2);
        }else{  // if X[475] > 15.243057743283298
          return clf_res(0, 8);
        }
      }else{  // if X[76] > 38.821401885604544
        if (X[252] <= 15.655460660738726){
          if (X[331] <= 42.42434489924639){
            if (X[32] <= 116.61318275854423){
              return clf_res(1, 5);
            }else{  // if X[32] > 116.61318275854423
              return clf_res(4, 3);
            }
          }else{  // if X[331] > 42.42434489924639
            if (X[165] <= 83.30105173862097){
              if (X[102] <= 11.255151907680023){
                return clf_res(1, 4);
              }else{  // if X[102] > 11.255151907680023
                return clf_res(0, 9);
              }
            }else{  // if X[165] > 83.30105173862097
              return clf_res( 0, 18);
            }
          }
        }else{  // if X[252] > 15.655460660738726
          if (X[375] <= 44.48249378633952){
            if (X[269] <= 94.5963621407265){
              return clf_res(1, 5);
            }else{  // if X[269] > 94.5963621407265
              return clf_res( 0, 26);
            }
          }else{  // if X[375] > 44.48249378633952
            return clf_res( 0, 70);
          }
        }
      }
    }
  }
}

clf_res dt59(double X[584]){
  if (X[386] <= 38.658239380180795){
    if (X[194] <= 134.09859210891602){
      return clf_res(56,  0);
    }else{  // if X[194] > 134.09859210891602
      if (X[527] <= 39.41009654838015){
        return clf_res(7, 0);
      }else{  // if X[527] > 39.41009654838015
        return clf_res(0, 8);
      }
    }
  }else{  // if X[386] > 38.658239380180795
    if (X[126] <= 42.776725142316025){
      if (X[184] <= 59.85785793400766){
        return clf_res(3, 2);
      }else{  // if X[184] > 59.85785793400766
        if (X[267] <= 44.55537338828402){
          return clf_res(2, 7);
        }else{  // if X[267] > 44.55537338828402
          return clf_res( 0, 55);
        }
      }
    }else{  // if X[126] > 42.776725142316025
      if (X[490] <= 41.35036187788826){
        if (X[471] <= 81.9982684210514){
          if (X[238] <= 79.50017312672225){
            if (X[454] <= 54.470026318006134){
              return clf_res(5, 0);
            }else{  // if X[454] > 54.470026318006134
              return clf_res( 0, 11);
            }
          }else{  // if X[238] > 79.50017312672225
            return clf_res(7, 1);
          }
        }else{  // if X[471] > 81.9982684210514
          return clf_res(12,  0);
        }
      }else{  // if X[490] > 41.35036187788826
        if (X[333] <= 55.93497506806209){
          if (X[114] <= 89.75238419972064){
            if (X[304] <= 134.68416167679905){
              if (X[87] <= 43.00908412601051){
                if (X[54] <= 45.92308024011056){
                  return clf_res(4, 1);
                }else{  // if X[54] > 45.92308024011056
                  return clf_res(12,  0);
                }
              }else{  // if X[87] > 43.00908412601051
                return clf_res(2, 2);
              }
            }else{  // if X[304] > 134.68416167679905
              return clf_res(1, 5);
            }
          }else{  // if X[114] > 89.75238419972064
            return clf_res( 0, 16);
          }
        }else{  // if X[333] > 55.93497506806209
          if (X[153] <= 60.10836850116924){
            if (X[342] <= 171.6865235084652){
              if (X[283] <= 55.112169609889406){
                return clf_res(1, 9);
              }else{  // if X[283] > 55.112169609889406
                return clf_res( 0, 22);
              }
            }else{  // if X[342] > 171.6865235084652
              return clf_res(6, 0);
            }
          }else{  // if X[153] > 60.10836850116924
            if (X[412] <= 55.639796316975136){
              return clf_res(1, 3);
            }else{  // if X[412] > 55.639796316975136
              return clf_res( 0, 24);
            }
          }
        }
      }
    }
  }
}

clf_res dt60(double X[584]){
  if (X[10] <= 51.09261301268895){
    if (X[239] <= 140.16105543301336){
      if (X[156] <= 76.52333566938134){
        if (X[436] <= 44.76639133592194){
          if (X[520] <= 116.3991170205967){
            return clf_res(1, 9);
          }else{  // if X[520] > 116.3991170205967
            return clf_res(12,  0);
          }
        }else{  // if X[436] > 44.76639133592194
          return clf_res(55,  0);
        }
      }else{  // if X[156] > 76.52333566938134
        return clf_res( 0, 10);
      }
    }else{  // if X[239] > 140.16105543301336
      if (X[575] <= 65.98075199913944){
        return clf_res(1, 5);
      }else{  // if X[575] > 65.98075199913944
        return clf_res( 0, 16);
      }
    }
  }else{  // if X[10] > 51.09261301268895
    if (X[124] <= 93.08004853544621){
      if (X[3] <= 165.245243470835){
        if (X[507] <= -36.228968778533435){
          return clf_res(19,  0);
        }else{  // if X[507] > -36.228968778533435
          if (X[42] <= 81.61487354640117){
            if (X[181] <= 60.167249133097286){
              return clf_res(6, 5);
            }else{  // if X[181] > 60.167249133097286
              if (X[430] <= 104.15945304378515){
                return clf_res( 0, 10);
              }else{  // if X[430] > 104.15945304378515
                return clf_res(3, 3);
              }
            }
          }else{  // if X[42] > 81.61487354640117
            if (X[354] <= 107.29516984684687){
              if (X[228] <= 26.578130735073152){
                return clf_res(0, 7);
              }else{  // if X[228] > 26.578130735073152
                if (X[443] <= 114.02238193512797){
                  if (X[383] <= 57.369405319978924){
                    return clf_res(2, 4);
                  }else{  // if X[383] > 57.369405319978924
                    return clf_res(0, 6);
                  }
                }else{  // if X[443] > 114.02238193512797
                  return clf_res(3, 6);
                }
              }
            }else{  // if X[354] > 107.29516984684687
              return clf_res( 0, 63);
            }
          }
        }
      }else{  // if X[3] > 165.245243470835
        return clf_res(7, 0);
      }
    }else{  // if X[124] > 93.08004853544621
      if (X[318] <= 94.41475443231721){
        if (X[289] <= 80.08370600863886){
          return clf_res(0, 7);
        }else{  // if X[289] > 80.08370600863886
          return clf_res(2, 3);
        }
      }else{  // if X[318] > 94.41475443231721
        return clf_res(20,  0);
      }
    }
  }
}

clf_res dt61(double X[584]){
  if (X[172] <= 57.35163281102949){
    if (X[112] <= 82.03506751098165){
      if (X[22] <= -57.973627967554414){
        return clf_res(5, 2);
      }else{  // if X[22] > -57.973627967554414
        return clf_res(56,  0);
      }
    }else{  // if X[112] > 82.03506751098165
      if (X[392] <= 8.922070796094708){
        if (X[18] <= 38.76079205607241){
          if (X[58] <= 108.3909847600903){
            return clf_res(5, 0);
          }else{  // if X[58] > 108.3909847600903
            return clf_res(0, 9);
          }
        }else{  // if X[18] > 38.76079205607241
          if (X[578] <= 184.20367797403463){
            if (X[397] <= 11.092817864154345){
              return clf_res(13,  0);
            }else{  // if X[397] > 11.092817864154345
              return clf_res(5, 2);
            }
          }else{  // if X[578] > 184.20367797403463
            return clf_res(2, 5);
          }
        }
      }else{  // if X[392] > 8.922070796094708
        if (X[428] <= 62.32462451199206){
          if (X[103] <= 122.97432193362083){
            return clf_res( 0, 23);
          }else{  // if X[103] > 122.97432193362083
            return clf_res(1, 6);
          }
        }else{  // if X[428] > 62.32462451199206
          return clf_res(3, 4);
        }
      }
    }
  }else{  // if X[172] > 57.35163281102949
    if (X[290] <= 58.28304032021117){
      if (X[112] <= 45.194048046695556){
        return clf_res(2, 3);
      }else{  // if X[112] > 45.194048046695556
        return clf_res( 0, 50);
      }
    }else{  // if X[290] > 58.28304032021117
      if (X[454] <= 42.978602244411825){
        return clf_res(28,  0);
      }else{  // if X[454] > 42.978602244411825
        if (X[193] <= 104.38594837352869){
          if (X[47] <= 77.00625737636469){
            if (X[54] <= 131.4788724262738){
              return clf_res( 0, 42);
            }else{  // if X[54] > 131.4788724262738
              return clf_res(1, 7);
            }
          }else{  // if X[47] > 77.00625737636469
            return clf_res(2, 3);
          }
        }else{  // if X[193] > 104.38594837352869
          return clf_res(4, 2);
        }
      }
    }
  }
}

clf_res dt62(double X[584]){
  if (X[334] <= 60.097688802022844){
    if (X[412] <= 93.37054303485314){
      return clf_res(69,  0);
    }else{  // if X[412] > 93.37054303485314
      if (X[198] <= 35.88299341400568){
        if (X[70] <= 120.9969340906873){
          if (X[156] <= 66.02310327067151){
            return clf_res(12,  0);
          }else{  // if X[156] > 66.02310327067151
            return clf_res(5, 3);
          }
        }else{  // if X[70] > 120.9969340906873
          return clf_res(0, 4);
        }
      }else{  // if X[198] > 35.88299341400568
        if (X[303] <= 55.40561143135146){
          if (X[29] <= 100.42386722863898){
            if (X[420] <= 151.5058660052027){
              return clf_res( 0, 23);
            }else{  // if X[420] > 151.5058660052027
              return clf_res(1, 4);
            }
          }else{  // if X[29] > 100.42386722863898
            return clf_res(8, 2);
          }
        }else{  // if X[303] > 55.40561143135146
          if (X[70] <= 78.31294132482024){
            return clf_res( 0, 19);
          }else{  // if X[70] > 78.31294132482024
            return clf_res(1, 5);
          }
        }
      }
    }
  }else{  // if X[334] > 60.097688802022844
    if (X[364] <= 92.74042544835748){
      if (X[555] <= 59.16431279496126){
        if (X[36] <= 19.17974336944438){
          return clf_res(4, 7);
        }else{  // if X[36] > 19.17974336944438
          return clf_res(5, 5);
        }
      }else{  // if X[555] > 59.16431279496126
        if (X[183] <= -30.640246207595755){
          return clf_res(3, 1);
        }else{  // if X[183] > -30.640246207595755
          if (X[259] <= 105.58041896646469){
            if (X[281] <= 35.1723730005637){
              return clf_res(3, 5);
            }else{  // if X[281] > 35.1723730005637
              return clf_res(1, 5);
            }
          }else{  // if X[259] > 105.58041896646469
            if (X[480] <= 106.4871203026358){
              if (X[369] <= 70.92439022242026){
                if (X[560] <= 172.2243488245106){
                  return clf_res( 0, 50);
                }else{  // if X[560] > 172.2243488245106
                  return clf_res(1, 6);
                }
              }else{  // if X[369] > 70.92439022242026
                if (X[30] <= 120.56009378076205){
                  return clf_res( 0, 10);
                }else{  // if X[30] > 120.56009378076205
                  return clf_res(2, 4);
                }
              }
            }else{  // if X[480] > 106.4871203026358
              return clf_res(4, 5);
            }
          }
        }
      }
    }else{  // if X[364] > 92.74042544835748
      return clf_res(8, 0);
    }
  }
}

clf_res dt63(double X[584]){
  if (X[489] <= 54.206678916242026){
    if (X[572] <= 159.20904794539678){
      if (X[157] <= -1.2330146544790423){
        if (X[32] <= 45.12826780950016){
          return clf_res(2, 2);
        }else{  // if X[32] > 45.12826780950016
          return clf_res(11,  0);
        }
      }else{  // if X[157] > -1.2330146544790423
        if (X[68] <= 47.150984891597176){
          if (X[385] <= 69.70589757530928){
            return clf_res(13,  0);
          }else{  // if X[385] > 69.70589757530928
            if (X[390] <= 44.20366784626367){
              return clf_res(19,  0);
            }else{  // if X[390] > 44.20366784626367
              if (X[161] <= 3.7429794182443814){
                if (X[131] <= 50.10116849720931){
                  return clf_res(4, 2);
                }else{  // if X[131] > 50.10116849720931
                  return clf_res(0, 7);
                }
              }else{  // if X[161] > 3.7429794182443814
                return clf_res( 0, 26);
              }
            }
          }
        }else{  // if X[68] > 47.150984891597176
          if (X[497] <= 94.2760259600134){
            return clf_res( 4, 10);
          }else{  // if X[497] > 94.2760259600134
            return clf_res( 0, 21);
          }
        }
      }
    }else{  // if X[572] > 159.20904794539678
      if (X[140] <= 74.94753207584992){
        if (X[458] <= -9.55386764378428){
          return clf_res(6, 1);
        }else{  // if X[458] > -9.55386764378428
          return clf_res(9, 0);
        }
      }else{  // if X[140] > 74.94753207584992
        return clf_res(35,  0);
      }
    }
  }else{  // if X[489] > 54.206678916242026
    if (X[386] <= 34.86481749347034){
      if (X[369] <= 98.48163659782333){
        return clf_res(7, 0);
      }else{  // if X[369] > 98.48163659782333
        return clf_res(6, 1);
      }
    }else{  // if X[386] > 34.86481749347034
      if (X[274] <= 174.4225986661326){
        if (X[178] <= 11.990749860493345){
          if (X[118] <= 68.08758048275534){
            return clf_res(4, 1);
          }else{  // if X[118] > 68.08758048275534
            return clf_res( 0, 10);
          }
        }else{  // if X[178] > 11.990749860493345
          if (X[145] <= 91.84423663892748){
            return clf_res( 0, 68);
          }else{  // if X[145] > 91.84423663892748
            return clf_res(2, 5);
          }
        }
      }else{  // if X[274] > 174.4225986661326
        return clf_res(6, 3);
      }
    }
  }
}

clf_res dt64(double X[584]){
  if (X[308] <= 48.75512084509713){
    if (X[231] <= 93.67973818130379){
      if (X[396] <= 45.448323613302804){
        if (X[145] <= 60.85839644851643){
          return clf_res(11,  0);
        }else{  // if X[145] > 60.85839644851643
          return clf_res(3, 2);
        }
      }else{  // if X[396] > 45.448323613302804
        if (X[400] <= 36.592927306252534){
          return clf_res(0, 5);
        }else{  // if X[400] > 36.592927306252534
          if (X[275] <= 40.60969958790715){
            return clf_res(6, 3);
          }else{  // if X[275] > 40.60969958790715
            return clf_res(1, 5);
          }
        }
      }
    }else{  // if X[231] > 93.67973818130379
      if (X[62] <= 33.09600383695947){
        if (X[109] <= 82.14853944015289){
          return clf_res(76,  0);
        }else{  // if X[109] > 82.14853944015289
          return clf_res(5, 1);
        }
      }else{  // if X[62] > 33.09600383695947
        return clf_res(4, 7);
      }
    }
  }else{  // if X[308] > 48.75512084509713
    if (X[349] <= 229.09261680441068){
      if (X[161] <= 13.828751933586052){
        if (X[538] <= 105.42586310983987){
          if (X[108] <= 97.9751291338314){
            if (X[271] <= 18.737834265002412){
              return clf_res(1, 6);
            }else{  // if X[271] > 18.737834265002412
              if (X[260] <= 120.92681479444168){
                return clf_res(4, 3);
              }else{  // if X[260] > 120.92681479444168
                return clf_res(7, 1);
              }
            }
          }else{  // if X[108] > 97.9751291338314
            return clf_res( 0, 47);
          }
        }else{  // if X[538] > 105.42586310983987
          if (X[247] <= 84.35584684363982){
            return clf_res(2, 9);
          }else{  // if X[247] > 84.35584684363982
            return clf_res(7, 1);
          }
        }
      }else{  // if X[161] > 13.828751933586052
        return clf_res( 0, 59);
      }
    }else{  // if X[349] > 229.09261680441068
      return clf_res(9, 0);
    }
  }
}

clf_res dt65(double X[584]){
  if (X[132] <= 64.90536829128347){
    if (X[95] <= 162.4487872151611){
      if (X[89] <= 127.48782471826223){
        if (X[98] <= 44.74181599921564){
          if (X[6] <= 88.06805094882061){
            if (X[350] <= 4.547718240026022){
              return clf_res(11,  0);
            }else{  // if X[350] > 4.547718240026022
              if (X[139] <= 119.63432850896659){
                return clf_res(5, 1);
              }else{  // if X[139] > 119.63432850896659
                return clf_res( 2, 14);
              }
            }
          }else{  // if X[6] > 88.06805094882061
            if (X[274] <= 91.97508062029449){
              return clf_res(6, 2);
            }else{  // if X[274] > 91.97508062029449
              if (X[90] <= 64.09477856841642){
                if (X[442] <= 101.28357224381007){
                  return clf_res(8, 0);
                }else{  // if X[442] > 101.28357224381007
                  return clf_res(6, 2);
                }
              }else{  // if X[90] > 64.09477856841642
                return clf_res(13,  0);
              }
            }
          }
        }else{  // if X[98] > 44.74181599921564
          if (X[368] <= 58.97500891902713){
            if (X[530] <= 40.456889342016964){
              return clf_res(7, 1);
            }else{  // if X[530] > 40.456889342016964
              return clf_res(56,  0);
            }
          }else{  // if X[368] > 58.97500891902713
            if (X[27] <= 50.19917316449925){
              return clf_res(4, 5);
            }else{  // if X[27] > 50.19917316449925
              return clf_res(10,  0);
            }
          }
        }
      }else{  // if X[89] > 127.48782471826223
        return clf_res(0, 9);
      }
    }else{  // if X[95] > 162.4487872151611
      if (X[249] <= 105.97110164336559){
        return clf_res(2, 4);
      }else{  // if X[249] > 105.97110164336559
        return clf_res( 0, 24);
      }
    }
  }else{  // if X[132] > 64.90536829128347
    if (X[437] <= 86.05529569826552){
      return clf_res(3, 5);
    }else{  // if X[437] > 86.05529569826552
      return clf_res( 0, 85);
    }
  }
}

clf_res dt66(double X[584]){
  if (X[284] <= 50.75011723457832){
    if (X[269] <= 199.6441741734493){
      if (X[335] <= -80.77257071548874){
        if (X[217] <= 73.05500534354529){
          return clf_res(3, 2);
        }else{  // if X[217] > 73.05500534354529
          return clf_res(0, 8);
        }
      }else{  // if X[335] > -80.77257071548874
        if (X[418] <= 50.355146530300814){
          return clf_res(88,  0);
        }else{  // if X[418] > 50.355146530300814
          if (X[9] <= 84.54661370270867){
            return clf_res(10,  4);
          }else{  // if X[9] > 84.54661370270867
            return clf_res(2, 5);
          }
        }
      }
    }else{  // if X[269] > 199.6441741734493
      return clf_res(4, 9);
    }
  }else{  // if X[284] > 50.75011723457832
    if (X[213] <= 86.1666741201215){
      if (X[425] <= 74.81708068448168){
        if (X[424] <= 1.774801973514343){
          return clf_res(11,  0);
        }else{  // if X[424] > 1.774801973514343
          if (X[551] <= 83.37858078787838){
            return clf_res(1, 3);
          }else{  // if X[551] > 83.37858078787838
            return clf_res(1, 4);
          }
        }
      }else{  // if X[425] > 74.81708068448168
        if (X[352] <= 95.01611419687978){
          if (X[440] <= 10.888593639769432){
            return clf_res( 0, 26);
          }else{  // if X[440] > 10.888593639769432
            return clf_res(3, 8);
          }
        }else{  // if X[352] > 95.01611419687978
          return clf_res( 0, 70);
        }
      }
    }else{  // if X[213] > 86.1666741201215
      if (X[224] <= 55.849833882151316){
        return clf_res( 0, 11);
      }else{  // if X[224] > 55.849833882151316
        return clf_res(10,  2);
      }
    }
  }
}

clf_res dt67(double X[584]){
  if (X[243] <= 80.58937523494049){
    if (X[240] <= 137.51656682251453){
      if (X[520] <= 0.4633619422099713){
        if (X[228] <= 56.12342263152344){
          if (X[278] <= 132.86254218413652){
            return clf_res(34,  0);
          }else{  // if X[278] > 132.86254218413652
            return clf_res(5, 1);
          }
        }else{  // if X[228] > 56.12342263152344
          if (X[11] <= 90.62309985728278){
            return clf_res(2, 3);
          }else{  // if X[11] > 90.62309985728278
            return clf_res(7, 3);
          }
        }
      }else{  // if X[520] > 0.4633619422099713
        if (X[455] <= 106.49867388951438){
          return clf_res(34,  0);
        }else{  // if X[455] > 106.49867388951438
          if (X[44] <= 91.84372444224957){
            return clf_res( 0, 37);
          }else{  // if X[44] > 91.84372444224957
            if (X[136] <= 46.29306106112597){
              return clf_res( 0, 10);
            }else{  // if X[136] > 46.29306106112597
              return clf_res(1, 5);
            }
          }
        }
      }
    }else{  // if X[240] > 137.51656682251453
      if (X[189] <= -31.356308380990093){
        return clf_res(5, 0);
      }else{  // if X[189] > -31.356308380990093
        if (X[419] <= 79.72792519791354){
          return clf_res(13,  0);
        }else{  // if X[419] > 79.72792519791354
          if (X[327] <= 36.740048520023635){
            return clf_res(3, 3);
          }else{  // if X[327] > 36.740048520023635
            if (X[124] <= 84.04215648779181){
              if (X[149] <= 43.18331064494702){
                return clf_res( 0, 65);
              }else{  // if X[149] > 43.18331064494702
                if (X[462] <= -5.125068298159068){
                  return clf_res(1, 4);
                }else{  // if X[462] > -5.125068298159068
                  return clf_res(1, 7);
                }
              }
            }else{  // if X[124] > 84.04215648779181
              if (X[133] <= 21.88570426825352){
                return clf_res(2, 3);
              }else{  // if X[133] > 21.88570426825352
                return clf_res( 1, 11);
              }
            }
          }
        }
      }
    }
  }else{  // if X[243] > 80.58937523494049
    if (X[371] <= 94.95340836425429){
      return clf_res(15,  0);
    }else{  // if X[371] > 94.95340836425429
      return clf_res(6, 3);
    }
  }
}

clf_res dt68(double X[584]){
  if (X[431] <= 49.064289057914934){
    if (X[514] <= 97.81545680125609){
      if (X[331] <= 53.10846630283459){
        if (X[452] <= 49.35603736936674){
          return clf_res(50,  0);
        }else{  // if X[452] > 49.35603736936674
          return clf_res(8, 1);
        }
      }else{  // if X[331] > 53.10846630283459
        if (X[345] <= 56.593574934558475){
          return clf_res(9, 0);
        }else{  // if X[345] > 56.593574934558475
          return clf_res(6, 7);
        }
      }
    }else{  // if X[514] > 97.81545680125609
      if (X[575] <= 29.51301560663315){
        return clf_res(10,  0);
      }else{  // if X[575] > 29.51301560663315
        if (X[60] <= 65.95630677941911){
          if (X[0] <= 49.958502476502105){
            if (X[15] <= 67.78790388011049){
              return clf_res(0, 6);
            }else{  // if X[15] > 67.78790388011049
              return clf_res(3, 2);
            }
          }else{  // if X[0] > 49.958502476502105
            return clf_res(15,  0);
          }
        }else{  // if X[60] > 65.95630677941911
          return clf_res( 0, 26);
        }
      }
    }
  }else{  // if X[431] > 49.064289057914934
    if (X[385] <= 81.24143668277955){
      if (X[7] <= 171.37390245899417){
        if (X[339] <= 110.14081957168683){
          return clf_res(  0, 103);
        }else{  // if X[339] > 110.14081957168683
          return clf_res(1, 5);
        }
      }else{  // if X[7] > 171.37390245899417
        return clf_res(4, 5);
      }
    }else{  // if X[385] > 81.24143668277955
      if (X[19] <= 40.46224810558495){
        return clf_res(8, 1);
      }else{  // if X[19] > 40.46224810558495
        if (X[43] <= 82.17682003306722){
          return clf_res(3, 5);
        }else{  // if X[43] > 82.17682003306722
          return clf_res(6, 1);
        }
      }
    }
  }
}

clf_res dt69(double X[584]){
  if (X[165] <= 34.85826802849135){
    return clf_res(48,  0);
  }else{  // if X[165] > 34.85826802849135
    if (X[552] <= 138.84037132365822){
      if (X[448] <= 48.704560423514096){
        if (X[302] <= 36.45973338171878){
          return clf_res(8, 0);
        }else{  // if X[302] > 36.45973338171878
          if (X[244] <= 59.543605044272795){
            if (X[101] <= 102.97419898691598){
              return clf_res( 0, 38);
            }else{  // if X[101] > 102.97419898691598
              if (X[568] <= 51.55236523006988){
                return clf_res( 0, 13);
              }else{  // if X[568] > 51.55236523006988
                return clf_res(4, 3);
              }
            }
          }else{  // if X[244] > 59.543605044272795
            if (X[299] <= 112.73053868678574){
              if (X[438] <= 215.11699822464576){
                if (X[115] <= 37.96782805815377){
                  return clf_res(6, 2);
                }else{  // if X[115] > 37.96782805815377
                  if (X[84] <= 48.422473293829526){
                    return clf_res(5, 5);
                  }else{  // if X[84] > 48.422473293829526
                    return clf_res( 0, 60);
                  }
                }
              }else{  // if X[438] > 215.11699822464576
                return clf_res(12,  0);
              }
            }else{  // if X[299] > 112.73053868678574
              return clf_res(5, 2);
            }
          }
        }
      }else{  // if X[448] > 48.704560423514096
        if (X[89] <= 54.21358600154972){
          return clf_res(31,  0);
        }else{  // if X[89] > 54.21358600154972
          return clf_res(5, 4);
        }
      }
    }else{  // if X[552] > 138.84037132365822
      if (X[288] <= 50.901466318987595){
        if (X[511] <= 146.12075074272997){
          return clf_res(1, 6);
        }else{  // if X[511] > 146.12075074272997
          return clf_res(8, 0);
        }
      }else{  // if X[288] > 50.901466318987595
        if (X[128] <= 97.57513424803116){
          return clf_res(8, 1);
        }else{  // if X[128] > 97.57513424803116
          return clf_res(10,  0);
        }
      }
    }
  }
}

clf_res dt70(double X[584]){
  if (X[307] <= 57.929557912939494){
    if (X[78] <= 60.63039585386014){
      return clf_res( 1, 11);
    }else{  // if X[78] > 60.63039585386014
      if (X[46] <= 64.839383033296){
        if (X[333] <= 22.778633450982824){
          if (X[454] <= 46.571604722187885){
            return clf_res(4, 1);
          }else{  // if X[454] > 46.571604722187885
            return clf_res( 0, 10);
          }
        }else{  // if X[333] > 22.778633450982824
          if (X[194] <= 60.351925258117504){
            if (X[267] <= 68.5448100084342){
              return clf_res(57,  0);
            }else{  // if X[267] > 68.5448100084342
              return clf_res(3, 1);
            }
          }else{  // if X[194] > 60.351925258117504
            if (X[541] <= 64.36669478262591){
              if (X[514] <= 82.77715596898778){
                return clf_res(5, 1);
              }else{  // if X[514] > 82.77715596898778
                return clf_res(4, 5);
              }
            }else{  // if X[541] > 64.36669478262591
              return clf_res(6, 0);
            }
          }
        }
      }else{  // if X[46] > 64.839383033296
        if (X[4] <= 69.66416028432313){
          if (X[493] <= 37.98257439020141){
            return clf_res(1, 3);
          }else{  // if X[493] > 37.98257439020141
            return clf_res( 0, 25);
          }
        }else{  // if X[4] > 69.66416028432313
          if (X[402] <= 49.0665066341458){
            return clf_res(0, 7);
          }else{  // if X[402] > 49.0665066341458
            return clf_res(7, 2);
          }
        }
      }
    }
  }else{  // if X[307] > 57.929557912939494
    if (X[194] <= 67.05889159867965){
      if (X[176] <= 103.76303344587167){
        return clf_res( 0, 39);
      }else{  // if X[176] > 103.76303344587167
        if (X[364] <= 63.25478734062884){
          if (X[446] <= 94.33105379323972){
            return clf_res(4, 1);
          }else{  // if X[446] > 94.33105379323972
            if (X[66] <= 26.008056491880243){
              return clf_res(2, 5);
            }else{  // if X[66] > 26.008056491880243
              if (X[556] <= 80.22199518134194){
                return clf_res( 0, 39);
              }else{  // if X[556] > 80.22199518134194
                return clf_res(1, 5);
              }
            }
          }
        }else{  // if X[364] > 63.25478734062884
          if (X[404] <= 10.554069104932289){
            if (X[413] <= 59.2651187347811){
              return clf_res(5, 3);
            }else{  // if X[413] > 59.2651187347811
              return clf_res(0, 6);
            }
          }else{  // if X[404] > 10.554069104932289
            return clf_res(5, 2);
          }
        }
      }
    }else{  // if X[194] > 67.05889159867965
      return clf_res(9, 5);
    }
  }
}

clf_res dt71(double X[584]){
  if (X[435] <= 40.93885000150459){
    if (X[512] <= 112.06945484383424){
      return clf_res(30,  0);
    }else{  // if X[512] > 112.06945484383424
      if (X[181] <= 44.38490769283244){
        return clf_res(8, 0);
      }else{  // if X[181] > 44.38490769283244
        if (X[329] <= 62.05822654344734){
          return clf_res(20,  0);
        }else{  // if X[329] > 62.05822654344734
          return clf_res(0, 6);
        }
      }
    }
  }else{  // if X[435] > 40.93885000150459
    if (X[285] <= 65.88570441008989){
      if (X[208] <= 14.988161681443962){
        if (X[427] <= 85.27035506947962){
          return clf_res(2, 5);
        }else{  // if X[427] > 85.27035506947962
          return clf_res( 0, 16);
        }
      }else{  // if X[208] > 14.988161681443962
        if (X[157] <= 106.936085256741){
          if (X[137] <= 24.648912770607275){
            if (X[252] <= 76.12290051710156){
              return clf_res(40,  0);
            }else{  // if X[252] > 76.12290051710156
              return clf_res(4, 1);
            }
          }else{  // if X[137] > 24.648912770607275
            return clf_res(4, 3);
          }
        }else{  // if X[157] > 106.936085256741
          if (X[479] <= 84.5225468889827){
            if (X[93] <= 94.5511884707941){
              if (X[172] <= 81.57945433476479){
                return clf_res(7, 0);
              }else{  // if X[172] > 81.57945433476479
                return clf_res(3, 1);
              }
            }else{  // if X[93] > 94.5511884707941
              return clf_res( 0, 10);
            }
          }else{  // if X[479] > 84.5225468889827
            if (X[465] <= 84.67151658101503){
              return clf_res(4, 2);
            }else{  // if X[465] > 84.67151658101503
              return clf_res( 0, 16);
            }
          }
        }
      }
    }else{  // if X[285] > 65.88570441008989
      if (X[232] <= 67.66645516274096){
        return clf_res(5, 6);
      }else{  // if X[232] > 67.66645516274096
        if (X[66] <= 53.619795863086395){
          if (X[581] <= 86.80294065871591){
            if (X[512] <= -32.15058247354423){
              return clf_res(1, 3);
            }else{  // if X[512] > -32.15058247354423
              return clf_res( 0, 32);
            }
          }else{  // if X[581] > 86.80294065871591
            if (X[430] <= 18.637201240155278){
              return clf_res(4, 0);
            }else{  // if X[430] > 18.637201240155278
              return clf_res(0, 7);
            }
          }
        }else{  // if X[66] > 53.619795863086395
          return clf_res( 0, 45);
        }
      }
    }
  }
}

clf_res dt72(double X[584]){
  if (X[62] <= 45.707486850855545){
    if (X[44] <= 160.9483674133149){
      if (X[415] <= -12.297313868159542){
        return clf_res(93,  0);
      }else{  // if X[415] > -12.297313868159542
        if (X[142] <= 129.1568103888758){
          if (X[314] <= 44.20783750500203){
            return clf_res(12,  0);
          }else{  // if X[314] > 44.20783750500203
            return clf_res(2, 2);
          }
        }else{  // if X[142] > 129.1568103888758
          if (X[62] <= -3.2499312960377864){
            return clf_res( 0, 36);
          }else{  // if X[62] > -3.2499312960377864
            if (X[136] <= 101.16599815337135){
              return clf_res(2, 5);
            }else{  // if X[136] > 101.16599815337135
              if (X[225] <= 65.97462316091229){
                return clf_res(1, 5);
              }else{  // if X[225] > 65.97462316091229
                return clf_res( 0, 13);
              }
            }
          }
        }
      }
    }else{  // if X[44] > 160.9483674133149
      if (X[443] <= 63.47125216705577){
        return clf_res( 0, 14);
      }else{  // if X[443] > 63.47125216705577
        return clf_res(1, 7);
      }
    }
  }else{  // if X[62] > 45.707486850855545
    if (X[61] <= 51.984588466924066){
      if (X[327] <= 85.61203629786513){
        if (X[92] <= 31.339960809149733){
          return clf_res(6, 0);
        }else{  // if X[92] > 31.339960809149733
          return clf_res(4, 4);
        }
      }else{  // if X[327] > 85.61203629786513
        if (X[13] <= -81.5880469693296){
          return clf_res( 0, 13);
        }else{  // if X[13] > -81.5880469693296
          return clf_res(3, 3);
        }
      }
    }else{  // if X[61] > 51.984588466924066
      if (X[26] <= 9.99999986290241){
        if (X[200] <= 61.80699415470664){
          return clf_res( 0, 34);
        }else{  // if X[200] > 61.80699415470664
          if (X[8] <= 4.512374039487849){
            return clf_res(0, 6);
          }else{  // if X[8] > 4.512374039487849
            return clf_res(1, 5);
          }
        }
      }else{  // if X[26] > 9.99999986290241
        if (X[204] <= -23.289460198229587){
          return clf_res(0, 7);
        }else{  // if X[204] > -23.289460198229587
          return clf_res(5, 1);
        }
      }
    }
  }
}

clf_res dt73(double X[584]){
  if (X[6] <= 25.685144439613527){
    if (X[146] <= 100.28732515815754){
      return clf_res(13,  0);
    }else{  // if X[146] > 100.28732515815754
      if (X[379] <= 44.92345436501453){
        return clf_res(11,  0);
      }else{  // if X[379] > 44.92345436501453
        return clf_res(3, 3);
      }
    }
  }else{  // if X[6] > 25.685144439613527
    if (X[371] <= 52.66550326487379){
      if (X[356] <= 118.81190985125927){
        if (X[190] <= 90.71058516449921){
          if (X[314] <= 60.8916160847698){
            return clf_res(42,  0);
          }else{  // if X[314] > 60.8916160847698
            return clf_res(5, 1);
          }
        }else{  // if X[190] > 90.71058516449921
          return clf_res(3, 3);
        }
      }else{  // if X[356] > 118.81190985125927
        if (X[444] <= 81.97871046836951){
          return clf_res(4, 4);
        }else{  // if X[444] > 81.97871046836951
          if (X[103] <= 9.691030742625493){
            return clf_res(1, 4);
          }else{  // if X[103] > 9.691030742625493
            return clf_res( 0, 23);
          }
        }
      }
    }else{  // if X[371] > 52.66550326487379
      if (X[334] <= 92.14745200339408){
        if (X[196] <= 171.90038518289992){
          if (X[108] <= 73.92836873430039){
            if (X[132] <= 83.46872955650755){
              if (X[519] <= 58.94036829822655){
                return clf_res(6, 0);
              }else{  // if X[519] > 58.94036829822655
                if (X[214] <= 61.113076043259916){
                  if (X[18] <= 114.57650236025555){
                    return clf_res(8, 0);
                  }else{  // if X[18] > 114.57650236025555
                    if (X[13] <= 57.327565437624735){
                      return clf_res(5, 2);
                    }else{  // if X[13] > 57.327565437624735
                      return clf_res(2, 5);
                    }
                  }
                }else{  // if X[214] > 61.113076043259916
                  if (X[249] <= 46.81967234893){
                    return clf_res(0, 8);
                  }else{  // if X[249] > 46.81967234893
                    return clf_res(2, 4);
                  }
                }
              }
            }else{  // if X[132] > 83.46872955650755
              return clf_res( 0, 10);
            }
          }else{  // if X[108] > 73.92836873430039
            return clf_res( 0, 97);
          }
        }else{  // if X[196] > 171.90038518289992
          return clf_res(5, 0);
        }
      }else{  // if X[334] > 92.14745200339408
        return clf_res(7, 4);
      }
    }
  }
}

clf_res dt74(double X[584]){
  if (X[382] <= 57.59381588414992){
    if (X[412] <= 96.5515316299576){
      return clf_res(62,  0);
    }else{  // if X[412] > 96.5515316299576
      if (X[515] <= 30.403297412099207){
        return clf_res(5, 2);
      }else{  // if X[515] > 30.403297412099207
        if (X[272] <= -17.007369564410936){
          return clf_res(4, 2);
        }else{  // if X[272] > -17.007369564410936
          if (X[191] <= 128.24616694926996){
            return clf_res(1, 8);
          }else{  // if X[191] > 128.24616694926996
            return clf_res( 0, 30);
          }
        }
      }
    }
  }else{  // if X[382] > 57.59381588414992
    if (X[227] <= 164.31386005503396){
      if (X[477] <= -38.53820840569782){
        if (X[499] <= 35.29520589359588){
          return clf_res(5, 1);
        }else{  // if X[499] > 35.29520589359588
          return clf_res(12,  0);
        }
      }else{  // if X[477] > -38.53820840569782
        if (X[8] <= 54.751630641944764){
          if (X[532] <= 141.65679991781224){
            if (X[77] <= 16.879995122386003){
              return clf_res( 0, 87);
            }else{  // if X[77] > 16.879995122386003
              return clf_res(1, 9);
            }
          }else{  // if X[532] > 141.65679991781224
            return clf_res(2, 5);
          }
        }else{  // if X[8] > 54.751630641944764
          if (X[48] <= 74.18754303843679){
            if (X[315] <= 141.27235851430618){
              if (X[336] <= 76.18260760645342){
                return clf_res(3, 2);
              }else{  // if X[336] > 76.18260760645342
                return clf_res(2, 2);
              }
            }else{  // if X[315] > 141.27235851430618
              return clf_res(6, 0);
            }
          }else{  // if X[48] > 74.18754303843679
            return clf_res( 0, 12);
          }
        }
      }
    }else{  // if X[227] > 164.31386005503396
      if (X[269] <= 108.0796990216975){
        return clf_res(4, 5);
      }else{  // if X[269] > 108.0796990216975
        if (X[313] <= 83.64923185373827){
          return clf_res(8, 0);
        }else{  // if X[313] > 83.64923185373827
          return clf_res(4, 1);
        }
      }
    }
  }
}

clf_res dt75(double X[584]){
  if (X[329] <= 50.86363369715322){
    if (X[419] <= 198.43848675077945){
      if (X[413] <= 10.742483129530395){
        return clf_res(85,  0);
      }else{  // if X[413] > 10.742483129530395
        if (X[550] <= 68.46592724434448){
          return clf_res(3, 4);
        }else{  // if X[550] > 68.46592724434448
          if (X[482] <= 40.78577976177552){
            return clf_res(7, 3);
          }else{  // if X[482] > 40.78577976177552
            return clf_res(20,  0);
          }
        }
      }
    }else{  // if X[419] > 198.43848675077945
      if (X[428] <= 47.0271343625967){
        return clf_res(1, 6);
      }else{  // if X[428] > 47.0271343625967
        return clf_res(0, 8);
      }
    }
  }else{  // if X[329] > 50.86363369715322
    if (X[516] <= 19.928981222968204){
      return clf_res(14,  0);
    }else{  // if X[516] > 19.928981222968204
      if (X[408] <= 76.38190879012143){
        if (X[53] <= 59.02060666676047){
          return clf_res(  0, 107);
        }else{  // if X[53] > 59.02060666676047
          if (X[4] <= -34.57570151166704){
            return clf_res(1, 3);
          }else{  // if X[4] > -34.57570151166704
            return clf_res(4, 3);
          }
        }
      }else{  // if X[408] > 76.38190879012143
        return clf_res(16,  0);
      }
    }
  }
}

clf_res dt76(double X[584]){
  if (X[90] <= 65.63109431786053){
    if (X[473] <= 90.80401759309802){
      if (X[91] <= 58.614831434210956){
        if (X[51] <= 58.01333393311372){
          return clf_res(44,  0);
        }else{  // if X[51] > 58.01333393311372
          if (X[583] <= 102.76857716922486){
            return clf_res(30,  0);
          }else{  // if X[583] > 102.76857716922486
            return clf_res(5, 1);
          }
        }
      }else{  // if X[91] > 58.614831434210956
        if (X[283] <= 94.56748784337833){
          return clf_res(0, 9);
        }else{  // if X[283] > 94.56748784337833
          if (X[468] <= 116.71068217575169){
            return clf_res(5, 0);
          }else{  // if X[468] > 116.71068217575169
            return clf_res(4, 3);
          }
        }
      }
    }else{  // if X[473] > 90.80401759309802
      if (X[105] <= 158.82898781263873){
        if (X[416] <= 4.915875685383146){
          return clf_res(40,  0);
        }else{  // if X[416] > 4.915875685383146
          if (X[377] <= 120.35912513586156){
            return clf_res(7, 1);
          }else{  // if X[377] > 120.35912513586156
            return clf_res(6, 6);
          }
        }
      }else{  // if X[105] > 158.82898781263873
        if (X[142] <= 126.51349118509478){
          return clf_res(1, 6);
        }else{  // if X[142] > 126.51349118509478
          return clf_res( 0, 37);
        }
      }
    }
  }else{  // if X[90] > 65.63109431786053
    if (X[445] <= 138.1365391262355){
      return clf_res( 0, 76);
    }else{  // if X[445] > 138.1365391262355
      return clf_res(1, 3);
    }
  }
}

clf_res dt77(double X[584]){
  if (X[259] <= 49.772280678477365){
    if (X[174] <= 84.92997915518634){
      if (X[390] <= 1.3093223444688036){
        return clf_res(41,  0);
      }else{  // if X[390] > 1.3093223444688036
        return clf_res(0, 9);
      }
    }else{  // if X[174] > 84.92997915518634
      if (X[69] <= 98.96348197180734){
        if (X[369] <= 69.75950463433863){
          if (X[174] <= 185.70127230591277){
            if (X[525] <= 74.71074923405871){
              if (X[48] <= 50.46635982280823){
                return clf_res(4, 2);
              }else{  // if X[48] > 50.46635982280823
                return clf_res(18,  0);
              }
            }else{  // if X[525] > 74.71074923405871
              return clf_res(6, 4);
            }
          }else{  // if X[174] > 185.70127230591277
            return clf_res(1, 6);
          }
        }else{  // if X[369] > 69.75950463433863
          return clf_res(1, 5);
        }
      }else{  // if X[69] > 98.96348197180734
        if (X[396] <= 61.41928172349262){
          return clf_res(6, 1);
        }else{  // if X[396] > 61.41928172349262
          if (X[118] <= 89.25890903545289){
            return clf_res( 0, 15);
          }else{  // if X[118] > 89.25890903545289
            return clf_res(2, 6);
          }
        }
      }
    }
  }else{  // if X[259] > 49.772280678477365
    if (X[114] <= 54.524733503900634){
      if (X[579] <= 43.821019734119645){
        if (X[397] <= 90.85429848779413){
          if (X[85] <= 48.147053041830816){
            return clf_res(6, 1);
          }else{  // if X[85] > 48.147053041830816
            return clf_res(17,  0);
          }
        }else{  // if X[397] > 90.85429848779413
          if (X[295] <= 64.70569649634079){
            if (X[583] <= 51.835936294933624){
              return clf_res( 0, 30);
            }else{  // if X[583] > 51.835936294933624
              return clf_res(1, 4);
            }
          }else{  // if X[295] > 64.70569649634079
            return clf_res(2, 4);
          }
        }
      }else{  // if X[579] > 43.821019734119645
        if (X[61] <= 103.04680957125268){
          return clf_res(4, 1);
        }else{  // if X[61] > 103.04680957125268
          return clf_res(23,  0);
        }
      }
    }else{  // if X[114] > 54.524733503900634
      if (X[252] <= 155.77126890533333){
        return clf_res( 0, 50);
      }else{  // if X[252] > 155.77126890533333
        if (X[164] <= 73.70891426974214){
          return clf_res(2, 3);
        }else{  // if X[164] > 73.70891426974214
          return clf_res( 0, 10);
        }
      }
    }
  }
}

clf_res dt78(double X[584]){
  if (X[546] <= 48.92563879486721){
    if (X[424] <= 122.73758697713166){
      if (X[236] <= 61.7344750637969){
        if (X[156] <= 66.02201508579662){
          if (X[199] <= 10.250545204236573){
            return clf_res(3, 5);
          }else{  // if X[199] > 10.250545204236573
            if (X[13] <= 68.48484771072896){
              return clf_res(36,  0);
            }else{  // if X[13] > 68.48484771072896
              return clf_res(2, 3);
            }
          }
        }else{  // if X[156] > 66.02201508579662
          return clf_res(1, 5);
        }
      }else{  // if X[236] > 61.7344750637969
        if (X[441] <= 123.5806954167891){
          if (X[177] <= -6.76494259555669){
            return clf_res(2, 3);
          }else{  // if X[177] > -6.76494259555669
            if (X[499] <= 49.476368663024076){
              return clf_res(1, 6);
            }else{  // if X[499] > 49.476368663024076
              return clf_res( 0, 34);
            }
          }
        }else{  // if X[441] > 123.5806954167891
          return clf_res(5, 2);
        }
      }
    }else{  // if X[424] > 122.73758697713166
      return clf_res(58,  0);
    }
  }else{  // if X[546] > 48.92563879486721
    if (X[9] <= 33.620491458185015){
      return clf_res(6, 2);
    }else{  // if X[9] > 33.620491458185015
      if (X[548] <= 61.922850191474936){
        if (X[440] <= 51.0341318953996){
          return clf_res(4, 2);
        }else{  // if X[440] > 51.0341318953996
          if (X[440] <= 10.366488095383591){
            if (X[340] <= 41.68522704536564){
              if (X[316] <= 110.72415545776181){
                return clf_res(3, 5);
              }else{  // if X[316] > 110.72415545776181
                return clf_res( 0, 11);
              }
            }else{  // if X[340] > 41.68522704536564
              return clf_res( 0, 54);
            }
          }else{  // if X[440] > 10.366488095383591
            if (X[532] <= 22.388011213892){
              if (X[183] <= 41.18112897341724){
                return clf_res(4, 1);
              }else{  // if X[183] > 41.18112897341724
                return clf_res(1, 5);
              }
            }else{  // if X[532] > 22.388011213892
              return clf_res( 0, 13);
            }
          }
        }
      }else{  // if X[548] > 61.922850191474936
        return clf_res(8, 0);
      }
    }
  }
}

clf_res dt79(double X[584]){
  if (X[351] <= 46.83878965324932){
    if (X[320] <= 98.85171983298463){
      if (X[389] <= 8.133850479483694){
        return clf_res(43,  0);
      }else{  // if X[389] > 8.133850479483694
        return clf_res(0, 6);
      }
    }else{  // if X[320] > 98.85171983298463
      if (X[367] <= 76.79131438891517){
        if (X[548] <= 64.92799447797553){
          if (X[77] <= 99.4202712667983){
            if (X[308] <= 4.491476847003142){
              return clf_res(3, 5);
            }else{  // if X[308] > 4.491476847003142
              return clf_res(0, 9);
            }
          }else{  // if X[77] > 99.4202712667983
            return clf_res(8, 0);
          }
        }else{  // if X[548] > 64.92799447797553
          return clf_res(15,  0);
        }
      }else{  // if X[367] > 76.79131438891517
        if (X[279] <= 4.606105913980869){
          return clf_res(2, 3);
        }else{  // if X[279] > 4.606105913980869
          if (X[128] <= 58.41436831483354){
            return clf_res( 0, 19);
          }else{  // if X[128] > 58.41436831483354
            return clf_res(2, 4);
          }
        }
      }
    }
  }else{  // if X[351] > 46.83878965324932
    if (X[520] <= 114.99809078011246){
      if (X[583] <= 127.93313691442651){
        if (X[454] <= 17.487057284779397){
          return clf_res(36,  0);
        }else{  // if X[454] > 17.487057284779397
          if (X[193] <= 146.22010737549382){
            return clf_res( 0, 43);
          }else{  // if X[193] > 146.22010737549382
            return clf_res( 4, 10);
          }
        }
      }else{  // if X[583] > 127.93313691442651
        if (X[24] <= 115.68695988696993){
          if (X[497] <= 2.0299411867556287){
            if (X[375] <= 57.006638631342454){
              return clf_res(3, 3);
            }else{  // if X[375] > 57.006638631342454
              return clf_res(0, 6);
            }
          }else{  // if X[497] > 2.0299411867556287
            return clf_res( 0, 25);
          }
        }else{  // if X[24] > 115.68695988696993
          if (X[139] <= 116.20302478735171){
            return clf_res(6, 1);
          }else{  // if X[139] > 116.20302478735171
            if (X[11] <= 47.82562043588938){
              return clf_res(1, 3);
            }else{  // if X[11] > 47.82562043588938
              return clf_res( 0, 14);
            }
          }
        }
      }
    }else{  // if X[520] > 114.99809078011246
      return clf_res(11,  0);
    }
  }
}

clf_res dt80(double X[584]){
  if (X[111] <= 58.79837003437444){
    if (X[282] <= 136.16682896738732){
      if (X[213] <= -92.76891631944497){
        return clf_res(1, 6);
      }else{  // if X[213] > -92.76891631944497
        if (X[374] <= 157.35173100711916){
          if (X[389] <= -19.80836107915721){
            return clf_res(85,  0);
          }else{  // if X[389] > -19.80836107915721
            return clf_res(2, 2);
          }
        }else{  // if X[374] > 157.35173100711916
          return clf_res(2, 2);
        }
      }
    }else{  // if X[282] > 136.16682896738732
      if (X[248] <= 64.53008033434641){
        if (X[413] <= 100.26289371573036){
          return clf_res(4, 4);
        }else{  // if X[413] > 100.26289371573036
          return clf_res( 0, 13);
        }
      }else{  // if X[248] > 64.53008033434641
        if (X[336] <= 112.56125163996265){
          return clf_res(4, 4);
        }else{  // if X[336] > 112.56125163996265
          if (X[39] <= 55.82971303949617){
            return clf_res(8, 1);
          }else{  // if X[39] > 55.82971303949617
            return clf_res(14,  0);
          }
        }
      }
    }
  }else{  // if X[111] > 58.79837003437444
    if (X[414] <= 52.82906491459816){
      return clf_res(5, 2);
    }else{  // if X[414] > 52.82906491459816
      if (X[454] <= 26.822952968231068){
        return clf_res(3, 4);
      }else{  // if X[454] > 26.822952968231068
        return clf_res(  0, 119);
      }
    }
  }
}

clf_res dt81(double X[584]){
  if (X[88] <= 58.023562929907975){
    if (X[216] <= 133.04858011873995){
      if (X[380] <= 70.15708903780364){
        if (X[379] <= 18.02794380225506){
          return clf_res(6, 4);
        }else{  // if X[379] > 18.02794380225506
          if (X[514] <= 89.79606950671293){
            return clf_res(65,  0);
          }else{  // if X[514] > 89.79606950671293
            return clf_res(5, 1);
          }
        }
      }else{  // if X[380] > 70.15708903780364
        return clf_res(1, 5);
      }
    }else{  // if X[216] > 133.04858011873995
      if (X[209] <= 76.51484169328789){
        if (X[448] <= 73.86941186411607){
          return clf_res(10,  0);
        }else{  // if X[448] > 73.86941186411607
          if (X[382] <= 58.10253721529071){
            if (X[155] <= 93.68878565103714){
              return clf_res(0, 5);
            }else{  // if X[155] > 93.68878565103714
              if (X[416] <= 55.31654688706234){
                return clf_res(4, 0);
              }else{  // if X[416] > 55.31654688706234
                return clf_res(2, 3);
              }
            }
          }else{  // if X[382] > 58.10253721529071
            if (X[4] <= 78.29396356667034){
              return clf_res( 0, 15);
            }else{  // if X[4] > 78.29396356667034
              return clf_res(1, 6);
            }
          }
        }
      }else{  // if X[209] > 76.51484169328789
        if (X[162] <= 41.77971632732845){
          return clf_res(7, 0);
        }else{  // if X[162] > 41.77971632732845
          return clf_res(2, 3);
        }
      }
    }
  }else{  // if X[88] > 58.023562929907975
    if (X[310] <= 73.13545361885932){
      if (X[138] <= 172.84336644894765){
        if (X[428] <= -1.0375040625602026){
          return clf_res(8, 0);
        }else{  // if X[428] > -1.0375040625602026
          if (X[560] <= 173.38643412353497){
            if (X[98] <= 9.515687028543937){
              if (X[322] <= 58.05110951821377){
                return clf_res( 0, 27);
              }else{  // if X[322] > 58.05110951821377
                return clf_res(1, 4);
              }
            }else{  // if X[98] > 9.515687028543937
              if (X[404] <= 48.62960239636736){
                return clf_res( 0, 15);
              }else{  // if X[404] > 48.62960239636736
                if (X[103] <= 17.116465875956838){
                  return clf_res(6, 0);
                }else{  // if X[103] > 17.116465875956838
                  return clf_res(0, 5);
                }
              }
            }
          }else{  // if X[560] > 173.38643412353497
            if (X[32] <= 11.532941443118002){
              return clf_res(3, 8);
            }else{  // if X[32] > 11.532941443118002
              return clf_res(4, 1);
            }
          }
        }
      }else{  // if X[138] > 172.84336644894765
        return clf_res( 0, 52);
      }
    }else{  // if X[310] > 73.13545361885932
      return clf_res(6, 0);
    }
  }
}

clf_res dt82(double X[584]){
  if (X[448] <= 55.67852763699484){
    if (X[399] <= 130.57309388651126){
      if (X[126] <= -13.613411865568693){
        return clf_res( 0, 46);
      }else{  // if X[126] > -13.613411865568693
        if (X[252] <= 171.14358317030297){
          if (X[401] <= -14.722947071043038){
            if (X[580] <= 66.06080775665703){
              return clf_res(4, 1);
            }else{  // if X[580] > 66.06080775665703
              return clf_res(11,  0);
            }
          }else{  // if X[401] > -14.722947071043038
            if (X[541] <= 34.10078056290861){
              return clf_res(3, 1);
            }else{  // if X[541] > 34.10078056290861
              if (X[344] <= 57.818552395180596){
                return clf_res( 0, 46);
              }else{  // if X[344] > 57.818552395180596
                if (X[203] <= 135.01975047769403){
                  if (X[430] <= 21.13229989984667){
                    return clf_res(7, 0);
                  }else{  // if X[430] > 21.13229989984667
                    if (X[19] <= 94.73288295218387){
                      return clf_res(1, 4);
                    }else{  // if X[19] > 94.73288295218387
                      return clf_res( 0, 15);
                    }
                  }
                }else{  // if X[203] > 135.01975047769403
                  if (X[373] <= 148.12774078114126){
                    return clf_res( 0, 32);
                  }else{  // if X[373] > 148.12774078114126
                    return clf_res( 1, 10);
                  }
                }
              }
            }
          }
        }else{  // if X[252] > 171.14358317030297
          if (X[269] <= 131.78837294063462){
            return clf_res(3, 4);
          }else{  // if X[269] > 131.78837294063462
            return clf_res(12,  0);
          }
        }
      }
    }else{  // if X[399] > 130.57309388651126
      if (X[282] <= 56.86035819448169){
        return clf_res(13,  0);
      }else{  // if X[282] > 56.86035819448169
        if (X[410] <= 46.81753083402449){
          return clf_res(8, 0);
        }else{  // if X[410] > 46.81753083402449
          return clf_res(9, 2);
        }
      }
    }
  }else{  // if X[448] > 55.67852763699484
    return clf_res(52,  0);
  }
}

clf_res dt83(double X[584]){
  if (X[513] <= 39.66634706667652){
    if (X[492] <= 161.23024011756536){
      if (X[430] <= 20.04214032511602){
        return clf_res(38,  0);
      }else{  // if X[430] > 20.04214032511602
        if (X[345] <= 168.65575011957952){
          if (X[317] <= 8.90639892697709){
            return clf_res(2, 3);
          }else{  // if X[317] > 8.90639892697709
            return clf_res( 0, 12);
          }
        }else{  // if X[345] > 168.65575011957952
          return clf_res(6, 2);
        }
      }
    }else{  // if X[492] > 161.23024011756536
      return clf_res(43,  0);
    }
  }else{  // if X[513] > 39.66634706667652
    if (X[560] <= 198.63950408848794){
      if (X[53] <= 10.75924782240995){
        if (X[61] <= 84.81501957975468){
          if (X[540] <= 56.26581385625938){
            return clf_res(1, 5);
          }else{  // if X[540] > 56.26581385625938
            return clf_res( 0, 71);
          }
        }else{  // if X[61] > 84.81501957975468
          if (X[43] <= 139.15223761314252){
            return clf_res(4, 3);
          }else{  // if X[43] > 139.15223761314252
            return clf_res(0, 8);
          }
        }
      }else{  // if X[53] > 10.75924782240995
        if (X[211] <= 43.75281614343024){
          if (X[312] <= 78.60479603201064){
            return clf_res( 0, 23);
          }else{  // if X[312] > 78.60479603201064
            if (X[511] <= 119.97390076781929){
              return clf_res(1, 3);
            }else{  // if X[511] > 119.97390076781929
              return clf_res(0, 5);
            }
          }
        }else{  // if X[211] > 43.75281614343024
          if (X[563] <= 81.26369351698185){
            return clf_res(11,  0);
          }else{  // if X[563] > 81.26369351698185
            if (X[353] <= 43.2839220369119){
              if (X[54] <= 111.60853322094243){
                return clf_res(6, 0);
              }else{  // if X[54] > 111.60853322094243
                return clf_res(5, 2);
              }
            }else{  // if X[353] > 43.2839220369119
              if (X[78] <= 128.06350531073736){
                return clf_res(0, 9);
              }else{  // if X[78] > 128.06350531073736
                return clf_res(2, 3);
              }
            }
          }
        }
      }
    }else{  // if X[560] > 198.63950408848794
      if (X[433] <= 101.14752801921856){
        return clf_res(8, 0);
      }else{  // if X[433] > 101.14752801921856
        if (X[454] <= 56.16222029837771){
          return clf_res(5, 0);
        }else{  // if X[454] > 56.16222029837771
          return clf_res(0, 4);
        }
      }
    }
  }
}

clf_res dt84(double X[584]){
  if (X[71] <= 75.97391415828923){
    if (X[485] <= 82.37261412770759){
      if (X[349] <= -108.7498371591486){
        return clf_res(2, 6);
      }else{  // if X[349] > -108.7498371591486
        if (X[437] <= 83.10105904701771){
          if (X[357] <= 84.63859114111665){
            return clf_res(33,  0);
          }else{  // if X[357] > 84.63859114111665
            return clf_res(5, 1);
          }
        }else{  // if X[437] > 83.10105904701771
          if (X[61] <= 65.17141226462478){
            if (X[391] <= 49.75829308036063){
              return clf_res(28,  0);
            }else{  // if X[391] > 49.75829308036063
              return clf_res(3, 1);
            }
          }else{  // if X[61] > 65.17141226462478
            return clf_res( 0, 11);
          }
        }
      }
    }else{  // if X[485] > 82.37261412770759
      if (X[461] <= 121.3050473403885){
        if (X[8] <= 9.026965141911138){
          if (X[350] <= 69.84479546228263){
            if (X[212] <= 139.00296441036144){
              return clf_res(3, 4);
            }else{  // if X[212] > 139.00296441036144
              return clf_res(0, 8);
            }
          }else{  // if X[350] > 69.84479546228263
            return clf_res( 0, 50);
          }
        }else{  // if X[8] > 9.026965141911138
          if (X[47] <= 8.862933213636094){
            if (X[454] <= 64.95529445035984){
              return clf_res(4, 2);
            }else{  // if X[454] > 64.95529445035984
              return clf_res( 0, 11);
            }
          }else{  // if X[47] > 8.862933213636094
            if (X[530] <= 55.89472200917934){
              return clf_res(20,  0);
            }else{  // if X[530] > 55.89472200917934
              return clf_res(2, 3);
            }
          }
        }
      }else{  // if X[461] > 121.3050473403885
        if (X[142] <= 60.39825154202293){
          return clf_res(35,  0);
        }else{  // if X[142] > 60.39825154202293
          return clf_res( 0, 10);
        }
      }
    }
  }else{  // if X[71] > 75.97391415828923
    if (X[309] <= 63.99028535581283){
      return clf_res( 0, 38);
    }else{  // if X[309] > 63.99028535581283
      return clf_res(1, 4);
    }
  }
}

clf_res dt85(double X[584]){
  if (X[437] <= 40.93234558901239){
    if (X[189] <= 172.5422584065433){
      if (X[355] <= 60.94591538157027){
        if (X[560] <= 36.53008142612828){
          return clf_res(5, 1);
        }else{  // if X[560] > 36.53008142612828
          return clf_res(42,  0);
        }
      }else{  // if X[355] > 60.94591538157027
        if (X[154] <= 73.45975382110082){
          if (X[162] <= 104.50435675329571){
            if (X[117] <= -16.20423361672212){
              return clf_res(4, 3);
            }else{  // if X[117] > -16.20423361672212
              return clf_res(5, 1);
            }
          }else{  // if X[162] > 104.50435675329571
            return clf_res(0, 5);
          }
        }else{  // if X[154] > 73.45975382110082
          return clf_res(17,  0);
        }
      }
    }else{  // if X[189] > 172.5422584065433
      return clf_res(3, 3);
    }
  }else{  // if X[437] > 40.93234558901239
    if (X[197] <= 40.56508646676279){
      if (X[252] <= 53.63551442654245){
        if (X[307] <= 68.57359293068004){
          return clf_res(1, 6);
        }else{  // if X[307] > 68.57359293068004
          return clf_res( 0, 10);
        }
      }else{  // if X[252] > 53.63551442654245
        if (X[60] <= 159.37899241840927){
          if (X[437] <= 15.04409398190813){
            return clf_res(4, 1);
          }else{  // if X[437] > 15.04409398190813
            return clf_res(36,  0);
          }
        }else{  // if X[60] > 159.37899241840927
          return clf_res( 0, 10);
        }
      }
    }else{  // if X[197] > 40.56508646676279
      if (X[50] <= 42.08919149239662){
        if (X[512] <= 187.66691091740935){
          if (X[570] <= -21.74049149149589){
            return clf_res(1, 5);
          }else{  // if X[570] > -21.74049149149589
            if (X[385] <= 96.23626402799817){
              return clf_res(1, 6);
            }else{  // if X[385] > 96.23626402799817
              return clf_res( 0, 79);
            }
          }
        }else{  // if X[512] > 187.66691091740935
          return clf_res(4, 0);
        }
      }else{  // if X[50] > 42.08919149239662
        if (X[388] <= -4.788027370807843){
          return clf_res(7, 0);
        }else{  // if X[388] > -4.788027370807843
          return clf_res( 0, 25);
        }
      }
    }
  }
}

clf_res dt86(double X[584]){
  if (X[140] <= 59.24744991059468){
    if (X[251] <= 139.21295612842397){
      if (X[497] <= 111.75860149267794){
        if (X[261] <= 71.2320705476903){
          if (X[505] <= 111.17770044465465){
            if (X[284] <= 37.10114340166194){
              return clf_res(79,  0);
            }else{  // if X[284] > 37.10114340166194
              return clf_res(4, 4);
            }
          }else{  // if X[505] > 111.17770044465465
            if (X[412] <= 10.667315596237884){
              return clf_res(10,  0);
            }else{  // if X[412] > 10.667315596237884
              if (X[563] <= 80.1593062989496){
                return clf_res(0, 6);
              }else{  // if X[563] > 80.1593062989496
                if (X[432] <= 64.79590625856775){
                  if (X[336] <= 99.98174918956182){
                    return clf_res(5, 1);
                  }else{  // if X[336] > 99.98174918956182
                    return clf_res(7, 0);
                  }
                }else{  // if X[432] > 64.79590625856775
                  return clf_res(3, 4);
                }
              }
            }
          }
        }else{  // if X[261] > 71.2320705476903
          return clf_res(2, 6);
        }
      }else{  // if X[497] > 111.75860149267794
        if (X[311] <= 71.59569063549895){
          return clf_res( 0, 17);
        }else{  // if X[311] > 71.59569063549895
          return clf_res(2, 4);
        }
      }
    }else{  // if X[251] > 139.21295612842397
      if (X[445] <= 54.34869929033224){
        if (X[277] <= 151.98147507088044){
          if (X[564] <= -9.411016992178762){
            return clf_res(1, 4);
          }else{  // if X[564] > -9.411016992178762
            return clf_res(3, 1);
          }
        }else{  // if X[277] > 151.98147507088044
          return clf_res(5, 0);
        }
      }else{  // if X[445] > 54.34869929033224
        if (X[506] <= 34.90141683128678){
          if (X[367] <= 142.99333682817812){
            return clf_res(0, 6);
          }else{  // if X[367] > 142.99333682817812
            return clf_res(3, 3);
          }
        }else{  // if X[506] > 34.90141683128678
          if (X[138] <= 76.61939140050544){
            return clf_res(1, 4);
          }else{  // if X[138] > 76.61939140050544
            return clf_res( 0, 18);
          }
        }
      }
    }
  }else{  // if X[140] > 59.24744991059468
    if (X[14] <= 110.52898587434107){
      return clf_res( 0, 52);
    }else{  // if X[14] > 110.52898587434107
      if (X[37] <= 88.65312554048693){
        return clf_res( 0, 23);
      }else{  // if X[37] > 88.65312554048693
        return clf_res(7, 0);
      }
    }
  }
}

clf_res dt87(double X[584]){
  if (X[96] <= 27.892292958673867){
    if (X[223] <= 143.88112690495203){
      return clf_res(28,  0);
    }else{  // if X[223] > 143.88112690495203
      return clf_res(4, 7);
    }
  }else{  // if X[96] > 27.892292958673867
    if (X[374] <= 136.47699894676097){
      if (X[429] <= 13.145178137629749){
        return clf_res(44,  0);
      }else{  // if X[429] > 13.145178137629749
        if (X[331] <= 129.96954706275366){
          if (X[383] <= 52.87073316478756){
            if (X[47] <= 56.52733711362518){
              return clf_res(17,  0);
            }else{  // if X[47] > 56.52733711362518
              return clf_res(3, 5);
            }
          }else{  // if X[383] > 52.87073316478756
            if (X[338] <= 30.950638121910952){
              return clf_res(3, 6);
            }else{  // if X[338] > 30.950638121910952
              if (X[294] <= 101.89693932451212){
                return clf_res( 0, 19);
              }else{  // if X[294] > 101.89693932451212
                return clf_res(2, 4);
              }
            }
          }
        }else{  // if X[331] > 129.96954706275366
          return clf_res( 0, 19);
        }
      }
    }else{  // if X[374] > 136.47699894676097
      if (X[302] <= 44.35643034091447){
        return clf_res(10,  0);
      }else{  // if X[302] > 44.35643034091447
        if (X[548] <= 67.78857220311465){
          if (X[228] <= 85.55814769604915){
            if (X[482] <= 67.50884408796807){
              if (X[469] <= -1.1086800015589837){
                return clf_res(1, 3);
              }else{  // if X[469] > -1.1086800015589837
                return clf_res(1, 3);
              }
            }else{  // if X[482] > 67.50884408796807
              if (X[370] <= 88.5029246832458){
                return clf_res( 0, 74);
              }else{  // if X[370] > 88.5029246832458
                return clf_res(1, 6);
              }
            }
          }else{  // if X[228] > 85.55814769604915
            if (X[17] <= 44.06001999808407){
              return clf_res(5, 4);
            }else{  // if X[17] > 44.06001999808407
              return clf_res( 0, 10);
            }
          }
        }else{  // if X[548] > 67.78857220311465
          return clf_res(6, 0);
        }
      }
    }
  }
}

clf_res dt88(double X[584]){
  if (X[115] <= 52.4683584460274){
    if (X[520] <= 88.28390719315217){
      return clf_res(39,  0);
    }else{  // if X[520] > 88.28390719315217
      if (X[452] <= 43.72737724844437){
        return clf_res(56,  0);
      }else{  // if X[452] > 43.72737724844437
        if (X[114] <= 80.67690246633117){
          if (X[322] <= 76.8345961787997){
            if (X[212] <= 116.44188180677945){
              if (X[225] <= 12.981811426159702){
                return clf_res(5, 0);
              }else{  // if X[225] > 12.981811426159702
                return clf_res(5, 1);
              }
            }else{  // if X[212] > 116.44188180677945
              return clf_res(4, 3);
            }
          }else{  // if X[322] > 76.8345961787997
            return clf_res(9, 0);
          }
        }else{  // if X[114] > 80.67690246633117
          if (X[184] <= 121.27300819119932){
            return clf_res(2, 4);
          }else{  // if X[184] > 121.27300819119932
            return clf_res(3, 8);
          }
        }
      }
    }
  }else{  // if X[115] > 52.4683584460274
    if (X[309] <= 174.83068321160573){
      if (X[64] <= 77.54666532879327){
        if (X[349] <= 82.67543030410275){
          if (X[132] <= 50.420144195692174){
            return clf_res(6, 3);
          }else{  // if X[132] > 50.420144195692174
            if (X[423] <= 52.677394660783236){
              return clf_res(3, 3);
            }else{  // if X[423] > 52.677394660783236
              return clf_res( 0, 66);
            }
          }
        }else{  // if X[349] > 82.67543030410275
          if (X[298] <= 62.39337656702587){
            if (X[94] <= 143.40179388324506){
              return clf_res(1, 4);
            }else{  // if X[94] > 143.40179388324506
              return clf_res(2, 3);
            }
          }else{  // if X[298] > 62.39337656702587
            return clf_res(7, 1);
          }
        }
      }else{  // if X[64] > 77.54666532879327
        return clf_res( 0, 43);
      }
    }else{  // if X[309] > 174.83068321160573
      return clf_res(4, 0);
    }
  }
}

clf_res dt89(double X[584]){
  if (X[360] <= 47.14823282282703){
    if (X[27] <= 78.94291595768276){
      return clf_res(38,  0);
    }else{  // if X[27] > 78.94291595768276
      if (X[65] <= 59.279873941200854){
        if (X[46] <= 137.26091789507421){
          if (X[417] <= 14.277873679297311){
            return clf_res(34,  0);
          }else{  // if X[417] > 14.277873679297311
            return clf_res(6, 2);
          }
        }else{  // if X[46] > 137.26091789507421
          if (X[371] <= 70.78004429841104){
            return clf_res(0, 5);
          }else{  // if X[371] > 70.78004429841104
            return clf_res(3, 3);
          }
        }
      }else{  // if X[65] > 59.279873941200854
        if (X[555] <= 94.40573883214755){
          return clf_res(1, 3);
        }else{  // if X[555] > 94.40573883214755
          return clf_res(0, 8);
        }
      }
    }
  }else{  // if X[360] > 47.14823282282703
    if (X[346] <= 97.63589946367412){
      if (X[51] <= 55.37955101578546){
        if (X[251] <= 75.7147280696751){
          return clf_res(4, 3);
        }else{  // if X[251] > 75.7147280696751
          if (X[240] <= 68.39127661660974){
            return clf_res(2, 5);
          }else{  // if X[240] > 68.39127661660974
            return clf_res( 0, 47);
          }
        }
      }else{  // if X[51] > 55.37955101578546
        if (X[291] <= 71.7581900481322){
          if (X[454] <= 102.20470703498488){
            return clf_res(8, 2);
          }else{  // if X[454] > 102.20470703498488
            return clf_res( 0, 48);
          }
        }else{  // if X[291] > 71.7581900481322
          if (X[362] <= 148.61555687506916){
            if (X[335] <= 40.3790866307994){
              if (X[151] <= 58.24442391638056){
                return clf_res(5, 1);
              }else{  // if X[151] > 58.24442391638056
                return clf_res(8, 0);
              }
            }else{  // if X[335] > 40.3790866307994
              return clf_res( 2, 10);
            }
          }else{  // if X[362] > 148.61555687506916
            if (X[556] <= 140.07117567746138){
              return clf_res(18,  0);
            }else{  // if X[556] > 140.07117567746138
              return clf_res(3, 1);
            }
          }
        }
      }
    }else{  // if X[346] > 97.63589946367412
      if (X[367] <= 180.3386805296392){
        return clf_res(10,  0);
      }else{  // if X[367] > 180.3386805296392
        return clf_res(3, 2);
      }
    }
  }
}

clf_res dt90(double X[584]){
  if (X[2] <= 45.01177213349761){
    if (X[160] <= 95.94615584259533){
      if (X[231] <= -87.8983701449148){
        return clf_res(1, 6);
      }else{  // if X[231] > -87.8983701449148
        if (X[288] <= 151.8758264942819){
          if (X[410] <= 102.05638062678753){
            return clf_res(30,  0);
          }else{  // if X[410] > 102.05638062678753
            return clf_res(6, 1);
          }
        }else{  // if X[288] > 151.8758264942819
          return clf_res(5, 5);
        }
      }
    }else{  // if X[160] > 95.94615584259533
      if (X[150] <= 43.26616701578469){
        if (X[540] <= 122.02703722254842){
          return clf_res( 0, 43);
        }else{  // if X[540] > 122.02703722254842
          return clf_res(2, 6);
        }
      }else{  // if X[150] > 43.26616701578469
        if (X[427] <= 69.24956439267089){
          return clf_res(9, 0);
        }else{  // if X[427] > 69.24956439267089
          if (X[56] <= 63.341362861256776){
            if (X[130] <= 167.55845073322436){
              if (X[9] <= 85.25475039550892){
                if (X[301] <= 88.90638507385368){
                  return clf_res( 0, 58);
                }else{  // if X[301] > 88.90638507385368
                  return clf_res(1, 3);
                }
              }else{  // if X[9] > 85.25475039550892
                return clf_res(5, 5);
              }
            }else{  // if X[130] > 167.55845073322436
              return clf_res(10,  5);
            }
          }else{  // if X[56] > 63.341362861256776
            return clf_res(9, 3);
          }
        }
      }
    }
  }else{  // if X[2] > 45.01177213349761
    if (X[91] <= 55.87547775435608){
      if (X[444] <= 210.03275151348396){
        return clf_res(38,  0);
      }else{  // if X[444] > 210.03275151348396
        return clf_res(4, 1);
      }
    }else{  // if X[91] > 55.87547775435608
      if (X[121] <= 164.75393542605366){
        if (X[310] <= 26.332153930013163){
          return clf_res(1, 4);
        }else{  // if X[310] > 26.332153930013163
          return clf_res( 0, 16);
        }
      }else{  // if X[121] > 164.75393542605366
        return clf_res(7, 1);
      }
    }
  }
}

clf_res dt91(double X[584]){
  if (X[194] <= 56.248605415027335){
    if (X[286] <= 158.10735429055495){
      if (X[73] <= -131.0797736938738){
        return clf_res(2, 8);
      }else{  // if X[73] > -131.0797736938738
        if (X[168] <= 174.27265173205524){
          if (X[332] <= 32.95697860263694){
            return clf_res(50,  0);
          }else{  // if X[332] > 32.95697860263694
            return clf_res(5, 1);
          }
        }else{  // if X[168] > 174.27265173205524
          if (X[523] <= 42.08907204864384){
            return clf_res(10,  0);
          }else{  // if X[523] > 42.08907204864384
            return clf_res(1, 3);
          }
        }
      }
    }else{  // if X[286] > 158.10735429055495
      if (X[412] <= 47.581817315125335){
        return clf_res(3, 2);
      }else{  // if X[412] > 47.581817315125335
        if (X[47] <= 95.02340417128255){
          return clf_res( 0, 20);
        }else{  // if X[47] > 95.02340417128255
          return clf_res(1, 3);
        }
      }
    }
  }else{  // if X[194] > 56.248605415027335
    if (X[314] <= 129.71396561458963){
      if (X[74] <= 18.22045565504653){
        if (X[200] <= 78.61738928453154){
          if (X[577] <= 121.71827449775871){
            return clf_res(2, 3);
          }else{  // if X[577] > 121.71827449775871
            return clf_res( 0, 12);
          }
        }else{  // if X[200] > 78.61738928453154
          return clf_res( 0, 40);
        }
      }else{  // if X[74] > 18.22045565504653
        return clf_res(3, 6);
      }
    }else{  // if X[314] > 129.71396561458963
      if (X[60] <= 63.209607994387625){
        if (X[461] <= 86.37865014811715){
          if (X[110] <= 0.385814703030821){
            if (X[490] <= 29.492422188102935){
              return clf_res(3, 1);
            }else{  // if X[490] > 29.492422188102935
              return clf_res(14,  0);
            }
          }else{  // if X[110] > 0.385814703030821
            return clf_res(3, 4);
          }
        }else{  // if X[461] > 86.37865014811715
          if (X[202] <= 154.01607225463){
            if (X[489] <= -19.592241721759752){
              return clf_res(6, 1);
            }else{  // if X[489] > -19.592241721759752
              if (X[44] <= 95.82294639086929){
                return clf_res( 0, 12);
              }else{  // if X[44] > 95.82294639086929
                if (X[566] <= 105.48936624720335){
                  return clf_res(1, 5);
                }else{  // if X[566] > 105.48936624720335
                  return clf_res(3, 3);
                }
              }
            }
          }else{  // if X[202] > 154.01607225463
            if (X[159] <= 74.20741762539303){
              return clf_res(12,  0);
            }else{  // if X[159] > 74.20741762539303
              return clf_res(6, 4);
            }
          }
        }
      }else{  // if X[60] > 63.209607994387625
        return clf_res( 0, 32);
      }
    }
  }
}

clf_res dt92(double X[584]){
  if (X[99] <= 73.40035670548484){
    if (X[141] <= 56.872074074445564){
      return clf_res(32,  0);
    }else{  // if X[141] > 56.872074074445564
      if (X[282] <= 59.77624341893887){
        if (X[411] <= 89.88416833707224){
          return clf_res(12,  0);
        }else{  // if X[411] > 89.88416833707224
          if (X[408] <= 19.943457228231274){
            return clf_res(5, 4);
          }else{  // if X[408] > 19.943457228231274
            if (X[144] <= 81.9328973682668){
              if (X[321] <= 63.73917521728712){
                return clf_res( 0, 46);
              }else{  // if X[321] > 63.73917521728712
                if (X[198] <= 88.32992575331002){
                  return clf_res(2, 2);
                }else{  // if X[198] > 88.32992575331002
                  return clf_res( 0, 13);
                }
              }
            }else{  // if X[144] > 81.9328973682668
              return clf_res(4, 6);
            }
          }
        }
      }else{  // if X[282] > 59.77624341893887
        if (X[97] <= 77.85710406287232){
          if (X[312] <= 150.20654063431917){
            return clf_res( 0, 43);
          }else{  // if X[312] > 150.20654063431917
            return clf_res(1, 6);
          }
        }else{  // if X[97] > 77.85710406287232
          if (X[295] <= 135.7214725501047){
            return clf_res( 0, 29);
          }else{  // if X[295] > 135.7214725501047
            if (X[490] <= 56.69355983308538){
              if (X[169] <= 145.8306361934736){
                return clf_res(3, 3);
              }else{  // if X[169] > 145.8306361934736
                return clf_res(1, 8);
              }
            }else{  // if X[490] > 56.69355983308538
              return clf_res(6, 0);
            }
          }
        }
      }
    }
  }else{  // if X[99] > 73.40035670548484
    if (X[120] <= 17.58124561002495){
      return clf_res(0, 7);
    }else{  // if X[120] > 17.58124561002495
      if (X[90] <= 161.44443461485665){
        if (X[40] <= 68.37643223461035){
          return clf_res(30,  0);
        }else{  // if X[40] > 68.37643223461035
          return clf_res(7, 2);
        }
      }else{  // if X[90] > 161.44443461485665
        return clf_res( 0, 13);
      }
    }
  }
}

clf_res dt93(double X[584]){
  if (X[345] <= 47.28446451863477){
    if (X[186] <= 65.7473792897413){
      return clf_res(25,  0);
    }else{  // if X[186] > 65.7473792897413
      if (X[230] <= 50.681684809054566){
        if (X[270] <= 153.07184942446048){
          if (X[290] <= -20.61538258296276){
            if (X[330] <= 42.43397937787056){
              return clf_res(11,  0);
            }else{  // if X[330] > 42.43397937787056
              return clf_res(2, 3);
            }
          }else{  // if X[290] > -20.61538258296276
            return clf_res(16,  0);
          }
        }else{  // if X[270] > 153.07184942446048
          return clf_res(5, 3);
        }
      }else{  // if X[230] > 50.681684809054566
        if (X[113] <= -2.113688944806995){
          if (X[360] <= 58.53224382107267){
            if (X[520] <= 92.5975674436253){
              return clf_res(3, 2);
            }else{  // if X[520] > 92.5975674436253
              return clf_res(6, 0);
            }
          }else{  // if X[360] > 58.53224382107267
            return clf_res(3, 6);
          }
        }else{  // if X[113] > -2.113688944806995
          if (X[295] <= 9.401080615207182){
            return clf_res(1, 5);
          }else{  // if X[295] > 9.401080615207182
            return clf_res( 0, 15);
          }
        }
      }
    }
  }else{  // if X[345] > 47.28446451863477
    if (X[424] <= -14.894627291526447){
      return clf_res(24,  0);
    }else{  // if X[424] > -14.894627291526447
      if (X[362] <= 90.97845781660914){
        if (X[308] <= 36.236572884387314){
          if (X[325] <= 64.45139754120214){
            return clf_res(16,  0);
          }else{  // if X[325] > 64.45139754120214
            return clf_res(5, 2);
          }
        }else{  // if X[308] > 36.236572884387314
          return clf_res(0, 4);
        }
      }else{  // if X[362] > 90.97845781660914
        if (X[172] <= 58.06442247265146){
          return clf_res(5, 4);
        }else{  // if X[172] > 58.06442247265146
          if (X[358] <= 61.86767112305523){
            if (X[90] <= 148.09461360851355){
              if (X[311] <= 26.01315559812713){
                if (X[481] <= 70.50666065259776){
                  return clf_res(11,  0);
                }else{  // if X[481] > 70.50666065259776
                  return clf_res(3, 2);
                }
              }else{  // if X[311] > 26.01315559812713
                return clf_res(3, 6);
              }
            }else{  // if X[90] > 148.09461360851355
              return clf_res( 0, 31);
            }
          }else{  // if X[358] > 61.86767112305523
            if (X[176] <= 21.705758983507362){
              if (X[142] <= 78.75400002073982){
                return clf_res(1, 7);
              }else{  // if X[142] > 78.75400002073982
                return clf_res( 0, 50);
              }
            }else{  // if X[176] > 21.705758983507362
              return clf_res(1, 4);
            }
          }
        }
      }
    }
  }
}

clf_res dt94(double X[584]){
  if (X[433] <= 43.77125781756638){
    if (X[285] <= 140.37374029127145){
      return clf_res(58,  0);
    }else{  // if X[285] > 140.37374029127145
      if (X[196] <= 62.32142806742954){
        return clf_res(12,  0);
      }else{  // if X[196] > 62.32142806742954
        if (X[61] <= 90.10401272492399){
          return clf_res( 1, 10);
        }else{  // if X[61] > 90.10401272492399
          return clf_res(6, 2);
        }
      }
    }
  }else{  // if X[433] > 43.77125781756638
    if (X[79] <= -11.923588525772608){
      if (X[377] <= 16.328136004491682){
        if (X[283] <= 126.63811401611552){
          return clf_res(3, 2);
        }else{  // if X[283] > 126.63811401611552
          return clf_res(0, 5);
        }
      }else{  // if X[377] > 16.328136004491682
        if (X[455] <= 78.06045358266653){
          return clf_res(9, 0);
        }else{  // if X[455] > 78.06045358266653
          return clf_res(3, 2);
        }
      }
    }else{  // if X[79] > -11.923588525772608
      if (X[63] <= 42.30709498633597){
        return clf_res(6, 5);
      }else{  // if X[63] > 42.30709498633597
        if (X[16] <= 40.090793912891215){
          if (X[399] <= 101.53985979977655){
            return clf_res( 0, 27);
          }else{  // if X[399] > 101.53985979977655
            if (X[523] <= 82.56441543828414){
              return clf_res(2, 3);
            }else{  // if X[523] > 82.56441543828414
              return clf_res(10,  0);
            }
          }
        }else{  // if X[16] > 40.090793912891215
          if (X[214] <= 67.54715049339485){
            if (X[491] <= 182.29115531674478){
              return clf_res( 0, 96);
            }else{  // if X[491] > 182.29115531674478
              return clf_res(1, 8);
            }
          }else{  // if X[214] > 67.54715049339485
            if (X[551] <= 138.89717232342912){
              return clf_res(2, 3);
            }else{  // if X[551] > 138.89717232342912
              return clf_res(0, 9);
            }
          }
        }
      }
    }
  }
}

clf_res dt95(double X[584]){
  if (X[437] <= 40.89134881936262){
    if (X[105] <= 174.27257546681082){
      if (X[419] <= 2.9405846318282762){
        return clf_res(60,  0);
      }else{  // if X[419] > 2.9405846318282762
        if (X[452] <= 120.61753331501778){
          if (X[141] <= 24.391421822346445){
            return clf_res(6, 1);
          }else{  // if X[141] > 24.391421822346445
            return clf_res( 0, 10);
          }
        }else{  // if X[452] > 120.61753331501778
          return clf_res(7, 0);
        }
      }
    }else{  // if X[105] > 174.27257546681082
      return clf_res(0, 8);
    }
  }else{  // if X[437] > 40.89134881936262
    if (X[339] <= 116.81644669864353){
      if (X[63] <= 71.98321108587157){
        if (X[455] <= 53.542908197901006){
          return clf_res(39,  0);
        }else{  // if X[455] > 53.542908197901006
          if (X[87] <= 29.299777647807772){
            return clf_res(3, 3);
          }else{  // if X[87] > 29.299777647807772
            return clf_res( 0, 17);
          }
        }
      }else{  // if X[63] > 71.98321108587157
        if (X[97] <= -97.81573697702422){
          return clf_res(1, 3);
        }else{  // if X[97] > -97.81573697702422
          return clf_res( 0, 37);
        }
      }
    }else{  // if X[339] > 116.81644669864353
      if (X[54] <= -30.109295193403753){
        return clf_res(4, 4);
      }else{  // if X[54] > -30.109295193403753
        if (X[447] <= 108.56115485484143){
          if (X[471] <= 119.69791714587372){
            if (X[292] <= 57.503263089018006){
              return clf_res( 0, 45);
            }else{  // if X[292] > 57.503263089018006
              if (X[35] <= 3.164921650108539){
                return clf_res(2, 5);
              }else{  // if X[35] > 3.164921650108539
                return clf_res( 0, 21);
              }
            }
          }else{  // if X[471] > 119.69791714587372
            return clf_res(1, 4);
          }
        }else{  // if X[447] > 108.56115485484143
          return clf_res(3, 1);
        }
      }
    }
  }
}

clf_res dt96(double X[584]){
  if (X[16] <= 16.79362415274945){
    if (X[343] <= 69.56595796778058){
      return clf_res(2, 4);
    }else{  // if X[343] > 69.56595796778058
      if (X[250] <= 20.954721074655684){
        return clf_res(2, 3);
      }else{  // if X[250] > 20.954721074655684
        return clf_res( 0, 26);
      }
    }
  }else{  // if X[16] > 16.79362415274945
    if (X[285] <= 64.17691899557836){
      if (X[455] <= 98.45948336081423){
        return clf_res(104,   0);
      }else{  // if X[455] > 98.45948336081423
        if (X[7] <= 85.62202518005279){
          return clf_res( 0, 31);
        }else{  // if X[7] > 85.62202518005279
          return clf_res(2, 5);
        }
      }
    }else{  // if X[285] > 64.17691899557836
      if (X[127] <= 93.52441839093487){
        if (X[332] <= 106.95083356236537){
          if (X[422] <= 4.411680545043495){
            return clf_res(16,  0);
          }else{  // if X[422] > 4.411680545043495
            return clf_res(3, 2);
          }
        }else{  // if X[332] > 106.95083356236537
          if (X[257] <= 49.68075722396943){
            if (X[249] <= 79.84387913341445){
              return clf_res( 1, 10);
            }else{  // if X[249] > 79.84387913341445
              return clf_res(6, 2);
            }
          }else{  // if X[257] > 49.68075722396943
            if (X[484] <= 53.874967816362386){
              return clf_res(1, 4);
            }else{  // if X[484] > 53.874967816362386
              if (X[379] <= 87.04032844610713){
                return clf_res( 0, 41);
              }else{  // if X[379] > 87.04032844610713
                return clf_res(1, 7);
              }
            }
          }
        }
      }else{  // if X[127] > 93.52441839093487
        return clf_res(12,  0);
      }
    }
  }
}

clf_res dt97(double X[584]){
  if (X[281] <= 49.461208737033786){
    if (X[308] <= 140.81057779520145){
      if (X[214] <= -96.45509815504747){
        return clf_res(2, 5);
      }else{  // if X[214] > -96.45509815504747
        if (X[401] <= 92.0054229012477){
          return clf_res(65,  0);
        }else{  // if X[401] > 92.0054229012477
          if (X[323] <= 63.70661218992939){
            if (X[427] <= 85.7926558944209){
              return clf_res(30,  0);
            }else{  // if X[427] > 85.7926558944209
              return clf_res(4, 1);
            }
          }else{  // if X[323] > 63.70661218992939
            return clf_res(5, 4);
          }
        }
      }
    }else{  // if X[308] > 140.81057779520145
      if (X[227] <= 23.15077050399113){
        return clf_res(1, 5);
      }else{  // if X[227] > 23.15077050399113
        return clf_res( 0, 20);
      }
    }
  }else{  // if X[281] > 49.461208737033786
    if (X[267] <= 104.93673546825804){
      if (X[386] <= 101.84895628312215){
        if (X[454] <= 98.10068739840662){
          return clf_res(6, 4);
        }else{  // if X[454] > 98.10068739840662
          if (X[6] <= 32.13454260868069){
            return clf_res(2, 2);
          }else{  // if X[6] > 32.13454260868069
            if (X[56] <= 8.287393732052475){
              if (X[260] <= 69.01092719830818){
                if (X[520] <= 82.44273725433305){
                  return clf_res( 1, 10);
                }else{  // if X[520] > 82.44273725433305
                  return clf_res(2, 3);
                }
              }else{  // if X[260] > 69.01092719830818
                return clf_res( 0, 17);
              }
            }else{  // if X[56] > 8.287393732052475
              return clf_res( 0, 74);
            }
          }
        }
      }else{  // if X[386] > 101.84895628312215
        return clf_res(6, 4);
      }
    }else{  // if X[267] > 104.93673546825804
      return clf_res(12,  0);
    }
  }
}

clf_res dt98(double X[584]){
  if (X[291] <= 58.69095359350523){
    if (X[505] <= 108.52312753694372){
      if (X[339] <= 65.00093501581085){
        if (X[577] <= 59.068996053611116){
          if (X[529] <= 116.52883353770275){
            return clf_res(35,  0);
          }else{  // if X[529] > 116.52883353770275
            return clf_res(5, 4);
          }
        }else{  // if X[577] > 59.068996053611116
          return clf_res( 2, 10);
        }
      }else{  // if X[339] > 65.00093501581085
        if (X[470] <= -24.85174149503146){
          return clf_res(2, 2);
        }else{  // if X[470] > -24.85174149503146
          if (X[135] <= 104.55388665909689){
            if (X[482] <= 5.543737407071195){
              return clf_res(0, 7);
            }else{  // if X[482] > 5.543737407071195
              return clf_res(3, 3);
            }
          }else{  // if X[135] > 104.55388665909689
            return clf_res(0, 9);
          }
        }
      }
    }else{  // if X[505] > 108.52312753694372
      if (X[416] <= 51.07529409153342){
        return clf_res(7, 0);
      }else{  // if X[416] > 51.07529409153342
        if (X[405] <= 18.796651750402262){
          return clf_res(3, 3);
        }else{  // if X[405] > 18.796651750402262
          return clf_res( 0, 74);
        }
      }
    }
  }else{  // if X[291] > 58.69095359350523
    if (X[285] <= -69.4838520748879){
      if (X[62] <= 60.00128350149009){
        return clf_res( 0, 11);
      }else{  // if X[62] > 60.00128350149009
        return clf_res(5, 5);
      }
    }else{  // if X[285] > -69.4838520748879
      if (X[548] <= 53.69099710600531){
        if (X[71] <= 98.45113130862238){
          if (X[102] <= 18.837070082357393){
            return clf_res( 1, 10);
          }else{  // if X[102] > 18.837070082357393
            if (X[370] <= 98.68275628000885){
              return clf_res(0, 6);
            }else{  // if X[370] > 98.68275628000885
              return clf_res(5, 1);
            }
          }
        }else{  // if X[71] > 98.45113130862238
          if (X[244] <= 173.91653335670958){
            if (X[301] <= 69.79284037540137){
              return clf_res(5, 5);
            }else{  // if X[301] > 69.79284037540137
              return clf_res(7, 2);
            }
          }else{  // if X[244] > 173.91653335670958
            return clf_res(10,  0);
          }
        }
      }else{  // if X[548] > 53.69099710600531
        if (X[386] <= 53.74774676920872){
          return clf_res(22,  0);
        }else{  // if X[386] > 53.74774676920872
          if (X[485] <= 98.96959913537094){
            if (X[201] <= 80.86629558901036){
              return clf_res(8, 0);
            }else{  // if X[201] > 80.86629558901036
              return clf_res(5, 1);
            }
          }else{  // if X[485] > 98.96959913537094
            return clf_res(5, 2);
          }
        }
      }
    }
  }
}

clf_res dt99(double X[584]){
  if (X[94] <= 58.28255511778363){
    if (X[17] <= 218.918603678551){
      if (X[290] <= 40.25710429714866){
        return clf_res(70,  0);
      }else{  // if X[290] > 40.25710429714866
        if (X[281] <= 127.84779581000628){
          if (X[559] <= 18.401494294943557){
            if (X[326] <= 66.82594175259614){
              if (X[539] <= 93.82646778453721){
                return clf_res(9, 1);
              }else{  // if X[539] > 93.82646778453721
                return clf_res(20,  0);
              }
            }else{  // if X[326] > 66.82594175259614
              return clf_res(3, 2);
            }
          }else{  // if X[559] > 18.401494294943557
            return clf_res(2, 5);
          }
        }else{  // if X[281] > 127.84779581000628
          if (X[488] <= 50.769408573508514){
            return clf_res( 0, 10);
          }else{  // if X[488] > 50.769408573508514
            return clf_res(3, 5);
          }
        }
      }
    }else{  // if X[17] > 218.918603678551
      return clf_res( 0, 14);
    }
  }else{  // if X[94] > 58.28255511778363
    if (X[240] <= 161.5066591805319){
      if (X[445] <= 13.33595835156203){
        if (X[413] <= 56.485643785501395){
          return clf_res(11,  0);
        }else{  // if X[413] > 56.485643785501395
          if (X[403] <= 2.7107449414853555){
            return clf_res(0, 9);
          }else{  // if X[403] > 2.7107449414853555
            return clf_res(2, 5);
          }
        }
      }else{  // if X[445] > 13.33595835156203
        if (X[343] <= 95.84979796086024){
          if (X[24] <= 62.50000005930485){
            return clf_res( 0, 75);
          }else{  // if X[24] > 62.50000005930485
            if (X[276] <= 15.30031592040989){
              return clf_res(4, 3);
            }else{  // if X[276] > 15.30031592040989
              return clf_res( 0, 11);
            }
          }
        }else{  // if X[343] > 95.84979796086024
          return clf_res(4, 7);
        }
      }
    }else{  // if X[240] > 161.5066591805319
      return clf_res(9, 1);
    }
  }
}


