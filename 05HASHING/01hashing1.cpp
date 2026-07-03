#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout<<"Enter the number: ";
        cin >> arr[i];
    };
    int hash[100]={0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }


    
    cout<<"the number you wnants to search for: ";
    int x;
    cin >> x;
    while(x--){
        int number;
        cout<<"Enter the number to search: ";
        cin >> number;
        cout << hash[number] << endl;
    }
    

    return 0;
}

//g++ 01hashing1.cpp -o 01hashing1.exe
 // .\01hashing1.exe