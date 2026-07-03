#include <iostream>
using namespace std;

//Sum of first n numbers(parameterized)
void summation(int i,int sum){
  if(i<1){
    cout<<sum;
    return ; 
  }
  sum=sum+i;
  summation(i-1,sum);
}
int summation1(int i){
  if(i==0){
    
    return 0; 
  }
  
  return i +summation1(i-1);
}
int summation1(int i){
  if(i==1){
    
    return 1; 
  }
  
  return i *summation1(i-1);
}
int main(){
  summation(5,0);
}
//g++ 02Basic_pbs.cpp -o 02Basic_pbs.exe
// .\02Basic_pbs.exe