#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int> &arr) {
    int n =arr.size();
    for(int i =0;i<n;i++){
      int j = i;
      while(j>0 && arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
      }
    }
}
void insertion_sort2(vector<int> &arr) {
    
    for(int i =1;i<arr.size();i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

    

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertion_sort(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}



// g++ insertion_sort.cpp -o insertion_sort.exe
// .\insertion_sort.exe
