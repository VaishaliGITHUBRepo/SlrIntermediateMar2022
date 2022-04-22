//
//Created on Thu Feb 26 2022
//Copyright (c) 2022 Scaler Academy #DSA
//@author Vaishali Gupta
//
/*
Problem Description

Given an integer array A containing N distinct integers, you have to find all the leaders in array A.

An element is a leader if it is strictly greater than all the elements to its right side.

NOTE:The rightmost element is always a leader.



Problem Constraints

1 <= N <= 105

1 <= A[i] <= 108



Input Format

First and only argument is an integer array A.



Output Format

Return an integer array denoting all the leader elements of the array.

NOTE: Ordering in the output doesn't matter.



Example Input

Input 1:

 A = [16, 17, 4, 3, 5, 2]
Input 2:

 A = [1, 2]


Example Output

Output 1:

 [17, 2, 5]
Output 2:

 [2]


Example Explanation

Explanation 1:

 Element 17 is strictly greater than all the elements on the right side to it.
 Element 2 is strictly greater than all the elements on the right side to it.
 Element 5 is strictly greater than all the elements on the right side to it.
 So we will return this three elements i.e [17, 2, 5], we can also return [2, 5, 17] or [5, 2, 17] or any other ordering.
Explanation 2:

 Only 2 the rightmost element is the leader in the array.
 */
#include<iostream>
#include<vector>
using namespace std;
int find_max(vector<int>&A,int start,int end){
    int max=A[start];
    for(int i=start;i<=end;i++){
        if(A[i]>max)
            max=A[i];
    }
    return max;
}
vector<int> solve(vector<int> &A) {
    vector<int>leader;
    int n=A.size();
    int max=A[n-1];
    for(int i=n-1;i>=0;i--){
        if(i==n-1)
            max=A[i];
        else
            max=find_max(A,i,n-1);
        if(A[i]>=max)
            leader.push_back(A[i]);
    }
    return leader;
}
