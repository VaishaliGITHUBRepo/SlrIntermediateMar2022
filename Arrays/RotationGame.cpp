//
//Created on Tue Apr 21 2022
//Copyright (c) 2022 Scaler Academy #DSA
//@author Vaishali Gupta
//
/*
Given an integer array A and an integer B, you have to print the same array after rotating it B times towards the right.

NOTE: You can use extra memory.



Problem Constraints

1 <= |A| <= 106

1 <= A[i] <= 109

1 <= B <= 109



Input Format

The first line begins with an integer A denoting the length of an array, and then A integers represent the array elements.
The second line contains a single integer B



Output Format

Print an array of integers which is the Bth right rotation of input array A, on a separate line.



Example Input

Input 1:

 4 1 2 3 4
 2
Input 2:

 3 1 2 2
 3


Example Output

Output 1:

 3 4 1 2
Output 2:

 1 2 2


Example Explanation

Explanation 1:

 [1,2,3,4] => [4,1,2,3] => [3,4,1,2]

Explanation 2:


 [1,2,2] => [2,1,2] => [2,2,1] => [1,2,2]
*/

#include<iostream>

using namespace std;

void reverse(int A[],int start,int end){
    while(start<end){
        int temp=A[start];
        A[start]=A[end];
        A[end]=temp;
        start++;
        end--;
    }
}
int main()  {
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    int B;
    cin>>B;
    B=B%N;
    reverse(A,0,N-1);
    reverse(A,0,B-1);
    reverse(A,B,N-1);
    for(int i=0;i<N;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}