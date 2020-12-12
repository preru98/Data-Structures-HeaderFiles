/*
Given an array of positive and negative numbers, find if there is a subarray (of size at-least one) with 0 sum.
Range : -10 to 10
Highest Sum Possible :55 (For this Question only) 
*/
#include<iostream>
using namespace std;

bool sub_check(int, int[]);

int main(){
    int array[] = {-3, 2, 3, 1, 6};
    int size = sizeof(array)/sizeof(array[0]);
    
    cout<<sub_check(size, array); 
    return 0;
}

bool sub_check(int size, int array[]){
    int* hashtable = new int[56];     
    int i;
    if(array[0]==0){
        return true;
    }
    hashtable[array[0]]++;
    for(int i=1;i<size;i++){
        array[i]+=array[i-1];
        if(array[i]==0){
            return true;
        }
        if(hashtable[array[i]]){
            return true;
        }
        hashtable[array[i]]++;
    }
    return false;
}



