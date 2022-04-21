//
//Created on Tue Apr 19 2022
//Copyright (c) 2022 Scaler Academy #DSA
//@author Vaishali Gupta
//
/*
Problem Description

Given a number A. Return square root of the number if it is perfect square otherwise return -1.



Problem Constraints

1 <= A <= 108



Input Format

First argument is an integer A.



Output Format

Return an integer which is the square root of A if A is perfect square otherwise return -1.



Example Input

Input 1:

A = 4
Input 2:

A = 1001


Example Output

Output 1:

2
Output 2:

-1


Example Explanation

Explanation 1:

sqrt(4) = 2
Explanation 2:

1001 is not a perfect square.
*/

int solve(int A) {
    int ans=-1;
    int start=1,end=A;
    if(A==0)
        return 0;
    while(start<=end){
        int mid=(start+end)/2;
        if(mid<=A/mid){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    if(ans==A/ans)
        return ans;
    else 
        return -1;
}
