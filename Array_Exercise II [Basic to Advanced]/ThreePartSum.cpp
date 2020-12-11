//Consider an array A of n integers. Determine if array A can be split into three consecutive parts
//such that sum of each part is equal. If yes then print any index pair(i, j) such that sum(arr[0..i])
// = sum(arr[i+1..j]) = sum(arr[j+1..n-1]), otherwise print -1.

#include<iostream>
#include<numeric>

using namespace std;

int partition_three(int, int[]);
void display(int, int, int,int[]);
int main(){
    int array[] = { 5, 2, 6, 1, 1, 1, 5} ;
    int size = sizeof(array)/sizeof(array[0]);
    cout<<partition_three(size, array);
    return 0;
}

int partition_three(int size, int array[]){
    int total_sum = accumulate(array, array + size, 0 );
   
    if((total_sum %3)  == 0 ){
        int *pre_sum = new int[size];
        pre_sum[0] = array[0];
        for(int i=1;i<size;i++){
            pre_sum[i] = array[i] + pre_sum[i-1];
        }
        int k=-1, l=-1;
        for(int i=0;i<size;i++){
            if(k==-1){
                if( ( 2*pre_sum[i] ) == ( pre_sum[size-1] - pre_sum[i] ) ){
                    k=i;
                }
            }
            else{
                if((pre_sum[i] - pre_sum[k]) == (pre_sum[size-1] - pre_sum[i])){
                    l=i;
                }
            }
        }
        if(k==-1 || l==-1){
            return -1;
        }
        else{
            cout<<"\n";
            display(k,l, size, array);
            return 1;
        }
    }
    else{
        return -1;
    }
}

void display(int k, int l, int size, int array[]){
    cout<<"\nFirst : \n";
    for(int i=0;i<=k;i++){
        cout<<array[i]<<" | ";
    }
    cout<<"\nSecond : \n";
    for(int i=k+1;i<=l;i++){
        cout<<array[i]<<" | ";
    }
    cout<<"\nThird : \n";
    for(int i=l+1;i<size;i++){
        cout<<array[i]<<" | ";
    }

    cout<<"\n\n\n";
}