#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int kadane_algo(vector <int> vec){
  int max_sum=INT_MIN;
  int currsum=0;
  for (int i=0;i<vec.size();i++){
    currsum+=vec[i];
    max_sum=max(max_sum,currsum);
    if(currsum<0){
      currsum=0; 
    }



  }
  return max_sum;
}
int main(){
  vector<int> vec={2,3-5,9,-3,-5,-7,-8};
  cout<<"ANS   "<<kadane_algo(vec);
}