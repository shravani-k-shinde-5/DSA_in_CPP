#include <bits/stdc++.h>
using namespace std;

// Brute Force
vector<int> unionofsortedarr(vector<int>& arr1, vector<int>& arr2) {
    set<int> st;

    for (int i = 0; i < arr1.size(); i++) {
        st.insert(arr1[i]);
    }

    for (int i = 0; i < arr2.size(); i++) {
        st.insert(arr2[i]);
    }

    vector<int> vec;

    for (auto it : st) {
        vec.push_back(it);
    }

    return vec;
}
//optimum

vector<int> unionOfSortedArraysopt(vector<int> &arr1, vector<int> &arr2) {
    int n = arr1.size();
    int m = arr2.size();

    int i = 0, j = 0;
    vector<int> ans;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            if (ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);
            i++;
        }
        else if (arr2[j] < arr1[i]) {
            if (ans.empty() || ans.back() != arr2[j])
                ans.push_back(arr2[j]);
            j++;
        }
        else { // arr1[i] == arr2[j]
            if (ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    while (i < n) {
        if (ans.empty() || ans.back() != arr1[i])
            ans.push_back(arr1[i]);
        i++;
    }

    while (j < m) {
        if (ans.empty() || ans.back() != arr2[j])
            ans.push_back(arr2[j]);
        j++;
    }

    return ans;
}

int main() {
    vector<int> arr1 = {1, 2, 2, 3, 4};
    vector<int> arr2 = {2, 3, 5, 6};

    vector<int> ans = unionofsortedarr(arr1, arr2);

    for (int x : ans) {
        cout << x << " "<<endl;
    }
    vector<int> arr3 = {1, 2, 2, 3, 4,7};
    vector<int> arr4 = {2, 3, 5, 6,7,9};
    vector<int> ans2 = unionOfSortedArraysopt(arr3, arr4);
    for (int x : ans2) {
        cout << x << " ";
    }
    

    return 0;
}

// g++ unionofsortedarray.cpp -o unionofsortedarray.exe
// .\unionofsortedarray.exe