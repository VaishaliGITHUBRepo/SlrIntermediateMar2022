//
//Created on Tue Apr 21 2022
//Copyright (c) 2022 Scaler Academy #DSA
//@author Vaishali Gupta
//
/*
Problem Description

Write a program to print maximum and minimum elements of the input array A of size N where you have to take integer N and other N elements as input from the user.



Problem Constraints

1 <= N <= 1000

1 <= A <= 1000



Input Format

A single line representing N followed by N integers of the array A



Output Format

A single line containing two space separated integers representing maximum and minimum elements of the input array.



Example Input

Input 1:

5 1 2 3 4 5
Input 2:

4 10 50 40 80


Example Output

Output 1:

5 1
Output 2:

80 10
*/

#include<iostream>
#include<vector>
using namespace std;

int main()  {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max)
            max=a[i];
    }
    int min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min)
            min=a[i];
    }
    cout<<max<<" "<<min;
    return 0;
}
