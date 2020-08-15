#include<iostream>
using namespace std;

void sort(int, int[]);
void display(int, int[]);
void swap(int*, int*);

int main(){
    int array[]={5,8,9,0,45,39,5,20,6,7,9,0,0,6,7,8,9,0,2};
    int size=sizeof(array)/sizeof(array[0]);
    display(size, array);
    sort(size, array);
    display(size, array);
    return 0;
}

void display(int size, int array[]){
    cout<<endl;
    for (int i = 0; i < size; i++){
        cout<<array[i]<<" | ";
    }
    cout<<endl;

}

void sort(int size_a,int size_b, int array_a[], int array_b[]){
    int size=size_a+size_b;
    for(int gap=size/2; gap>0; gap=gap/2)
    {
        for(int j= gap>size_a ? gap-size_a:gap;j<size_b;j++){
            for(int i = j-gap<1?size_a-1:j-gap;i>=0 && j>=0;i=i-gap){
                if(array_a[i+gap]<array_a[i]){
                    swap(&array_a[i], &array_a[i+gap]);
                }
                else{
                    break;
                }
            }
        }
    }

}

void swap(int* a, int* b){
    int c=*a;
    *a=*b;
    *b=c;
}
