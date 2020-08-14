/*__________________________________________________________________________________________________________________________________________________________________________________________________
Given an array of positive integers. The task is to find inversion count of array.

Inversion Count : For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then inversion count is 0. If array is sorted in reverse order that inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N, the size of array. The second line of each test case contains N elements.

Output:
Print the inversion count of array.
_________________________________________________________________________________________________________________________________________________________________________________________________*/

#include<iostream>

using namespace std;
long long inversion_count (int, int, int[]);
void display(int [],int);
long long merge(int, int, int, int[]);

int main(){

    int test_cases, size;
    cin>>test_cases;

    for(int i=0;i<test_cases;i++){
        cin>>size;

        int* array=new int[size];

        // cout<<"Enter elements";

        for(int i=0;i<size;i++){
            cin>>array[i];
        }
        // display(array,size);

        cout<<inversion_count(0,size-1, array);
        // cout<<"*"<<answer<<"*";

        // display(array,size);

        cout<<endl;
    }
    return 0;
}

long long inversion_count(int lb, int ub, int array[]){
    if(lb<ub){
        int mid=(lb+ub)/2;
        long long left_inversions=inversion_count(lb, mid, array);
        long long right_inversions=inversion_count(mid+1, ub, array);

        long long combined_inversion=merge(lb, mid, ub, array);

	    return left_inversions+ right_inversions+ combined_inversion;
    }
    return 0;
}

long long merge(int lb, int mid, int ub, int array[]){
    long long counter=0;
    int size=ub-lb+1;
    int *newArray=new int [size];
    int i=lb, j=mid+1, k=0;
    //Counting inversions
    while(i<=mid && j<=ub){
        
        if(array[i]<=array[j]){
            newArray[k]=array[i];
            i++;
        }
        else{
            newArray[k]=array[j];
            j++;
            counter+=mid-i+1;
            // cout<<counter<<" : ";
        }
        k++;
    }

    while(j<=ub){
        newArray[k]=array[j];
        j++;
        k++;
    }
    while(i<=mid){
        newArray[k]=array[i];
        i++;
        k++;
    }
    for(int i=lb, j=0;i<=ub;i++,j++){            //Transferring contents after merging to original array
        array[i]=newArray[j];
    }
    return counter;
}

void display(int array[],int size){
    for(int i=0;i<size;i++){    
        cout<<array[i]<<" | ";  
    }
}