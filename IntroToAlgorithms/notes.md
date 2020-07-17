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