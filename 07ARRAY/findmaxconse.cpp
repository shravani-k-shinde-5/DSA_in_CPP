#include <iostream>
#include <vector>
using namespace std;


int maxconsecutive(vector<int>& arr) {
    int maxc = 0;
    int seq = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            seq++;
            if (seq > maxc) {
                maxc = seq;
            }
        }
        else {
            seq = 0;
        }
    }

    return maxc;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << maxconsecutive(arr);

    return 0;
}
  
// g++ findmaxconse.cpp -o findmaxconse.exe
// .\findmaxconse.exe