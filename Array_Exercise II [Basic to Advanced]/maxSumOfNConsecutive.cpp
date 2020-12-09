#include<iostream>
using namespace std;

int maxSum(int, int, int[]);
int main(){
    int array[] = {1, -2 };
    int size = sizeof(array)/sizeof(array[0]);
    int range = 3;
    cout<<maxSum(range, size, array);
    return 0;
}

int maxSum(int range, int size, int array[]){
    int current_sum=0, max_sum=0;
    for(int i=0;i<range;i++){
        current_sum+=array[i];
    }
    max_sum=current_sum;

    for(int i=range;i<size;i++){
        current_sum+=array[i]-array[i-range];
        if(current_sum>max_sum){
            max_sum=current_sum;
        }
    }

    return max_sum;
}

void display(int array[], int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" | ";
    }
    cout<<endl;
}