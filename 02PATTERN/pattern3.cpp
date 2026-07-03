#include <iostream>
using namespace std;

void pyrmid_pat(int n) {
    for(int i = 0; i < n; i++) {

        // spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // increasing numbers
        for(int j = 1; j <= i + 1; j++) {
            cout << j;
        }

        // decreasing numbers
        for(int j = i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }
}
void pyrmids_pat(int n) {
    for(int i = 0; i < n; i++) {

        // spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // increasing numbers
        for(int j = 1; j <= i + 1; j++) {
            cout << "*";
        }

        // decreasing numbers
        for(int j = i; j >= 1; j--) {
            cout <<"*";
        }

        cout << endl;
    }
}

void inv_py_trianglel(int n){
  for (int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      cout<<" ";
    }
    for (int j=0;j<n-i;j++){
      cout<<"*";
    }
    for(int j=0;j<n-i-1;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}


void khacha(int n){
  for (int i=1; i<2*n; i++){
    if (i<=n){
      for (int j=1; j<=i; j++){
        cout<<"*";
      }
    }
    else {
      for(int j=1; j<=2*n-i; j++){
        cout<<"*";
      }
    }
    cout<<endl;
  }
}
void zero_one(int n){
  for(int i =0;i<n;i++){
    for(int j=0;j<=i;j++){
      if((i+j)%2==0){
        cout<<"1";
      }
      else{
        cout<<"0";
      }
    }
    cout<<endl;
  }
}
void khacha2(int n){
  int spaces =2*(n-1);
  for(int i=1;i<=n;i++){
    
    for(int j=1;j<=i;j++){
      cout<<j;
    }
    for(int j=1;j<=spaces;j++){
      cout<<" ";
    }
    for (int j=i;j>=1;j--){
      cout<<j;
    }
    cout<<endl;
    spaces-=2;
  }
}

void sum_halftri(int n){
  int num=1;
  for (int i=1;i<=n;i++){
    for(int j=0;j<i;j++){
      cout<<num;
      num++;
    }
    cout<<endl;
    
  }
}
int main() {
    pyrmid_pat(5);
    pyrmids_pat(5);
    inv_py_trianglel(5);
    khacha(5);
    zero_one(5);
    khacha2(5);
    sum_halftri(5);
    return 0;
}
// g++ pattern3.cpp -o pattern3.exe
// .\pattern3.exe