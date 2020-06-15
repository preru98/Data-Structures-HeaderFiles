/*__________________________________________________________________________________________________________________________________________________________________________________________________
Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
Print the maximum sum of the contiguous sub-array in a separate line for each test case.
_________________________________________________________________________________________________________________________________________________________________________________________________*/

#include<iostream>

using namespace std;
int kadane(int, int[]);

int main(){

    int test_cases, size;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        cin>>size;
        int* array=new int[size];
        for(int i=0;i<size;i++){
            cin>>array[i];
        }
        cout<<kadane(size, array)<<endl;
    }
    return 0;
}

int kadane(int size,int array[]){

    int max_sum_current_index=array[0], global_max_sum=array[0];
    for(int i=1;i<size;i++){
        max_sum_current_index=max(max_sum_current_index+array[i], array[i]);
        global_max_sum = max_sum_current_index > global_max_sum ? max_sum_current_index : global_max_sum;
    }
    return global_max_sum;
}