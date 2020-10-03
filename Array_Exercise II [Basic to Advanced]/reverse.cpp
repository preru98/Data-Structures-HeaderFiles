#include<iostream>

using namespace std;

void reverse(int[], int);
void display(int[], int);
void swap(int*, int*);

int main(){
    int array[] = { 1,2,3,4,5,6,7,8,9,0 };
    int size = sizeof(array)/sizeof(array[0]);
    display(array, size);
    reverse(array, size);
    display(array, size);
    return 0;
}

void display(int array[], int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" | ";
    }
    cout<<endl;
}

void reverse(int array[], int size){
    for(int i=0, j=size-1;i<j;){
        swap(&array[i++], &array[j--]);
    }
}

void swap(int* a, int* b){
    int c=*a;
    *a=*b;
    *b=c;
}