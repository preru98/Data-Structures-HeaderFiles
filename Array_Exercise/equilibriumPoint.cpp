/*__________________________________________________________________________________________________________________________________________________________________________________________________
Given an array A of N positive numbers. The task is to find the position where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Input:
The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. First line of each test case contains an integer N denoting the size of the array. Then in the next line are N space separated values of the array A.

Output:
For each test case in a new  line print the position at which the elements are at equilibrium if no equilibrium point exists print -1.
_________________________________________________________________________________________________________________________________________________________________________________________________*/

#include<iostream>

using namespace std;
int find_equilibrium_point(int, int, int[]);

int main(){

    int test_cases, size, temp, sum;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        cin>>size;
        sum=0;
        int* array=new int[size];
        for(int i=0;i<size;i++){
            cin>>array[i];
            
            sum+=array[i];
        }
        cout<<find_equilibrium_point(size, sum, array)<<endl;
    }

    return 0;
}

int find_equilibrium_point(int size, int sum, int array[]){
    if(size==1){
        return 1;
    }
    int left_sum=array[0], right_sum=sum-array[0]-array[1], equi_point=1;
    for( ;equi_point<size-1;equi_point++){
            if(left_sum==right_sum){
            return equi_point+1;
        }
        left_sum+=array[equi_point];
        right_sum-=array[equi_point+1];
    }
    return -1;
}