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

int main() {
    vector<int> arr1 = {1, 2, 2, 3, 4};
    vector<int> arr2 = {2, 3, 5, 6};

    vector<int> ans = unionofsortedarr(arr1, arr2);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}