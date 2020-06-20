/*__________________________________________________________________________________________________________________________________________________________________________________________________
Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
Print the maximum sum of the contiguous sub-array in a separate line for each test case.
_________________________________________________________________________________________________________________________________________________________________________________________________*/

#include<iostream>
#include<cmath>

using namespace std;
long long count_pairs(long long, long long, long long[], long long[]);

int main(){

    long long test_cases, sizeA, sizeB;
    cin>>test_cases;
    for(long long i=0;i<test_cases;i++){
        cin>>sizeA;
        cin>>sizeB;
        long long* arrayA=new long long[sizeA];
        long long* arrayB=new long long[sizeB];
        for(long long i=0;i<sizeA;i++){
            cin>>arrayA[i];
        }
        for(long long i=0;i<sizeB;i++){
            cin>>arrayB[i];
        }
        cout<<count_pairs(sizeA, sizeB, arrayA, arrayB)<<endl;   
    }
    return 0;
}

long long count_pairs(long long sizeA, long long sizeB, long long arrayA[], long long arrayB[]){
    long long count=0;
    for(long long i=0;i<sizeA;i++){
        for(long long j=0;j<sizeB;j++){
            if( pow(arrayA[i], arrayB[j]) > pow(arrayB[j], arrayA[i]) ){
                count++;
            }
        }
    }
    return count;
}