#include <iostream>
using namespace std;

int main() {
    // Ascii of a =97
    // ascii of z=122
    //f-a =5

    string s = "fabaab";
    int q ;
    cin>>q;
    int hash[26]={0};
    for(int i=0;i<s.length();i++){
        hash[s[i]-'a']++;
        //hash[s[i]]++;
    }
    while(q--){
        char c;
        cin>>c;

        cout<<hash[c-'a']<<endl;
    }
    return 0;
}
//g++ 02hashing2.cpp -o 02hashing2.exe
 // .\02hashing2.exe