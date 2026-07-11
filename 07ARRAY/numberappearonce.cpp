#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//brute
int oneappear1(vector<int>& arr)
{
    for(int i=0;i<arr.size();i++)
    {
        int cnt=0;

        for(int j=0;j<arr.size();j++)
        {
            if(arr[j]==arr[i])
            {
                cnt++;
            }
        }

        if(cnt==1)
        {
            return arr[i];
        }
    }

    return -1;
}
//better
int appear1better(vector<int>&arr){
  unordered_map<int,int> mp;

for(int x : arr)
    mp[x]++;

for(auto x : mp)
{
    if(x.second==1)
        return x.first;
}
};
int oneappear(vector<int>& arr)
{
    int ans = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        ans ^= arr[i];
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << oneappear1(arr)<<endl;
    cout<<appear1better(arr)<<endl;
    cout<<oneappear(arr)<<endl;


    return 0;
}
  
// g++ numberappearonce.cpp -o numberappearonce.exe
// .\numberappearonce.exe