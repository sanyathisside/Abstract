#### Consider the problem to sort n distinct numbers. Any sorting algorithm must be able to distinguish between the n! permutations of these n numbers, since it must treat each permutation differently in order to sort it.

The number of yes/no decisions (= the number of bits) necessary to distiguish between the n! permutations is log2(n!); it is a lower bound for the complexity of any sorting algorithm. This lower bound is known as the information theoretic lower bound.

It is easy to see that we have

n! greater or equal (n/2)n/2.

Therefore,

log(n!)	 	greater or equal log((n/2)n/2)
 	 =  n/2 · log(n/2)
 	  element  Ω(n log(n)).
A sorting algorithm that is based on comparisons draws exactly 1 bit of information from each comparison (namely whether the two numbers compared are in order or not). Thus it needs at least log(n!) element Ω(n log(n)) comparisons to distinguish between the n! possible permutations of n distinct numbers. This means that Ω(n log(n)) is a lower bound for the time complexity of any sorting algorithm that is based on comparisons.

The sorting algorithms Heapsort und Mergesort have an upper bound of O(n log(n)) steps. Therefore, they are optimal since they attain the lower bound.

There are sorting algorithms that are not based on comparisons, e.g. Bucket Sort and Radix Sort. These algorithms draw more than 1 bit of information from each step. Therefore, the information theoretic lower bound is not likewise a lower bound for the time complexity of these algorithms. In fact, Bucket Sort and Radix Sort have a time complexity of O(n). However, these algorithms are not as general as comparison based algorithms since they rely on certain assumptions concerning the data to be sorted.
