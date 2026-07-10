#include <bits/stdc++.h>
using namespace std;
// intersection of sorted array
// Brute Force
vector<int> intersectionofarr(vector<int>& arr1, vector<int>& arr2) {
    vector<int> ans;
    vector<int> v(arr2.size(), 0);

    for (int i = 0; i < arr1.size(); i++) {
        for (int j = 0; j < arr2.size(); j++) {

            if (arr1[i] == arr2[j] && v[j] == 0) {
                ans.push_back(arr1[i]);
                v[j] = 1;
                break;
            }

            if (arr1[i] < arr2[j]) {
                break;
            }
        }
    }

    return ans;
};
//optimum
vector<int> intersectionofarropt(vector<int>& arr1, vector<int>& arr2) {
    vector<int> ans;
    int i=0;
    int j=0;
    while(i<arr1.size() && j<arr2.size()){
      if(arr1[i]<arr2[j]){
        i++;
      }
      else if(arr1[i]>arr2[j]){
        j++;

      }
      else{
        ans.push_back(arr1[i]);
        i++;
        j++;
      }
    }

    

    return ans;
};

int main() {
    vector<int> arr1 = {1, 2, 2, 3, 4};
    vector<int> arr2 = {2, 3, 5, 6};

    vector<int> ans = intersectionofarr(arr1, arr2);

    for (int x : ans) {
        cout << x << " " << endl;
    }

     vector<int> arr3 = {1, 2, 2, 3, 4,7};
     vector<int> arr4 = {2, 3, 5, 6,7,9};
    vector<int> ans2 = intersectionofarropt(arr3, arr4);
   for (int x : ans2) {
        cout << x << " ";
    }

    
    return 0;
}

// g++ intersectionofarray.cpp -o intersectionofarray.exe
// .\intersectionofarray.exe