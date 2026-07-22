#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sort3bits(vector<int> &vec){
  int c1=0;
  int c2=0;
  int c3=0;
  for (int i=0;i<vec.size();i++){
    if(vec[i]==0){
      c1++;
    }
    else if(vec[i]==1){
      c2++;
    }
    else{
      c3++;
    }

  };
  for(int i=0;i<c1;i++)
  {   vec[i]=0;

  };
  for(int i=c1;i<c1+c2;i++)
  {   vec[i]=1;

  };
  for(int i=c2+c1;i<vec.size();i++)
  {   vec[i]=2;

  };



}
void sort3bits2(vector<int> &vec){
  int low=0;
  int mid=0;
  int high=vec.size();

  while(mid<high){
    if(vec[mid]==0){
      swap(vec[mid],vec[low]);
      mid++;
      low++;
    }
    else if(vec[mid]==1){
      mid++;

    }
    else{
      swap(vec[mid],vec[high]);
        high--;
    }
    }
  }

int main(){
  vector<int> vec ={2,1,0,1,2,2,0,0,1};
  sort3bits(vec);
  for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<" ";
  }
  vector<int> vec1 ={2,1,0,1,2,2,0,0,1};
  sort3bits(vec1);
  for(int i=0;i<vec1.size();i++){
    cout<<vec1[i]<<" ";
  }
  
}


// g++ kadanesalgo.cpp -o kadanesalgo.exe
