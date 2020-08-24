 * The problem of sorting can be viewed as following.
 * Input: A sequence of n numbers <a1, a2, . . . , an>.
 * Output: A permutation (reordering) <a'1, a'2, . . . , a'n> of the input sequence such that a'1 <= a'2 . . . . <= a'n.

n!  <= 2^x

 Taking Log on both sides.

      log2(n!)  <= x

 Since log2(n!)  = Θ(nLogn),  we can say

      x = Ω(nLog2n)

 * Any comparison based sorting algorithm must make at least nLog2n comparisons to sort the input array, and Heapsort and merge sort are asymptotically optimal comparison sorts.
