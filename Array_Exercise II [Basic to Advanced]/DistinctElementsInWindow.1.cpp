// (N=3,M=8) => [0 0 1 1 2 4 7 13]
//Range of numbers -> [1-10]
#include<iostream>
using namespace std;

void distinct(int, int, int[]);

int main(){
    int n = 4;
    int array[] = {1, 2, 1, 5, 3, 4, 3, 3, 3, 3};
    int size = sizeof(array)/sizeof(array[0]);
    
    distinct(n, size, array); 
    return 0;
}

void distinct(int m, int size, int array[]){
    int* hashtable = new int[11];     //size given in Ques
    int i;
    
    //first window hashtable creation
    for(i=0;i<m;i++){
        hashtable[array[i]]++;
    }
    
    //First Distinct Element Window Computation
    int collection=0;
    for(int i=0;i<size;i++){
        if(hashtable[i]){
            collection++;
        }
    }
    
    cout<<collection<<" | ";

    while(i<size){
        hashtable[array[i]]++;
        if(hashtable[array[i]]==1){
            collection++;                     //New presence detected
        }
        hashtable[array[i-m]]--;
        if(hashtable[array[i-m]]==0){
            collection--;                     //One of the digit in stored collection is removed from window
        }
        cout<<collection<<" | ";
        i++;
    }
}



