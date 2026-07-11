#include <iostream>
#include <vector>
using namespace std;


void bubble_sort(vector<int> &arr) {
    int n = arr.size();
    

    for (int i = n - 1; i >= 1; i--) {
        int swap1=0;
        
        for (int j = 0; j < i; j++) {
            if (arr[j + 1] < arr[j]) {
                swap(arr[j + 1], arr[j]);
                swap1=1;
            }
        }
        if(swap1==0){ /// time complexity =O(n) best case complexity
            break;
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubble_sort(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// g++ bubblesort.cpp -o bubblesort.exe
// .\bubblesort.exe




/*Bubble Sort Interview Questions and Answers

1. Why should the swapped variable be declared inside the outer loop?
Answer:

The swapped variable is used to check whether any swapping happened during the current pass of Bubble Sort.
It should be initialized again at the beginning of every outer loop iteration because each pass is independent.
If we declare it outside the loop and do not reset it, then once a swap happens in an earlier pass, the variable will remain true for all future passes, and the optimization will not work properly.
Example:
for(int i = n-1; i >= 1; i--)
{
    bool swapped = false;

    // inner loop
}
If no swaps happen in a complete pass, it means the array is already sorted, so we can stop the algorithm early.


2. Why use bool swapped instead of int swapped?
Answer:
The variable swapped represents only two possible states:
true → a swap occurred
false → no swap occurred
Therefore, the boolean data type is more meaningful and improves code readability.

Example:
bool swapped = false;
is preferred over:
int swapped = 0;
because it clearly represents a yes/no condition.


3. What is the correct outer loop condition in Bubble Sort?
Answer:
The correct outer loop condition is:
for(int i = n-1; i >= 1; i--)
Explanation:
The loop must execute until i = 1 because we still need to compare the first two elements:
arr[0] and arr[1]
If we use: i > 1
then the final comparison will never happen, and the array may remain unsorted.


4. Why is Bubble Sort called Bubble Sort?
Answer:
Bubble Sort is called Bubble Sort because during every pass, the largest element moves toward the end of the array, similar to how bubbles rise to the surface of water.
Example:
Initial array:
5 1 4 2 8
After the first pass:
1 4 2 5 8
The largest element 8 reaches its correct position at the end.

5. Why does the last element become sorted after the first pass?
Answer:
In Bubble Sort, adjacent elements are compared.
If the left element is greater than the right element, they are swapped.
Because larger elements continuously move toward the right side, the maximum element reaches the last position after the first complete pass.

Example:
5 4 3 2 1

After first pass:
4 3 2 1 5
The largest element 5 is now fixed.


6. Why does the inner loop use j < i instead of j < n-1?
Answer:
After every pass of Bubble Sort, one largest element reaches its correct position at the end of the array.
Those elements are already sorted, so comparing them again is unnecessary.
Therefore, the inner loop size decreases after every pass.

Example:

First pass:
[1,4,2,5,8]

8 is fixed, so the next pass does not need to compare with 8.
This reduces unnecessary comparisons.


7. What is the time complexity of Bubble Sort?
Best Case Complexity:
O(n)
Explanation:
The best case occurs when the array is already sorted.

Example:
1 2 3 4 5

The algorithm performs one pass, finds no swaps, and stops because of the swapped optimization.
Average Case Complexity:
O(n²)
Explanation:
For random arrays, Bubble Sort performs multiple comparisons and swaps, resulting in quadratic complexity.
Worst Case Complexity:
O(n²)
Explanation:
The worst case occurs when the array is sorted in reverse order.

Example:

5 4 3 2 1

Every element needs to be moved, causing maximum comparisons and swaps.


8. What is the space complexity of Bubble Sort?
Answer:
Bubble Sort has:
O(1)
auxiliary space complexity.

Explanation:
It does not require any extra array or data structure.
It only uses a few variables:
int n;
bool swapped;
Therefore, Bubble Sort is an in-place sorting algorithm.


9. Is Bubble Sort stable?
Answer:
Yes, Bubble Sort is a stable sorting algorithm.

Explanation:
A stable sorting algorithm maintains the relative order of equal elements.

Example:
Before sorting:
5a 3 5b 2
After sorting:
2 3 5a 5b
The order of 5a and 5b remains unchanged.
Bubble Sort is stable because it swaps elements only when:
arr[j+1] < arr[j]
Equal elements are not swapped.


10. Is Bubble Sort an in-place algorithm?
Answer:
Yes, Bubble Sort is an in-place sorting algorithm.

Explanation:
It modifies the original array directly instead of creating another array.

Example:
swap(arr[j], arr[j+1]);
Only constant extra memory is used.
Space complexity:O(1)


11. Why is Bubble Sort rarely used in real-world applications?
Answer:

Bubble Sort is rarely used for large datasets because its average and worst-case time complexity is:

O(n²)

For large input sizes, the number of comparisons and swaps becomes very high.

More efficient sorting algorithms are preferred:

Merge Sort → O(n log n)
Quick Sort → O(n log n) average case
Heap Sort → O(n log n)
Bubble Sort is mainly used for learning purposes and for very small datasets.


12. Is optimized Bubble Sort adaptive?
Answer:

Yes, optimized Bubble Sort is adaptive.
Explanation:
An adaptive algorithm takes advantage of already sorted or partially sorted data.
The optimization:

if(swapped == false)
{
    break;
}

allows Bubble Sort to stop early if no swaps occur.

Example:

Sorted array:

1 2 3 4 5
Only one pass is required.



13. Can Bubble Sort be implemented recursively?
Answer:

Yes, Bubble Sort can be implemented recursively.

Approach:
Perform one complete pass of Bubble Sort.
The largest element reaches its correct position.
Recursively sort the remaining n-1 elements.

Concept:

BubbleSort(n)

    One pass

    BubbleSort(n-1)

    
14. What is the complexity of recursive Bubble Sort?
Time Complexity:

Same as iterative Bubble Sort:

Best Case: O(n)
Average Case: O(n²)
Worst Case: O(n²)
Space Complexity:

Recursive Bubble Sort requires additional memory because of recursion calls.

Iterative version:

O(1)

Recursive version:

O(n)

because of the recursion stack.*/
