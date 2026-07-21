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
int majority2(vector <int>vec){
  int ele;
  int count=0;
  for(int i=0;i<vec.size();i++){
    if(count ==0){
      ele=vec[i];
      count++;
    }
    else if(vec[i]==ele){
      count++;

    }
    else{
      count --;
    };

  };
  return ele;
}

int main(){
  vector<int> vec ={2,1,0,1,2,8,6,5,2,3,2,2,1,2,2,2,2,1,2,0,0,1};
  cout<<"brute"<<majority(vec)<<endl;
  cout<<"optimal"<<majority2(vec)<<endl;


  
}
// g++ majorityelement.cpp -o majorityelement.exe
//.\majorityelement.exe
