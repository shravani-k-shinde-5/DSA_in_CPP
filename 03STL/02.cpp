#include <string.h>
#include <bits/stdc++.h>
using namespace std;

void stacks(){
  stack<int> s;
  s.push(2);
  s.push(5);
  s.push(10);

  cout<<s.top()<<endl;
  s.pop();
  cout<<s.top()<<endl;
  cout<<s.empty()<<endl;
  cout<<s.size()<<endl;

}

void Queue(){
  queue <int>q;
  q.push(7);
  q.push(8);
  q.push(6);

  q.back()+=5;
  cout<<q.back()<<endl;
  q.pop();
  cout<<q.front();


}
void PQ(){
  priority_queue<int>pq;
  
}
int main(){
  stacks();
  Queue();
}

//g++ 02.cpp -o 02.exe
//.\02.exe 