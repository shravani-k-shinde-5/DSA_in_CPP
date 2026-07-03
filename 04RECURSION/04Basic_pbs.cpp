#include <iostream>
using namespace std;

int fib(int n){
  if (n==0|| n==1)
  {
    return n;
  };
  return fib(n-1)+fib(n-2);
}

int main(){
  cout<<fib(4)<<endl;

}

//g++ 04Basic_pbs.cpp -o 04Basic_pbs.exe
 // .\04Basic_pbs.exe