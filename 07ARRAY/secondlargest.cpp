#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void second_element(vector<int> &arr) {
    int n = arr.size();

    int largest = INT_MIN;
    int slargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > slargest && arr[i] != largest) {
            slargest = arr[i];
        }
    }

    if (slargest == INT_MIN)
        cout << "No second largest element exists." << endl;
    else
        cout << "The second largest element is: " << slargest << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    second_element(arr);

    return 0;
}
// g++ secondlargest.cpp -o secondlargest.exe
// .\secondlargest.exe


"To find the second largest element efficiently, we maintain two variables: largest and second largest. While traversing the array once, if we find a new largest element, we update the second largest with the previous largest value. Otherwise, if the current element is smaller than the largest but greater than the second largest, we update the second largest. This approach finds the result in O(n) time and O(1) space."
