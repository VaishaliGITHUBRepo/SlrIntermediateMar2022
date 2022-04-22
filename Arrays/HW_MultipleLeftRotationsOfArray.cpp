//
//Created on Tue Apr 21 2022
//Copyright (c) 2022 Scaler Academy #DSA
//@author Vaishali Gupta
//
/*
Given an array of integers A and multiple values in B, which represents the number of times array A needs to be left rotated.

Find the rotated array for each value and return the result in the from of a matrix where ith row represents the rotated array for the ith value in B.



Problem Constraints
1 <= length of both arrays <= 2000 -10^9 <= A[i] <= 10^9 0 <= B[i] <= 2000


Input Format
The first argument given is the integer array A.
The second argument given is the integer array B.


Output Format
Return the resultant matrix.


Example Input
Input 1:
 
    A = [1, 2, 3, 4, 5]
    B = [2, 3]

Input 2:

  
    A = [5, 17, 100, 11]
    B = [1]




Example Output
Output 1:
 
    [ [3, 4, 5, 1, 2]
     [4, 5, 1, 2, 3] ]


Output 2:

    
    [ [17, 100, 11, 5] ]



Example Explanation
for input 1 -> B[0] = 2 which requires 2 times left rotations

1: [2, 3, 4, 5, 1]

2: [3, 4, 5, 1, 2]

B[1] = 3 which requires 3 times left rotation

1: [2, 3, 4, 5, 1]

2: [3, 4, 5, 1, 2]

2: [4, 5, 1, 2, 4]
*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int>A,int start,int end){
    vector<int>C;
    C=A;
    while(start<end){
        int temp=C[start];
        C[start]=C[end];
        C[end]=temp;
        start++;
        end--;
    }
    return C;
}
vector<vector<int> > solve(vector<int> &A, vector<int> &B) {
    vector<vector<int> >ans;
    vector<int>C;
    for(int i=0;i<B.size();i++){
        B[i]=B[i]%A.size();
        C=reverse(A,0,B[i]-1);
        C=reverse(C,B[i],A.size()-1);
        C=reverse(C,0,A.size()-1);
        ans.push_back(C);
    }
    return ans;
}
int main(){
    vector<int> b{2,3};
    vector<int> c{2,3};
    vector<vector<int> >res;
    res=solve(c,b);
    return 0;
}