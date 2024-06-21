// Given an array arr of n integers where n > 1, return an array output such that output[i] is equal to the product of all the elements of arr except arr[i].

// Challenge : do this without division in linear time

// Input Format
// First line contains integer N as size of array.
// Next line contains a N integer as element of array. The product of any prefix or suffix of arr is NOT guaranteed to fit in a 32-bit integer.

// Constraints
// -10000000 < arr[i]<=10000000

// Output Format
// Print output array

// Sample Input
// 4
// 1 2 3 4
// Sample Output
// 24 12 8 6 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n; i ++){
        cin>>arr[i];
    }
    long long temp[n];
    for(int i =0 ; i<n; i++){
    long long product = 1 ;
        for(int j = 0; j <i ; j++){
        product *= arr[j];
         }
         for(int j = i+1; j<n;j++){
             product*=arr[j];
         }
         temp[i] = product;
        }
    for(int i =0; i <n; i++){
       cout<<temp[i]<<" ";
    
    }
    cout<<endl;
return 0;
}