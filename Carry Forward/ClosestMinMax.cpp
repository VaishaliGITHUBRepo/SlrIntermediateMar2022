//
//Created on Thu Feb 26 2022
//Copyright (c) 2022 Scaler Academy #DSA
//@author Vaishali Gupta
//
/*
Given an array A, find the size of the smallest subarray such that it contains at least one occurrence of the maximum value of the array

and at least one occurrence of the minimum value of the array.



Problem Constraints
1 <= |A| <= 2000



Input Format
First and only argument is vector A



Output Format
Return the length of the smallest subarray which has at least one occurrence of minimum and maximum element of the array



Example Input
Input 1:

A = [1, 3]
Input 2:

A = [2]


Example Output
Output 1:

 2
Output 2:

 1


Example Explanation
Explanation 1:

 Only choice is to take both elements.
Explanation 2:

 Take the whole array.
 */
#include<iostream>
#include<vector>
using namespace std;
int find_min(vector<int>&A){
    int min=A[0];
    for(int i=1;i<A.size();i++){
        if(A[i]<min)
            min=A[i];
    }
    return min;
}
int find_max(vector<int>&A){
    int max=A[0];
    for(int i=1;i<A.size();i++){
        if(A[i]>max)
            max=A[i];
    }
    return max;
}
int min(int a,int b){
    if(a<b)
        return a;
    return b;
}
int solve(vector<int> &A) {
    int len=A.size();
    int Amin=find_min(A);
    int Amax=find_max(A);
    if(Amax==Amin)
        return 1;
    for(int i=0;i<A.size();i++){
        if(A[i]==Amin){
            for(int j=i+1;j<A.size();j++){
                if(A[j]==Amax){
                    len=min(len,j-i+1);
                    break;
                }
            }
        }
        else if(A[i]==Amax){
            for(int j=i+1;j<A.size();j++){
                if(A[j]==Amin){
                    len=min(len,j-i+1);
                    break;
                }
            }
        }
    }
    return len;
}
