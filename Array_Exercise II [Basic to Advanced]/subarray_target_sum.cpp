/*
    Target Range : None
    Domain of Array : Positive Integers only     
*/

#include<iostream>
using namespace std;

int targetSum(int, int, int[]);
int main(){
    int array[] = {2, 5, 6, 8, 2, 10, 20, 16, 15};
    int size = sizeof(array)/sizeof(array[0]);
    int target = 9;
    cout<<targetSum(target, size, array);
    return 0;
}

int targetSum(int target, int size, int array[]){
    int current_sum=array[0], start=0;
    for(int i=1;i<size;i++){
        current_sum+=array[i];
        while(current_sum>target){
            current_sum-=array[start++];
        }
        if(current_sum==target){
            return 1;
        }
    }
    return 0;
}