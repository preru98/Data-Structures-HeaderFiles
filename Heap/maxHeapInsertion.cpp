#include<iostream>
using namespace std;

void insert(int ,int*,int[]);
void display(int ,int[]);

int main(){
    int array[]={-1,30,20,15,5,10,12,6};
    int size=sizeof(array)/sizeof(array[0]);
    insert(40,&size,array);
    display(size,array);
    return 0;
}
void insert(int key,int *size,int array[]){
    
    *size=*size+1;   //array size increased to 1
    array[*size-1]=key;  //Assigning elemnent to last index

    int index=*size-1;    //Assigning last index to index variable
    int temp=array[index];
    
    while(temp>array[index/2]&& index>1){
        array[index]=array[index/2];
        index=index/2;
    }
    array[index]=temp;
}

void display(int size,int array[]){
    
    for(int i=1;i<size;i++){
        cout<<array[i]<<" ";
    }
}
