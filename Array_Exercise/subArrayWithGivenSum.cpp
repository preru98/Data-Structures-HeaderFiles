/*__________________________________________________________________________________________________________________________________________________________________________________________________
Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. 
The first line of each test case is N and S, where N is the size of array and S is the sum. The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the left if sum equals to subarray, else print -1.
__________________________________________________________________________________________________________________________________________________________________________________________________*/
#include<iostream>

using namespace std;
void subarray_sum(int,int,int[]);

int main(){

    int test_cases, size, sum;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        cin>>size;
        cin>>sum;
        int* array=new int[size];
        for(int i=0;i<size;i++){
            cin>>array[i];
        }
        subarray_sum(sum, size, array);
    }
    return 0;

}

void subarray_sum(int sum,int size,int array[]){

    int sum_inter=array[0], end=0, start=0, flag_match_not_found=1;

    while(end<size){
        if(sum_inter == sum){
            cout<<start+1<<" "<<end+1;           
            flag_match_not_found=0;
            break;
        }
        else if(sum_inter < sum){
            end++;
            sum_inter+=array[end];
        }
        else{
            sum_inter-=array[start];
            start++;
        }
    }

    if(flag_match_not_found){
        cout<<-1<<"\n";
    }

}