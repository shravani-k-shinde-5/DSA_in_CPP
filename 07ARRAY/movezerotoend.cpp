#include <iostream>
#include <vector>
using namespace std;
//brute force approch
void movezero(vector <int>&arr){
  vector <int> temp;
  int n=arr.size();

  for(int i =0;i<n;i++){
    if(arr[i]!=0){
      temp.push_back(arr[i]);
  }
}
  for(int i=0;i<temp.size();i++){
    arr[i]=temp[i];
  }
  for(int i=temp.size();i<n;i++){
    arr[i]=0;
  };

};

//o
int main(){
  int n;
  cin>>n;

  vector<int> arr(n);

  for(int i=0;i<n;i++){
    cin>>arr[i];
  };

  movezero(arr);

  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  };


return 0;

};
//g++ movezerotoend.cpp -o movezerotoend.exe
// .\movezerotoend.exe