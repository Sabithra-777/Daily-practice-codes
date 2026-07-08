# Day 83 - DSA Practice

## Problem:
Find the sum of primary and secondary diagonals

## Approach:
- Traverse the matrix once
- Add matrix[i][i] for the primary diagonal
- Add matrix[i][n-i-1] for the secondary diagonal

## Example:
Input:
1 2 3
4 5 6
7 8 9

Output:
Primary Diagonal Sum = 15
Secondary Diagonal Sum = 15

## Language:
C