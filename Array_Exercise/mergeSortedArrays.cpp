#include<iostream>

using namespace std;
void merge(int, int, int[], int[]);

int main(){
    int A[]={3,4,7,19};
    int B[]={5,10,13,20};
    int sizeA=sizeof(A)/sizeof(A[0]);
    int sizeB=sizeof(B)/sizeof(B[0]);
    merge(sizeA, sizeB, A, B);
    return 0;
}

void merge(int sizeA, int sizeB, int A[], int B[]){
    int sizeR = sizeA + sizeB;
    int* Resultant=new int [sizeR];
    int i=0, j=0, k=0;
    for(; j < sizeA && k < sizeB ;i++){
        if(A[j]<B[k]){
            Resultant[i]=A[j];
            j++;
        }
        else{
            Resultant[i]=B[k];
            k++;
        }
    }
    if(j<sizeA){
        while(j<sizeA){
            Resultant[i]=A[j];
            i++;
            j++;
        }
    }
    if(k<sizeB){
        while(k<sizeB){
            Resultant[i]=B[k];
            i++;
            k++;
        }
    }
    for(int i=0;i<sizeR;i++){
        cout<<Resultant[i]<<" | ";
    }
}