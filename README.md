# Bubleshort

<p>
Bubble sort has a worst-case and average complexity of О(n), where n is the number of items being sorted. Most practical sorting algorithms have substantially better worst-case or average complexity, often O(n log n). Even other О(n2) sorting algorithms, such as insertion sort, generally run faster than bubble sort, and are no more complex. Therefore, bubble sort is not a practical sorting algorithm.</p>
<p>
The only significant advantage that bubble sort has over most other algorithms, even quicksort, but not insertion sort, is that the ability to detect that the list is sorted efficiently is built into the algorithm. When the list is already sorted (best-case), the complexity of bubble sort is only O(n). By contrast, most other algorithms, even those with better average-case complexity, perform their entire sorting process on the set and thus are more complex. However, not only does insertion sort share this advantage, but it also performs better on a list that is substantially sorted (having a small number of inversions). Additionally, if this behavior is desired, it can be trivially added to any other algorithm by checking the list before the algorithm runs.

Bubble sort should be avoided in the case of large collections. It will not be efficient in the case of a reverse-ordered collection.
</p>

<img href="https://i.postimg.cc/Qdz3S2P7/descarga.png">
