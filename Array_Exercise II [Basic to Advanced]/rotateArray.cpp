#include<iostream>
using namespace std;

void rotateLeft(int[], int, int);
void display(int[], int);
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
    int* temp = new int[size];
    for(int i=0;i<size;i++){
        temp[i]=array[(i+distance)%size];
    }
    for(int i=0;i<size;i++){
        array[i]=temp[i];
    }
}

void display(int array[], int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" | ";
    }
    cout<<endl;
}