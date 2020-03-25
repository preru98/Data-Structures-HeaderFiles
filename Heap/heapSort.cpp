#include<iostream>
using namespace std;

void swap(int*,int*);
void insert(int,int[]);
void display(int ,int[]);
void deletion(int ,int[]);


int main(){
    int array[]={-1,30,20,15,5,10,12,6};
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=2;i<size;i++){
        insert(i,array);
    }
    for(int i=size-1;i>1;i--){
        deletion(i,array);
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


void deletion(int index,int array[]){
    int x=array[1]; //Storing first element
    array[1]=array[index];
    int i=1,j=2*i;
    while(j<index-1){
        if(array[j+1]>array[j]){ //Right child greater than left child
            j=j+1;
        }

        if(array[i]<array[j]){
            swap(&array[i],&array[j]);
            i=j;
            j=2*j;
        }         
        else
        {
            break;
        }
    }    
    array[index]=x;
}


void display(int size,int array[]){
     cout<<"\n";
    for(int i=1;i<size;i++){
        cout<<array[i]<<" ";
    }
}


void swap(int *a, int *b){
    int c=*a;
    *a=*b;
    *b=c;
}