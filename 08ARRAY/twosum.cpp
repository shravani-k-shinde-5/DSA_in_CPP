#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int twosumbrute(vector<int>&vec,int tar){
  for(int i=0;i<vec.size();i++){
    for(int j=1;j<vec.size();j++){
      if(vec[j]+vec[i]==tar){
        return i,j;
      }
    }
  }
}
int twosumbetter(vector<int> & vec,int tar){
  map <int ,int>maps;
  for(int i=0;i<vec.size();i++){
    int a=vec[i];
    int more =a-tar;
    if(maps.find(more)!=maps.end()){
      return maps[more],maps[i];
    }
    maps[a]=i;

  }
  return -1;
}
vector<int> twoSum(vector<int>& nums, int target) {

    vector<pair<int,int>> arr;

    // Store value with original index
    for(int i = 0; i < nums.size(); i++) {
        arr.push_back({nums[i], i});
    }

    // Sort based on values
    sort(arr.begin(), arr.end());

    int left = 0;
    int right = arr.size() - 1;

    while(left < right) {

        int sum = arr[left].first + arr[right].first;

        if(sum == target) {
            return {arr[left].second, arr[right].second};
        }

        else if(sum < target) {
            left++;
        }

        else {
            right--;
        }
    }

    return {};
}
