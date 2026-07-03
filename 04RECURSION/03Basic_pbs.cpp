#include <iostream>
using namespace std;

// Reverse array using recursion (two-pointer approach)
void reverseeArray(int i, int n, int arr[]) {
    if (i >= n)
        return;

    swap(arr[i], arr[n - 1]);
    reverseeArray(i + 1, n - 1, arr);
}


//Revrese an array using recursion (one pointer approach)
void revArray(int i,int n,int arr[]){
  if(i>=n/2){
    return;
  }
  swap(arr[i],arr[n-i-1]);
  revArray(i+1,n,arr);
}

bool ispalindrome(int i,int n,string str){
  if(n/2==i){
    return true;
  }
  if (str[i]!=str[n-i-1]){
    return false;
  }
  return ispalindrome(i+1,n,str);
}
int main() {
    int arr[] = {4, 5, 6, 7, 8, 91, 10};

    // Function call
    reverseeArray(0, 7, arr);

    cout << "The reversed array is: ";
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " "<<endl;
    }

    int arr1[] = {14, 15, 16, 17, 18, 191, 10};
    revArray(0, 7, arr1); 
    for (int i = 0; i < 7; i++) {
        cout << arr1[i] << " "<<endl;
    }

    string str="madam";
    if(ispalindrome(0,str.length(),str)){
      cout<<"The string is palindrome";
    }
    else{
      cout<<"The string is not palindrome";
    }

    return 0;
}


//g++ 03Basic_pbs.cpp -o 03Basic_pbs.exe
 // .\03Basic_pbs.exe