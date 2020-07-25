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