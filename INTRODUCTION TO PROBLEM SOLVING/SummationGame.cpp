//
//Created on Tue Apr 19 2022
//Copyright (c) 2022 Scaler Academy #DSA
//@author Vaishali Gupta
//
/*
Problem Description

Write a program to find sum all Natural numbers from 1 to N where you have to take N as input from user



Problem Constraints

1 <= N <= 1000



Input Format

A single line representing N



Output Format

A single integer showing sum of all Natural numbers from 1 to N



Example Input

Input 1:

5
Input 2:

10


Example Output

Output 1:

15
Output 2:

55
*/

#include<iostream>

using namespace std;

int main()  {
    int N;
    cin>>N;
    cout<<(N*(N+1))/2;
    return 0;
}