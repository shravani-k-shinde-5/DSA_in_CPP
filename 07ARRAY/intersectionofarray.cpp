#include <bits/stdc++.h>
using namespace std;
// intersection of sorted array
// Brute Force
vector<int> intersectionofarr(vector<int>& arr1, vector<int>& arr2) {
  vector<int>ans;
  vector<int>v={0};

  for(int i=0;i<arr1.size();i++){
    for(int j=0;j<arr2.size();j++){

      if(arr1[i]==arr2[j] && v[j]==0){
        v.push_back(arr2[j]);
        v[j]==1;
        break;
      }
      if(arr1[i]<arr2[j]){
      break;
    };

    }
    
  };
    return ans;
};
//optimum


int main() {
    vector<int> arr1 = {1, 2, 2, 3, 4};
    vector<int> arr2 = {2, 3, 5, 6};

    vector<int> ans = intersectionofarr(arr1, arr2);

    for (int x : ans) {
        cout << x << " "<<endl;
    }
    // vector<int> arr3 = {1, 2, 2, 3, 4,7};
    // vector<int> arr4 = {2, 3, 5, 6,7,9};
    // vector<int> ans2 = unionOfSortedArraysopt(arr3, arr4);
    // for (int x : ans2) {
    //     cout << x << " ";
    // }
    

    return 0;
}

// g++ intersectionofarray.cpp -o intersectionofarray.exe
// .\intersectionofarray.exe