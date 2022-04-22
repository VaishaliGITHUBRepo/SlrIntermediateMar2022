//
//Created on Thu Feb 24 2022
//Copyright (c) 2022 Scaler Academy #DSA
//@author Vaishali Gupta
//
/*
Problem Description

Given an array, arr[] of size N, the task is to find the count of array indices such that removing an element from these indices makes the sum of even-indexed and odd-indexed array elements equal.



Problem Constraints

1 <= n <= 105
-105 <= A[i] <= 105


Input Format

First argument contains an array A of integers of size N


Output Format

Return the count of array indices such that removing an element from these indices makes the sum of even-indexed and odd-indexed array elements equal.



Example Input

Input 1:
A=[2, 1, 6, 4]
Input 2:

A=[1, 1, 1]


Example Output

Output 1:
1
Output 2:

3


Example Explanation

Explanation 1:
Removing arr[1] from the array modifies arr[] to { 2, 6, 4 } such that, arr[0] + arr[2] = arr[1]. 
Therefore, the required output is 1. 
Explanation 2:

Removing arr[0] from the given array modifies arr[] to { 1, 1 } such that arr[0] = arr[1] 
Removing arr[1] from the given array modifies arr[] to { 1, 1 } such that arr[0] = arr[1] 
Removing arr[2] from the given array modifies arr[] to { 1, 1 } such that arr[0] = arr[1] 
Therefore, the required output is 3.
*/
#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> &A) {
    int n=A.size();
    int c=0;
    vector<int>Peven(n,0);
    vector<int>Podd(n,0);
    //Creating Prefix even sum array
    Peven[0]=A[0];
    for(int i=0;i<n;i++){
        if(i%2==0)
            Peven[i]=Peven[i-1]+A[i];
        else
            Peven[i]=Peven[i-1];
    }
    //Creating Prefix odd sum array
    Podd[0]=A[0];
    for(int i=0;i<n;i++){
        if(i%2==1)
            Podd[i]=Podd[i-1]+A[i];
        else
            Podd[i]=Podd[i-1];
    }
    //Edge Cases
    int Teven=0,Todd=0;
    for(int i=0;i<n;i++){
        //calculating total even sum and total odd sum
        int Todd=(i-1>=0) ? Podd[i-1] : 0;
        int Teven=(i-1>=0) ? Peven[i-1] : 0;
        Todd=Todd+Peven[n-1]-Peven[i];
        Teven=Teven+Podd[n-1]-Podd[i];
        if(Todd==Teven)
            c++;
    }
    return c;
}
