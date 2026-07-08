#include <iostream>
#include <vector>
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