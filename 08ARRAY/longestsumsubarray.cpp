#include <iostream>
#include <vector>
using namespace std;

//brute
void longestsubarray1(vector <int> &vec,int tar){
  int len=0;
  for(int i=0;i<vec.size();i++){
    int sum =0;
    for(int j=i;j<vec.size();j++){
      sum+=vec[j];
      if(sum==tar){
        len =max(len,j-i+1);
      }
    }
  }
  cout<<"the longest subarray "<<len;

}
///\optimal
int longestsubarray(vector<int> &vec, int k) {
    int left = 0, right = 0;
    int sum = 0;
    int len = 0;

    while (right < vec.size()) {
        sum += vec[right];

        while (sum > k && left <= right) {
            sum -= vec[left];
            left++;
        }

        if (sum == k) {
            len = max(len, right - left + 1);
        }

        right++;
    }

    return len;
}

int main(){
  vector <int> vec={1,2,4,5,1};
  longestsubarray1(vec,7);
  int len=longestsubarray(vec,7);
  cout<<endl;
  cout<<len;

}

// g++ longestsumsubarray.cpp -o longestsumsubarray.exe
//.\longestsumsubarray.exe