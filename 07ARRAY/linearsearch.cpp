#include <iostream>
#include <vector>
using namespace std;

int linearsearch(vector<int>& arr, int tar) {
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        if (arr[i] == tar) {
            return i;
        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"enter target :";
    int tar;
    cin >> tar;

    cout << linearsearch(arr, tar);

    return 0;
}
//g++ linearsearch.cpp -o linearsearch.exe
// .\linearsearch.exe