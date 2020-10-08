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
       
## Dynamic Programming Solution:
In this approach, we work on the same idea as described above neglecting the case of calculating the answers to sub-problems again and again.. The approach will be to make a table which will store the results of sub-problems so that to solve a sub-problem, it would only require a look-up from the table which will take constant time, which earlier took exponential time.

Formally for filling DP[i][j] state where ‘i’ is the number of eggs and ‘j’ is the number of floors:
   - We have to traverse for each floor ‘x’ from ‘1’ to ‘j’ and find minimum of : (1 + max( DP[i-1][j-1], DP[i][j-x] )).
   
### Simulation :
    i => Number of eggs
    j => Number of floors
    Look up find maximum
    Lets fill the table for the following case:
    Floors = ‘4’
    Eggs = ‘2’

    1 2 3 4

    1 2 3 4 => 1

    1 2 2 3 => 2

    For ‘egg-1’ each case is the base case so the
    number of attempts is equal to floor number.

    For ‘egg-2’ it will take ‘1’ attempt for 1st
    floor which is base case.

    For floor-2 =>
    Taking 1st floor 1 + max(0, DP[1][1])
    Taking 2nd floor 1 + max(DP[1][1], 0)
    DP[2][2] = min(1 + max(0, DP[1][1]), 1 + max(DP[1][1], 0))
    
    For floor-3 =>
    Taking 1st floor 1 + max(0, DP[2][2])
    Taking 2nd floor 1 + max(DP[1][1], DP[2][1])
    Taking 3rd floor 1 + max(0, DP[2][2])
    DP[2][3]= min(‘all three floors’) = 2

    For floor-4 =>
    Taking 1st floor 1 + max(0, DP[2][3])
    Taking 2nd floor 1 + max(DP[1][1], DP[2][2])
    Taking 3rd floor 1 + max(DP[1][2], DP[2][1])
    Taking 4th floor 1 + max(0, DP[2][3])
    DP[2][4]= min(‘all four floors’) = 3
    
 ## Complexity :
   - Time Complexity: O(n*k^2).
     Where ‘n’ is the number of eggs and ‘k’ is the number of floors, as we use a nested for loop ‘k^2’ times for each egg
     
   - Auxiliary Space: O(n*k).
     As a 2-D array of size ‘n*k’ is used for storing elements.
