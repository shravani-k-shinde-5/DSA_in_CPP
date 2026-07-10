#include <iostream>
#include <vector>
using namespace std;

//brute force
int missingelement(vector<int>& arr) {
    int n = arr.size();
    for(int i=1;i<arr.size();i++){
      bool flag=0;
      for(int j=0;j<arr.size();j++){
        if(arr[j]==i){
          flag=1;
        }
      }
      if(flag==0){
        return i;
      }
    }

    

   
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    

    cout << missingelement(arr);

    return 0;
}
//g++ missingnumber.cpp -o missingnumber.exe
// .\missingnumber.exe