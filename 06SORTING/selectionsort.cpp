#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> &arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selection_sort(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// g++ selectionsort.cpp -o selectionsort.exe
// .\selectionsort.exe


/*
Q1. What is Selection Sort?

Answer:

Selection Sort is a comparison-based sorting algorithm. It works by dividing the array into two parts: a sorted part and an unsorted part. In each pass, it finds the smallest element from the unsorted part and places it at the beginning of the unsorted part by swapping.

Q2. Explain the idea behind Selection Sort.

Answer:

The main idea of Selection Sort is to repeatedly find the smallest element from the unsorted part of the array and place it in its correct position.

For example:

64 25 12 22 11

Pass 1:
Find smallest = 11
Swap with 64

11 25 12 22 64

Pass 2:
Find smallest = 12
Swap with 25

11 12 25 22 64

This process continues until the entire array is sorted.

Q3. Why do we write minIndex = i?

Answer:

The variable i represents the first element of the unsorted part of the array. We initially assume that this element is the smallest and store its index in minIndex. Then, we compare it with the remaining unsorted elements. If a smaller element is found, we update minIndex.

Q4. Why don't we write minIndex = 0?

Answer:

After every pass, the elements before index i are already sorted. If we always start with minIndex = 0, we will unnecessarily consider the sorted part again. Therefore, we initialize minIndex = i so that the search starts only from the unsorted part.

Q5. Why does the inner loop start from j = i + 1?

Answer:

Since we already assume that vec[i] is the smallest element, there is no need to compare it with itself again. Therefore, the inner loop starts from i + 1 and checks only the remaining unsorted elements. This avoids unnecessary comparisons.

Q6. Why do we store the index (minIndex) instead of the minimum value?

Answer:

We store the index because after finding the smallest element, we need its position to perform the swap.

For example:

64 25 12 22 11

Smallest value = 11
Index = 4

We perform:

swap(vec[0], vec[4]);

If we stored only the value 11, we would not know where it is located in the array.

Q7. Why does the outer loop run only until n - 1?

Answer:

After placing the first n - 1 elements in their correct positions, the last remaining element is automatically in the correct position. Therefore, running one more iteration is unnecessary.

Q8. What is the Time Complexity of Selection Sort?

Answer:

The outer loop runs n - 1 times.

The inner loop performs:

n - 1
n - 2
n - 3
...
1

Total comparisons:

(n-1) + (n-2) + ... + 1
= n(n-1)/2

Therefore,

Best Case = O(n²)
Average Case = O(n²)
Worst Case = O(n²)

Selection Sort always searches for the minimum element, even if the array is already sorted.

Q9. What is the Space Complexity of Selection Sort?

Answer:

The space complexity is O(1) because Selection Sort is an in-place sorting algorithm. It uses only a constant number of extra variables such as i, j, and minIndex. It does not create any additional array.

Q10. Is Selection Sort an In-place Sorting Algorithm?

Answer:

Yes.

Selection Sort modifies the original array by swapping elements within the same array. It does not require extra memory proportional to the input size. Therefore, it is an in-place sorting algorithm.

Q11. Is Selection Sort Stable?

Answer:

No.

Selection Sort is an unstable sorting algorithm because swapping can change the relative order of equal elements.

Example:

Before sorting:

4a 5 4b 3

After Selection Sort:

3 5 4b 4a

Originally, 4a came before 4b, but after sorting, their order changed. Therefore, Selection Sort is unstable.

Q12. Can Selection Sort be made Stable?

Answer:

Yes.

Instead of swapping the minimum element with the current element, we can remove the minimum element, shift all the elements between i and minIndex one position to the right, and insert the minimum element at position i.

This preserves the relative order of equal elements and makes Selection Sort stable.

Q13. Is Selection Sort Adaptive?

Answer:

No.

An adaptive sorting algorithm takes advantage of an already sorted or nearly sorted array.

Selection Sort always performs the same number of comparisons regardless of the input. Therefore, it is not adaptive.

Q14. What are the advantages of Selection Sort?

Answer:

Easy to understand and implement.
Uses only O(1) extra space.
Performs fewer swaps (maximum n - 1 swaps).
Suitable when memory is limited or swapping is expensive.

Q15. What are the disadvantages of Selection Sort?

Answer:

Time complexity is O(n²) in all cases.
Not suitable for large datasets.
Not stable in its standard implementation.
Not adaptive because it cannot detect an already sorted array.


Q16. Bubble Sort vs Selection Sort

Answer:

Bubble Sort	Selection Sort
Swaps adjacent elements	Finds the minimum element and swaps once
Stable	Unstable
Adaptive (Optimized Bubble Sort)	Not Adaptive
Best Case = O(n)	Best Case = O(n²)
Performs more swaps	Performs fewer swaps


Q17. Why does Selection Sort perform fewer swaps?

Answer:

Selection Sort performs at most one swap in each pass after finding the minimum element.

Therefore, the maximum number of swaps is:

n - 1

Bubble Sort, on the other hand, may perform many swaps during a single pass.*/
