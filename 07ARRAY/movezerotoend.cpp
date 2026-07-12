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

//optimal
void movetoendopt(vector<int>&arr){
  int n=arr.size();
  
  int j=-1;
  for(int i=0;i<n;i++){
    if(arr[i]==0){
      j=i;
      break;
    }

  }
  for(int i=j+1;i<n;i++){
    if(arr[i]!=0){
      swap(arr[i],arr[j]);
      j++;
      
    };

  }
  
}
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

  int m;
  cin>>m;

  vector<int> arr1(m);

  for(int i=0;i<m;i++){
    cin>>arr1[i];
  };

  movetoendopt(arr1);

  for(int i=0;i<arr1.size();i++){
    cout<<arr1[i]<<" ";
  };

return 0;

};
