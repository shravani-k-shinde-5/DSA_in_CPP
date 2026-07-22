#include <bits/stdc++.h>
using namespace std;

int maximumprofit(vector<int>& vec) {
    if (vec.empty()) return 0;

    int mini = vec[0];
    int max_profit = 0;

    for (int i = 1; i < vec.size(); i++) {
        max_profit = max(max_profit, vec[i] - mini);
        mini = min(mini, vec[i]);
    }

    return max_profit;
}

int main() {
    vector<int> vec = {2,3,4,6,4,3,7,1};
    cout << "ANS " << maximumprofit(vec);
    return 0;
}
//g++ buyandsell.cpp -o buyandsell.exe  
//.\buyandsell.exe