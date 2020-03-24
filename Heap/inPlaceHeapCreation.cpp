#include<iostream>
using namespace std;

void insert(int,int,int[]);
void display(int ,int[]);

int main(){
    int array[]={-1,30,20,15,5,10,12,6};
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=2;i<size;i++){
        insert(array[i],i,array);
    }
    display(size,array);
    return 0;
}
void insert(int size,int array[]){
    int index=size;
    int temp=array[size];
    
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
