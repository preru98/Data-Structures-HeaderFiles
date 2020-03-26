#include<iostream>
using namespace std;

void swap(int*,int*);
void insert(int,int[]);
void display(int ,int[]);
void deletion(int ,int[]);


void buildHeap(int[], int);
void maxHeapify(int [],int,int);
int LchildIndex(int);
int RchildIndex(int);


int main(){
    int array[]={-1,30,20,15,5,10,12,6};
    int size=sizeof(array)/sizeof(array[0]);
    buildHeap(array,size);
    for(int i=size-1;i>1;i--){
        deletion(i,array);
    }
    
    display(size,array);
    return 0;
}


void maxHeapify(int array[],int index,int size){

    int lchild=LchildIndex(index);
    int rchild=RchildIndex(index);
    int largest;

    if(lchild<=size && array[lchild]>array[index]){
        largest=lchild;
    }
    else{
        largest=index;
    }
    if(rchild<=size && array[rchild]>array[largest]){
        largest=rchild;
    }
    if(largest!=index){
        swap(&array[largest],&array[index]);
        maxHeapify(array,largest,size);
    }
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


int LchildIndex(int index){
    return index*2+1;
}

int RchildIndex(int index){
    return index*2+2;
}

void swap(int *a, int *b){
    int c=*a;
    *a=*b;
    *b=c;
}

void buildHeap(int array[],int size){
    for(int i=size/2;i>=0;i--){
        maxHeapify(array,i,size);
    }
}