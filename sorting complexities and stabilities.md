## Selection Sort:
 * Time Complexity: O(n2) as there are two nested loops.
 * Auxiliary Space: O(1)
     *The good thing about selection sort is it never makes more than O(n) swaps and can be useful when memory write is a costly operation.
 * Stability : The default implementation is not stable. However it can be made stable.
 * In Place : Yes, it does not require extra space.

## Bubble Sort:
 * Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.
 * Best Case Time Complexity: O(n). Best case occurs when array is already sorted.
 * Auxiliary Space: O(1)
 * Boundary Cases: Bubble sort takes minimum time (Order of n) when elements are already sorted.
 * Sorting In Place: Yes
 * Stable: Yes

## Insertion Sort:
 * Time Complexity: O(n*n)
 * Auxiliary Space: O(1)
 * Boundary Cases: Insertion sort takes maximum time to sort if elements are sorted in reverse order. And it takes minimum time (Order of n) when elements are already sorted.
 * Algorithmic Paradigm: Incremental Approach
 * Sorting In Place: Yes
 * Stable: Yes
 * Online: Yes

## Merge Sort: 
 * Time Complexity: Sorting arrays on different machines. Merge Sort is a recursive algorithm and time complexity can be expressed as following recurrence relation.
 * T(n) = 2T(n/2) + \Theta(n)
     * Time complexity of Merge Sort is \Theta(nLogn) in all 3 cases (worst, average and best) as merge sort always divides the array into two halves and take linear time to merge two halves.
 * Auxiliary Space: O(n)
 * Algorithmic Paradigm: Divide and Conquer
 * Sorting In Place: No in a typical implementation
 * Stable: Yes

## Quick Sort:
 * 


## Heap Sort: 
 * Heap sort is an in-place algorithm.
 * Its typical implementation is not stable, but can be made stable.
 * Time Complexity: Time complexity of heapify is O(Logn). Time complexity of createAndBuildHeap() is O(n) and overall time complexity of Heap Sort is O(nLogn).


## Counting Sort:
 * Time Complexity: O(n+k) where n is the number of elements in input array and k is the range of input.
 * Auxiliary Space: O(n+k)


## Sorting Algorithm used for sort() function in C++ :
 1. sort() – Introsort (Hybrid of Quicksort, Heap Sort and Insertion Sort)
    * Best Case Time Complexity- O(NlogN)
    * Average Case Time Complexity- O(NlogN)
    * Worse Case Time Complexity- O(NlogN)
    * Auxiliary Space- O(logN)
    * Stable- No
    * Adaptive- No

 2. stable_sort() – Mergesort
    * Best Case Time Complexity- O(NlogN)
    * Average Case Time Complexity- O(NlogN)
    * Worse Case Time Complexity- O(NlogN)
    * Auxiliary Space- O(N)
    * Stable- Yes
    * Adaptive- Yes


### Introsort: 
 * A hybrid sorting algorithm which uses three sorting algorithm to minimise the running time, Quicksort, Heapsort and Insertion Sort.
 * Introsort begins with quicksort and if the recursion depth goes more than a particular limit it switches to Heapsort to avoid Quicksort’s worse case O(N2) time complexity. It also uses insertion sort when the number of elements to sort is quite less.
 * Stable: Since Quicksort is also not stable so Introsort is also not stable.
 * Time Complexity
     * Best Case – O(N log N)
     * Average Case- O(N log N)
     * Worse Case- O(N log N)
 * Auxiliary Space: Just like quicksort, it may use O(log N) auxiliary recursion stack space.



### Some comparisons:
 #### 1. Why is Insertion Sort used (and not Bubble Sort, etc)?
  * Insertion sort offers following advantages.
  * It is a known and established fact that insertion sort is the most optimal comparison-based sorting algorithm for small arrays.
  * It has a good locality of reference.
  * It is an adaptive sorting algorithm, i.e- it outperforms all the other algorithms if the array elements are partially sorted.

 #### 2. Why is Heapsort used (and not Mergesort etc)?
  * This is solely because of memory requirements. Merge sort requires O(N) space whereas Heapsort is an in-place O(1) space algorithm.

 #### 3. Why is Heapsort not used in place of Quicksort when the partition size is under the limit ?
  * This question is same as why Quicksort generally outperforms Heapsort ?
      * The answer is, although Heapsort also being O(N log N) in average as well as worse case and O(1) space also, we still don’t use it when the partition size is under the limit because the extra hidden constant factor in Heapsort is quite larger than that of Quicksort.

 #### 4. Why Quick Sort is preferred over MergeSort for sorting Arrays?
  * Quick Sort in its general form is an in-place sort (i.e. it doesn’t require any extra storage) whereas merge sort requires O(N) extra storage, N denoting the array size which may be quite expensive. Allocating and de-allocating the extra space used for merge sort increases the running time of the algorithm. Comparing average complexity we find that both type of sorts have O(NlogN) average complexity but the constants differ. For arrays, merge sort loses due to the use of extra O(N) storage space.
