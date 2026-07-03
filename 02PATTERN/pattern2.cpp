#include <iostream>
using namespace std;

void nutri(int n){
  for (int i=1;i<n;i++){
    for(int j=1;j<=i;j++){
      cout<<j;
    }
    cout<<endl;
  }
}
void numrtri(int n){
  for (int i=1;i<n;i++){
    for (int j=1;j<=i;j++){
      cout<<i;
    }
    cout<<endl;
  }
}
int main(){
  nutri(5);
  cout<<endl;
  numrtri(5);
}