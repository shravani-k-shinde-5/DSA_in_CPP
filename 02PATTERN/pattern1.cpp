#include <iostream>
using namespace std;


void triangel(int n){
  for (int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}

void revtriangle(int n){
  for (int i=0;i<n;i++){
    for(int j=0;j<=(n-i);j++){
      cout<<"*";

    }
    cout<<endl;
  }
}
int main(){
  for (int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      cout<<"*";
    }
    cout<<endl;

  

  }
  triangel(4);
  revtriangle(6);
}