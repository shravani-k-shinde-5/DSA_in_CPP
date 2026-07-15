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


/*
1. What is Insertion Sort?

Answer:

Insertion Sort is a comparison-based sorting algorithm that divides the array into two parts: a sorted part and an unsorted part.

Initially, the first element is considered as the sorted part. In every iteration, we take one element from the unsorted part and insert it into its correct position in the sorted part by shifting larger elements towards the right.

It is an in-place and stable sorting algorithm.

2. Why is it called Insertion Sort?

Answer:

It is called Insertion Sort because, in every iteration, an element from the unsorted part is inserted into its correct position in the already sorted part of the array.

Before inserting the element, all larger elements in the sorted part are shifted one position to the right to make space for that element.

3. Why do we store the current element in a temporary variable (temp or key)?

Answer:

We store the current element in a temporary variable because while shifting larger elements towards the right, the original position of the current element gets overwritten.

By storing it in temp, we preserve the value and insert it later at its correct position after all necessary shifts are completed.

Example:

Array:

5 3 4

Store:

temp = 3

Shift:

5 5 4

Insert:

3 5 4

Without storing 3, its value would be lost.

4. Why do we shift elements instead of swapping them?

Answer:

We use shifting instead of swapping because shifting requires fewer write operations.

In the swap-based approach, moving an element requires multiple swaps, and every swap requires multiple assignments.

In the shifting approach:

We store the current element.
Shift all larger elements one position to the right.
Insert the element once.

Although both approaches have the same time complexity O(n²), the shifting approach is more efficient in practice because it performs fewer operations.

5. Why does the inner loop move backwards (j--)?

Answer:

The inner loop moves backwards because the left side of the current element is already sorted.

We start comparing from the element immediately before the current element and move towards the beginning of the array.

If an element is larger than the current element, we shift it one position to the right.

We continue moving left until we find an element smaller than or equal to the current element. Then we insert the element at that position.

6. Explain the best-case time complexity of Insertion Sort.

Answer:

The best case occurs when the array is already sorted.

Example:

1 2 3 4 5

For each element, we only compare it with the previous element.

The shifting loop does not execute because every element is already in its correct position.

Only the outer loop runs, which takes O(n) time.

Therefore:

Best Case Time Complexity = O(n)

7. Explain the worst-case time complexity of Insertion Sort.

Answer:

The worst case occurs when the array is sorted in reverse order.

Example:

5 4 3 2 1

Each new element has to be compared with all previous elements and shifted to the beginning.

The total number of operations becomes:

1 + 2 + 3 + ... + (n-1)

Therefore:

Worst Case Time Complexity = O(n²)

8. Why is Insertion Sort called adaptive?

Answer:

Insertion Sort is called adaptive because its performance depends on the existing order of elements in the input array.

If the array is already sorted or nearly sorted, fewer comparisons and shifts are required, making the algorithm faster.

For a sorted array:

1 2 3 4 5

No shifting is required, so the complexity becomes:

Best Case = O(n)

For reverse sorted data:

Worst Case = O(n²)

9. Is Insertion Sort stable?

Answer:

Yes, Insertion Sort is a stable sorting algorithm.

A stable sorting algorithm maintains the relative order of equal elements.

Insertion Sort is stable because it shifts only elements that are greater than the current element.

The condition used is:

arr[j] > temp

not:

arr[j] >= temp

When two elements are equal, they are not swapped or shifted, so their original order remains unchanged.

10. Is Insertion Sort in-place?

Answer:

Yes, Insertion Sort is an in-place sorting algorithm.

It sorts the array by modifying the original array itself and does not require any additional array.

It only uses a constant amount of extra memory for variables like:

temp
i
j

Therefore:

Space Complexity = O(1)

11. Difference between Selection Sort and Insertion Sort

Answer:

Selection Sort:

Finds the minimum element from the unsorted part.
Places it at the correct position using swapping.
Always performs O(n²) comparisons.
Not adaptive.
Usually unstable.

Insertion Sort:

Takes one element from the unsorted part.
Inserts it into the correct position in the sorted part.
Uses shifting instead of swapping.
Adaptive.
Stable.
Best case complexity is O(n).*/
