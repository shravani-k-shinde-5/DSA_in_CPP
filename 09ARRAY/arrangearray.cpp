#include <bits/stdc++.h>
using namespace std;
//brute
void arrage_element(vector<int>vec){

  vector  <int> pos;
  vector <int> neg;
  int k=0;
  int j=1;
  for (int i=0;i<vec.size();i++){
    if(vec[i]>0){
      pos[k]=vec[k];
      k=k+2;
    }
    else{
      neg[j]=vec[j];
      j=j+2;

    }
  }
  for(int i=0;i<vec.size();i++){
    if(i%2==0){
      vec[i]=pos[i];
    }
    else{
      vec[i]=neg[i];
    }
  }

}