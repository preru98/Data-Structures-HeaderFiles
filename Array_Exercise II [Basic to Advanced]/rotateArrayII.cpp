#include<iostream>
using namespace std;

void rotateLeft(int[], int, int);
void reverse(int array[], int start, int end);
void display(int[], int);
void swap(int*, int*);

int main(){
    int array[] = { 1,2,3,4,5,6,7,8,9,0 };
    int size = sizeof(array)/sizeof(array[0]);
    int distance = 2;
    display(array, size);
    rotateLeft(array, size, distance);
    display(array, size);
    return 0;
}

void rotateLeft(int array[], int size, int distance){
    reverse(array, 0, distance-1);
    reverse(array, distance, size-1);
    reverse(array, 0, size-1);
}

void display(int array[], int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" | ";
    }
    cout<<endl;
}

void reverse(int array[], int start, int end){
    for(int i=start, j=end;i<j;){
        swap(&array[i++], &array[j--]);
    }
}

void swap(int* a, int* b){
    int c=*a;
    *a=*b;
    *b=c;
}