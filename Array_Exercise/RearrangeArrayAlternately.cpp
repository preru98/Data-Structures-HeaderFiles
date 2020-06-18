/*__________________________________________________________________________________________________________________________________________________________________________________________________
Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on...

Note: O(1) extra space is allowed. Also, try to modify the input array as required.

Input:
First line of input conatins number of test cases T. First line of test case contain an integer denoting the array size N and second line of test case contain N space separated integers denoting the array elements.

Output:
Output the modified array with alternated elements.
_________________________________________________________________________________________________________________________________________________________________________________________________*/

#include<iostream>

using namespace std;
void alter_array(int, int[]);

int main(){

    int test_cases, size;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        cin>>size;
        int* array=new int[size];
        for(int i=0;i<size;i++){
            cin>>array[i];
        }
        alter_array(size, array);
        cout<<endl;
    }
    return 0;
}

void alter_array(int size,int array[]){
    int count=0,k=0;
    int* altered_array=new int[size];
    for(int i=0,j=size-1;i<=j;k++,count++){  
        altered_array[k]=(count%2==0) ? array[j--] : array[i++];
    }
    for(int i=0;i<size;i++){
        cout<<altered_array[i]<<" ";
    }
}