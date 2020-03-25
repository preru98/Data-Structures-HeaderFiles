#include<iostream>
using namespace std;

void sort(int[],int);
void buildHeap(int[], int);
void maxHeapify(int [],int,int);
void swap(int*, int*);
void display(int[],int);
int LchildIndex(int);
int RchildIndex(int);


int main(){
    int array[]={9,8,16,1,4,10,2,3,7,14};
    int size=sizeof(array)/sizeof(array[0]);
    display(array,size);
    cout<<"After heap sort";
    buildHeap(array,size);
    display(array,size);
}
void buildHeap(int array[],int size){
    for(int i=size/2;i>=0;i--){
        maxHeapify(array,i,size);
    }
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

void display(int array[],int size){
    for(int i=0;i<size;i++){    
        cout<<array[i]<<" | ";  
    }
}