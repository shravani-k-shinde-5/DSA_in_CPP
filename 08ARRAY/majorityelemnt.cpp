#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int majority(vector<int>vec){
  for(int i=0;i<vec.size();i++){
    int count=0;
    for(int j=0;j<vec.size();j++){
      if(vec[i]==vec[j]){
        count ++;

      }

    }
    if(count==vec.size()/2){
      return vec[i];
    }
  }

}