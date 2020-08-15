# Chapter 1: Introduction to Algorithm Design

## Robot Tour Optimization

* Problem statement for the Travelling Salesman Problem
    * Nearest Neighbour Heuristic (Why it doesn't work)
    * Closest Pair Heuristic (Why it doesn't work)
    * Brute Force Approach (Too slow)

* There is a fundamental difference between algorithms, which always produce a correct result, and heuristics, which may usually do a good job but without providing any guarantee.

## Selecting the Right Jobs

* Problem statement for the Movie Scheduling Problem
    * Earliest Job First (Why it fails)
    * Shortest Job First (Why it fails)
    * Exhaustive Scheduling (Too slow)

* Optimal Scheduling
 
    ```pascal
    while(I != 0)
        // Accept the job j from I with earliest
        // completion date.
        // Delete j, and any interval which intersects
        // j from I.
    ```

* Reasonable-looking algorithms can easily be incorrect. Algorithm correctness is a property that must be carefully demonstrated.

## Reasoning about Correctness

* The heart of any algorithm is an idea. If your idea is not clearly revealed when you express an algorithm, then you are using too low-level a notation to describe it.

* Problem specifications have two parts: (1) the set of allowed input instances, and (2) the required properties of the algorithm’s output. It is impossible to prove the correctness of an algorithm for a fuzzily-stated problem.

* An important and honorable technique in algorithm design is to narrow the set of allowable instances until there is a correct and efficient algorithm. For example, we can restrict a graph problem from general graphs down to trees, or a geometric problem from two dimensions down to one.

# Chapter 2: Algorithm Analysis

## Growth Rates and Dominance Relations

* All such algorithms take roughly the same time for $n=10.$
* Any algorithm with $n!$ running time becomes useless for $n\ge20.$
* Algorithms whose running time is $2^n$ have a greater operating range, but become impractical for $n>40.$
* Quadratic-time algorithms whose running time is $n^2$ remain usable up to about $n=10,000,$ but quickly deteriorate with larger inputs. They are likely to be hopeless for $n>1,000,000.$
* Linear-time and $n\lg{n}$ algorithms remain practical on inputs of one billion items.
* An $O(\lg{n})$ algorithm hardly breaks a sweat for any imaginable value of $n.$
* $n! \gg 2^n \gg n^3 \gg n^2 \gg n\lg{n} \gg n \gg \lg{n} \gg 1$

## Logarithms and their Applications

* Binary Search
* Trees
* Bits
* Multiplication (becomes addition in logarithms)
* Fast exponentiation ($a^n$ will require $O(\lg{n})$).
* Harmonic Numbers

Remember that the base of the logarithm doesn't really matter because of how good the function reduced number of computations.
