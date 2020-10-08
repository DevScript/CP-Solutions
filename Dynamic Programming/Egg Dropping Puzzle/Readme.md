# Egg Dropping Puzzle

## Problem Statemet : 
Suppose you have N eggs and you want to determine from which floor in a K-floor building you can drop an egg such that it doesn't break. You have to determine the minimum number of attempts you need in order find the critical floor in the worst case while using the best strategy.There are few rules given below. 

  - An egg that survives a fall can be used again.
  - A broken egg must be discarded.
  - The effect of a fall is the same for all eggs.
  - If the egg doesn't break at a certain floor, it will not break at any floor below.
  - If the eggs breaks at a certain floor, it will break at any floor above.
  
For more description on this problem see [wiki page](https://en.wikipedia.org/wiki/Dynamic_programming#Egg_dropping_puzzle)

## Input Output Format :
   ### Input : 
        Takes two positive integer N and K as input parameters
        k ==> Number of floors
        n ==> Number of Eggs
   ### Output :
        The minimum number of attempts you need in order to find the critical floor.
        
## Example :
   ### Case 1:
       Input N=2, K=2
       Output: 2
   ### Case 2:
       Input:  N = 2, K = 10
       Output: 4
       
   ### Case 3:
       Input:  N = 3, K = 5
       Output: 3
       
## Explanation:
