# Implementations

## Chapter 2: Getting Started

### Insertion Sort

* [Insertion Sort](https://github.com/kyscg/PaperbackAlgorithms/blob/master/IntroToAlgorithms/Implementations/insertionSort.cpp): C++ implementation of the [Insertion Sort Algorithm](https://en.wikipedia.org/wiki/Insertion_sort)

* [Linear Search](https://github.com/kyscg/PaperbackAlgorithms/blob/master/IntroToAlgorithms/Implementations/linearSearch.cpp): C++ implementation of the [Linear Search Algorithm](https://en.wikipedia.org/wiki/Linear_search). Returns the index if the element is found and "NIL" if not.

* [Add binary numbers](https://github.com/kyscg/PaperbackAlgorithms/blob/master/IntroToAlgorithms/Implementations/binaryAddition.cpp): Add binary representations of two numbers A and B. Returns C : C = A + B.

### Analyzing Algorithms

* [Selection Sort](https://github.com/kyscg/PaperbackAlgorithms/blob/master/IntroToAlgorithms/Implementations/selectionSort.cpp): C++ implementation of the [Selection Sort Algorithm](https://en.wikipedia.org/wiki/Selection_sort)

### Designing Algorithms

* [Merge Sort](https://github.com/kyscg/PaperbackAlgorithms/blob/master/IntroToAlgorithms/Implementations/mergeSort.cpp): C++ implementation of the [Merge Sort Algorithm](https://en.wikipedia.org/wiki/Merge_sort)

* [Binary Search](https://github.com/kyscg/PaperbackAlgorithms/blob/master/IntroToAlgorithms/Implementations/binarySearch.cpp): C++ implementation of the [Binary Search Algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm)

* [Find whether sum exists](https://github.com/kyscg/PaperbackAlgorithms/blob/master/IntroToAlgorithms/Implementations/findSum.cpp): Given an array and a sum, the algorithm checks whether there are two elements such that they add up to the sum. *An extension could be to find two or more elements that add up to a sum*.

### Problems

* [Bubble Sort](https://github.com/kyscg/PaperbackAlgorithms/blob/master/IntroToAlgorithms/Implementations/bubbleSort.cpp): C++ implementation of the [Bubble Sort Algorithm](https://en.wikipedia.org/wiki/Bubble_sort)

* [Horner's Rule](https://github.com/kyscg/PaperbackAlgorithms/blob/master/IntroToAlgorithms/Implementations/hornersRule.cpp): C++ implementation of [Horner's Rule for polynomial evaluation](https://en.wikipedia.org/wiki/Horner%27s_method).

* [Counting Inversions in $\Theta(n\lg{n})$ time](https://github.com/kyscg/PaperbackAlgorithms/blob/master/IntroToAlgorithms/Implementations/inversionCount.cpp): C++ implementation of an algorithm that counts the number of [inversions](https://en.wikipedia.org/wiki/Inversion_discrete_mathematics) in an array by slightly modifying merge sort.


## Chapter 4: Divide and Conquer

### The maximum-subarray problem

* [Find the Maximum Subarray, Brute Force](https://github.com/kyscg/PaperbackAlgorithms/blob/master/IntroToAlgorithms/Implementations/findMaxSubarrayBruteForce.cpp): C++ implementation of a naive algorithm to find the sum of contiguous subarray of numbers which has the largest sum. Uses two for loops to go through every pair and updates the sum.

* [Find the Maximum Subarray, Divide and Conquer](https://github.com/kyscg/PaperbackAlgorithms/blob/master/IntroToAlgorithms/Implementations/findMaxSubarrayDivideConquer.py): Python implementation of a divide and conquer approach to solve the above problem. Python was preferred because returning tuples is easier.

* [Find the Maximum Subarray, Linear Time Complexity](https://github.com/kyscg/PaperbackAlgorithms/blob/master/IntroToAlgorithms/Implementations/findMaxSubarrayLinear.cpp): C++ implementation of a linear time complex algorithm to find the sum of contiguous subarray of numbers which has the largest sum. Uses two for loops to go through every pair and updates the sum. **The important thing to note is that everytime we see a new number, it either adds to the subarray or begins a new one.**

### Strassen’s algorithm for matrix multiplication

* [Square Matrix Multiplication, Brute Force](https://github.com/kyscg/PaperbackAlgorithms/blob/master/IntroToAlgorithms/Implementations/squareMatrixMultiplyBruteForce.py): Python implementation of a naive algorithm to compute matrix products. Python was preferred because test case generation is much easier, especially with matrices.

* [Square Matrix Multiplication, Divide and Conquer](https://github.com/kyscg/PaperbackAlgorithms/blob/master/IntroToAlgorithms/Implementations/squareMatrixMultiplyBruteForce.py): Python implementation of a recursive algorithm to compute matrix products. Not much improvement observed compared to the previous approach.

* [Square Matrix Multiplication, Strassen's Algorithm](https://github.com/kyscg/PaperbackAlgorithms/blob/master/IntroToAlgorithms/Implementations/squareMatrixMultiplyBruteForce.py): Python implementation of a slight improvement(not really, see notes) over the previous approaches to compute matrix products.

## Chapter 5: Probabilistic Analysis and Randomized Algorithms

### Problems

* [Random Search](https://github.com/kyscg/PaperbackAlgorithms/blob/master/IntroToAlgorithms/Implementations/randomSearch.cpp): C++ implementation of the [Random Search Algorithm](https://en.wikipedia.org/wiki/Random_search)
