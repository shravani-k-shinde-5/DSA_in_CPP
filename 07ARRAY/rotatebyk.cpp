#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// Brute force approch
void rotatebyk(vector<int> &arr,int k){
  int n = arr.size();
  k = k % n; // Handle cases where k is larger than n
  int temp[k];
  for(int i=0;i<k;i++){
    temp[i]=arr[i];

    
  };
  for(int i=k;i<n;i++){
    arr[i-k]=arr[i];

  };
  for(int i=n-k;i<n;i++){
    arr[i]=temp[i-(n-k)];
  }
}
//optimal approch


void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0) return;

    k = k % n;  

    reverse(nums.begin(), nums.end());


    reverse(nums.begin(), nums.begin() + k);

    
    reverse(nums.begin() + k, nums.end());

        
    };
int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rotatebyk(arr,3);
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";

    }



    return 0;
}

//g++ rotatebyk.cpp -o rotatebyk.exe
// .\rotatebyk.exe