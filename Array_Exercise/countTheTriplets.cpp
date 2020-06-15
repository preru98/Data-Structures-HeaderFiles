/*__________________________________________________________________________________________________________________________________________________________________________________________________
Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an Integer N denoting size of array and the second line contains N space separated elements.

Output:
For each test case, print the count of all triplets, in new line. If no such triplets can form, print "-1".
_________________________________________________________________________________________________________________________________________________________________________________________________*/

#include<iostream>
#include <algorithm> 

using namespace std;
int count_triplets(int, int[]);

int main(){

    int test_cases, size;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        cin>>size;
        int* array=new int[size];
        for(int i=0;i<size;i++){
            cin>>array[i];
        }
        cout<<count_triplets(size, array)<<endl;
    }
    return 0;

}

int count_triplets(int size,int array[]){

    int count=0;
    int max_element_in_array=*max_element(array, array+size);
    int* store=new int[max_element_in_array+1];

    for(int i=0;i<size;i++){
        store[array[i]]++;
    }

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if((array[i]+array[j])<=max_element_in_array && store[array[i]+array[j]]){
                cout<<array[i]<<" | "<<array[j]<<" | "<<store[array[i]+array[j]]<<"\n";
                count++;
            }
        }
    }
    return count?count:-1;
}