#include <iostream>
#include <vector>
using namespace std;

// Brute force approch
void rotatebyone(vector<int> &arr){
  int n = arr.size();
  int temp=arr[0];
  for (int i=1;i<n;i++){
    arr[i-1]=arr[i];
  }
  arr[n-1]=temp;
}


int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rotatebyone(arr);
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";

    }



    return 0;
}

//g++ rotatebyone.cpp -o rotatebyone.exe
// .\rotatebyone.exe