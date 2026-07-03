#include <string.h>
#include <bits/stdc++.h>
using namespace std;

void print(){
  cout<<"sanuuuuuu"<<endl;
}

//PAIRS 



void pairs(){
  pair<int,int> p={1,3};
  cout<<p.first<<" "<<p.second;

  pair<int,pair<int,int>> p1={1,{2,3}};
  cout<<p1.first<<" "<<p1.second.second<<endl;


  pair<int,int>arr[]={{1,2},{3,4},{5,6},{7,8}};
  cout<<arr[3].second;
}


//VECTORS


void Vectors(){
  vector<int> v;
  v.push_back(2);
  v.push_back(7);
  v.push_back(8);
  v.push_back(89);
  v.emplace_back(88);


  vector<int> v1(5,100); //{100,100,100,100,100}
  vector<int>v2(v1);

  for(int i=0;i<v.size();i++){

    cout<<v[i]<<" ";
  }
  cout<<endl;
  for(int i=0;i<v1.size();i++){

    cout<<v1[i]<<" ";
  }
  cout<<endl;
  for(int i=0;i<v2.size();i++){

    cout<<v2[i]<<" ";
  }
  cout<<endl;

  v.erase(v.begin()+1,v.begin()+3);



}


//ITERATOR

void iterators(){
  vector<int>v={2,3,4,5,6,7};
  for(auto it:v){
    cout<<it<<" ";
  };

}
int main()
{
  print();
  pairs();
  Vectors();
  iterators();

  return 0;
}


// g++ 01.cpp -o 01.exe   
// .\01.exe      