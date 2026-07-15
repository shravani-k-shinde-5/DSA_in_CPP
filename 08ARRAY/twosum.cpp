#include <iostream>
#include <vector>
#include <map>
using namespace std;
int twosumbrute(vector<int>&vec,int tar){
  for(int i=0;i<vec.size();i++){
    for(int j=1;j<vec.size();j++){
      if(vec[j]+vec[i]==tar){
        return i,j;
      }
    }
  }
}
int twosumbetter(vector<int> & vec,int tar){
  map <int ,int>maps;
  for(int i=0;i<vec.size();i++){
    int a=vec[i];
    int more =a-tar;
    if(maps.find(more)!=maps.end()){
      return maps[more],maps[i];
    }
    maps[a]=i;

  }
  return -1;
}

