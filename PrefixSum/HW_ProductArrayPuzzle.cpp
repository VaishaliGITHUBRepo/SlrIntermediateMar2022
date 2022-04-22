//
//Created on Thu Feb 24 2022
//Copyright (c) 2022 Scaler Academy #DSA
//@author Vaishali Gupta
//
/*
Given an array of integers A, find and return the product array of the same size where the ith element of the product array will be equal to the product of all the elements divided by the ith element of the array.

Note: It is always possible to form the product array with integer (32 bit) values.


Input Format

The only argument given is the integer array A.
Output Format

Return the product array.
Constraints

1 <= length of the array <= 1000
1 <= A[i] <= 10
For Example

Input 1:
    A = [1, 2, 3, 4, 5]
Output 1:
    [120, 60, 40, 30, 24]

Input 2:
    A = [5, 1, 10, 1]
Output 2:
    [10, 50, 5, 50]
*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> solve(vector<int> &A) {
    int n=A.size();
    vector<int>ans(n,0);
    int p=1;
    for(int i=0;i<n;i++){
        p*=A[i];
    }
    for(int i=0;i<n;i++){
        ans[i]=p/A[i];
    }
    return ans;
}
int main(){
    vector<int>nums{1,2,3,4,5};
    vector<int>res;
    res=solve(nums);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}
