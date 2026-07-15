#include <iostream>
#include <vector>
using namespace std;

void duplicates_from_sorted_array(vector<int>&arr){
  int  i=0;
  for(int j=0;j<arr.size();j++){
    if(arr[i]!=arr[j]){
      i++;
      arr[i]=arr[j];
    }
  }
  arr.resize(i+1);}
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
