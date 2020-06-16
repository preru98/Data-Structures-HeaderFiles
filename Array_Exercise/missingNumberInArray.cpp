/*__________________________________________________________________________________________________________________________________________________________________________________________________
Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing, the missing number is to be found.

Input:
The first line of input contains an integer T denoting the number of test cases. For each test case first line contains N(size of array). The subsequent line contains N-1 array elements.

Output:
Print the missing number in array.
_________________________________________________________________________________________________________________________________________________________________________________________________*/

#include<iostream>

using namespace std;
int finding_nemo(int, int[]);

int main(){

    int test_cases, N,temp;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        cin>>N;
        int* store=new int[N+1];
        for(int i=0;i<N-1;i++){
            cin>>temp;
            store[temp]++;
        }
        cout<<finding_nemo(N, store)<<endl;
    }
    return 0;
}

int finding_nemo(int N,int store[]){
    for(int i=1;i<N+1;i++){
        if(!store[i]){
            return i;
        }
    }
    return -1;
}

