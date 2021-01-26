# 	Project 0x1E. C - Search Algorithms


## Resources:

* [search algorithm](https://intranet.hbtn.io/rltoken/ntNFhA9urmBxZfcn8gjsqw)

* [Space complexity (1)](https://intranet.hbtn.io/rltoken/pPScxisIQ0eOPBPXkjcEmg)

## Learning Objectives

###  What is a search algorithm
Is procedure used to locate specific data among a collection of data.


### What is a linear search
A linear search or sequential search is a method to find an element in a list that sequentially checks each element of the list until a match is found or the whole list has been searched.

A linear search runs in at worst linear time and makes at most *n* comparisons, where *n* is the length of the list. If each element is equally likely to be searched, then linear search has an average case of 
*n+1*.

Linear search is rarely practical because other search algorithms and schemes, such as the binary search algorithm and hash tables, allow significantly faster searching for all but short lists.

### What is a binary search
Bynary search also known as half-interval search or logarithmic search, is a search algorithm that finds the position of a target value within a sorted array. Binary search compares the target value to the middle element of the array. If they are not equal, the half in which the target cannot lie is eliminated and the search continues on the remaining half, again taking the middle element to compare to the target value, and repeating this until the target value is found. If the search ends with the remaining half being empty, the target is not in the array.

Binary search runs in logarithmic time in the worst case, making *O(log n)*  comparisons, where *n* is the number of elements in the array. Binary search is faster than linear search except for small arrays. 

If we want to compare standard sorting algorithms on the basis of space, then Auxiliary Space would be a better criteria than Space Complexity. Merge Sort uses *O(n)* auxiliary space, Insertion sort and Heap Sort use *O(1)* auxiliary space. Space complexity of all these sorting algorithms is *O(n)* though. 

* *O(1)*  constant complexity  takes the same amount of space regardless of the input size
* *O(log n)*  logarithmic complexity  takes space proportional to the log of the input size
* *O(n*)  linear complexity  takes space directly proportional to the input size
* *O(n log n)*  log-linear/quasilinear complexity  also called linearithmic, its space complexity grows proportionally to the input size and a logarithmic factor
* *O(n^2)*  square/polynomial complexity  space complexity grows proportionally to the square of the input size
