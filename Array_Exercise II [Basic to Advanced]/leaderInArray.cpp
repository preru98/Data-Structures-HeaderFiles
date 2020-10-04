/*
__________________________________________________________________________________________
Print all elements of the array, which are the largest of all the elements to the right of them. 
Example : [15, 4, 6, 23, 89, 56, 90, 23, 5, 4];
Output : [4, 5, 23, 90]
___________________________________________________________________________________________________
*/

#include<iostream>
#include<vector>
using namespace std;

void find_leaders(int[], int);
void display(int[], int);

int main(){
    int array[] = { 15, 4, 6, 23, 89, 56, 90, 23, 5, 4};
    int size = sizeof(array)/sizeof(array[0]);
    display(array, size);
    find_leaders(array, size);
    return 0;
}


void find_leaders(int array[], int size){
    
    cout<<array[size-1]<<" | ";
    int max=array[size-1];
    for(int i=size-2;i>=0;i--){
        if(array[i]>max){
            cout<<array[i]<<" | ";
            max=array[i];
        }
    }
}

void display(int array[], int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" | ";
    }
    cout<<endl;
}
