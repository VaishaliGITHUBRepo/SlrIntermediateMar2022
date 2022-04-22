//
//Created on Thu Feb 26 2022
//Copyright (c) 2022 Scaler Academy #DSA
//@author Vaishali Gupta
//
/*
Problem Description
You have given a string A having Uppercase English letters.

You have to find how many times subsequence "AG" is there in the given string.

NOTE: Return the answer modulo 109 + 7 as the answer can be very large.



Problem Constraints
1 <= length(A) <= 105



Input Format
First and only argument is a string A.



Output Format
Return an integer denoting the answer.



Example Input
Input 1:

 A = "ABCGAG"
Input 2:

 A = "GAB"


Example Output
Output 1:

 3
Output 2:

 0


Example Explanation
Explanation 1:

 Subsequence "AG" is 3 times in given string 
Explanation 2:

 There is no subsequence "AG" in the given string.
 */
#include<iostream>
using namespace std;
int solve(string A) {
    int count_A=0,ans=0;
    int mod=1000000007;
    for(int i=0;i<A.length();i++){
        if(A[i]=='A'){
            count_A++;
            count_A=count_A%mod;
        }
        else if(A[i]=='G'){
                ans=ans+count_A;
        }
    }
    return ans;
}
