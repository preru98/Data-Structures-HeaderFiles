// (N=3,M=8) => [0 0 1 1 2 4 7 13]
//Range of numbers -> [1-10]
#include<iostream>
using namespace std;

void distinct(int, int, int[]);
void display(int[], int);
int count(int[], int);

int main(){
    int n = 4;
    int array[] = {1, 2, 1, 3, 4, 3, 3};
    int size = sizeof(array)/sizeof(array[0]);
    
    distinct(n, size, array); 
    return 0;
}

void distinct(int m, int size, int array[]){
    int* hashtable = new int[11];     //size given in Ques
    int i;
    //first window hash counting
    for(i=0;i<m;i++){
        hashtable[array[i]]++;
    }

    cout<<count(hashtable, 11)<<" | ";

    while(i<size){
        hashtable[array[i]]++;
        hashtable[array[i-m]]--;
        cout<<count(hashtable, 11)<<" | ";
        i++;
    }
}

int count(int hash[], int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(hash[i]){
            count++;
        }
    }
    return count; 
}

void display(int array[],int size){
    for(int i=0;i<size;i++){    
        cout<<array[i]<<" | ";  
    }
}



