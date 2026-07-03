#include <iostream>
using namespace std;
//print name 5 times
void namerec(int n){
  
  if(n==0){
    return;
  }
  cout<<"SHRAVANI"<<endl;
 
  namerec(n-1);

}
// print linearly from 1 to n
void printint(int i,int n){
  if(i>n){
    return;
  }
  cout<<i<<endl;
  i++;
  printint(i,n);

}
// print linearly from n to 1
void printintrev(int i,int n){
  if(i>n){
    return;
  }
  cout<<n<<endl;
  
  printintrev(i,n-1);

}

int main(){
  namerec(5);
  printint(3,9);
  cout<<"reverse pattern: :"<<endl;
  printintrev(3,9);
}

//  g++ 01Basic_pbs.cpp -o 01Basic_pbs.exe
// .\01Basic_pbs.exe