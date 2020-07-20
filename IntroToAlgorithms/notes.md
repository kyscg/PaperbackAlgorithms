# Chapter 1: The Role of Algorithms in Computing

## Algorithms

* Correct Algorithms: for every input instance, they halt with the correct answer. As opposed to incorrect algorithms that don't necessarily halt at the right answer or halt with the wrong answer.

* Usual measure of efficiency is speed.

# Chapter 2: Getting Started

## Insertion Sort

* We must show three things about loop invariants:
    * Initialization
    * Maintenance
    * Termination

## Analyzing Algorithms

* For most analysis, we'll assume a generic one-processor, random-access machine (RAM) model of computation as our implementation technology.

* Instructions are executed one after the other, without any concurrent ops.

* In RAM model, instructions taking constant time are: 
    * Arithmetic(add, subtract, multiply, divide, remainder, floor, ceiling)
    * Data movement(load, store, copy)
    * Control(conditional and unconditional branch, subroutine call and return)

# Chapter 4: Divide and Conquer

## Strassen’s algorithm for matrix multiplication

From a practical point of view, Strassen’s algorithm is often not the method of choice for matrix multiplication, for four reasons:

1. The constant factor hidden in the $\Theta(n^{\lg7})$ running time of Strassen’s algorithm is larger than the constant factor in the $\Theta(n^3)$-time `SQUARE-MATRIX-MULTIPLY` procedure.

2. When the matrices are sparse, methods tailored for sparse matrices are faster.

3. Strassen’s algorithm is not quite as numerically stable as `SQUARE-MATRIX-MULTIPLY`. In other words, because of the limited precision of computer arithmetic on noninteger values, larger errors accumulate in Strassen’s algorithm than in `SQUARE-MATRIX-MULTIPLY`.

4. The submatrices formed at the levels of recursion consume space.

## The master method for solving recurrences

Let $a\ge1$ and $b>1$ be constants, let $f(n)$ be a function, and let $T(n)$ be defined on the nonnegative integers by the recurrence $$T(n)=aT(n/b)+f(n),$$ where we interpret $n/b$ to mean either $\lceil n/b\rceil$ or $\lfloor n/b\rfloor.$ Then $T(n)$ has the following asymptotic bounds:

1. If $f(n)=O(n^{\log_ba-\epsilon})$ for some constant $\epsilon>0,$ then $T(n)=\Theta(n^{\log_ba}).$
2. If $f(n)=\Theta(n^{\log_ba}),$ then $T(n)=\Theta(n^{\log_ba}\lg{n}).$
3. If $f(n)=\Omega(n^{\log_ba+\epsilon})$ for some constant $\epsilon>0,$ and if $af(n/b)\le cf(n)$ for some constant $c<1$ and all sufficiently large $n,$ then $T(n)=\Theta(f(n)).$