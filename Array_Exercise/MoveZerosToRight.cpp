#include<iostream>
using namespace std;
void swap(int*, int*);
void display(int[], int);

int main(){

    int array[] ={0,4,7,0,2,0,9,0,0,0,7,6,4,3,2,7,90,0,0};
    int size =sizeof(array)/sizeof(array[0]);
    display(array, size);
    for(int i=0, j=size-1;i<size && i<j;i++){
        if(array[i] == 0){
            if(array[j]!=0){
                swap(&array[i], &array[j]);
                j--;
            }
            else{
                while(array[j]==0 && i<j){
                    j--;
                }
                swap(&array[i], &array[j]);
            }
        }        
    }
    cout<<endl;
    display(array, size);
    return 0;
}

void display(int array[], int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" | ";
    }
}
void swap(int* a, int* b){
    int c=*a;
    *a=*b;
    *b=c;
}
