#include <iostream>
#include <vector>
using namespace std;

void duplicates_from_sorted_array(vector<int>&arr){
  int n=arr.size();
  int i =0;
  int j=0;

  for(int k=0;k<=n;k++){
    if(arr[i]==arr[j]){
      j++;
    }
    else{
      swap(arr[i],arr[j]);
      i++;
    }
  
  }
}
int main(){
  int n;
  cin>>n;

  vector<int> arr(n);

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  duplicates_from_sorted_array(arr);

  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
}
  
// g++ duplicatesfromsortedarray.cpp -o duplicatesfromsortedarray.exe
// .\duplicatesfromsortedarray.exe