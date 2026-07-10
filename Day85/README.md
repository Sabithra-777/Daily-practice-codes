# Day 85 - DSA Practice

## Problem:
Search an element in a row-wise and column-wise sorted matrix

## Approach:
- Start from the top-right corner
- If current element is greater than key, move left
- If current element is smaller than key, move down
- Repeat until element is found or search ends

## Example:
Input:
1 4 7
2 5 8
3 6 9

Key:
6

Output:
Element found at (2, 1)

## Language:
C