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
///better
/// 
int missingelement1(vector<int>& arr) {
    int N = arr.size() + 1;      // Original range is 1 to N

    vector<int> hash(N + 1, 0);

    // Mark the numbers present
    for (int i = 0; i < arr.size(); i++) {
        hash[arr[i]] = 1;
    }

    // Find the missing number
    for (int i = 1; i <= N; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }

    return -1;
}
//optimal
int missingelement2(vector<int>& arr) {
    int n = arr.size() + 1;

    int sum = (n * (n + 1)) / 2;
    int sum1 = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum1 += arr[i];
    }

    return sum - sum1;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    

    cout << missingelement(arr)<<endl;
    cout<<missingelement1(arr)<<endl;
    cout<<missingelement2(arr)<<endl;

    return 0;
}
//g++ missingnumber.cpp -o missingnumber.exe
// .\missingnumber.exe