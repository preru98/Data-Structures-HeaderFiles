/*__________________________________________________________________________________________________________________________________________________________________________________________________

Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.

Input:
The first line contains an integer 'T' denoting the total number of test cases. Then T testcases follow. Each testcases contains two lines of input. The first line denotes the size of the array N. The second lines contains the elements of the array A separated by spaces.

Output: 
For each testcase, print the sorted array.
_________________________________________________________________________________________________________________________________________________________________________________________________*/

#include<iostream>

using namespace std;
int sort(int);
void display(int, int []);

int main(){

    int test_cases, size;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        cin>>size;
        sort(size);
        cout<<endl;
    }
    return 0;
}

int sort(int size){
    int* array=new int[size];
    int temp;
    int* hashtable=new int[3];

    for(int i=0;i<size;i++){
        cin>>temp;
        hashtable[temp]++;
    }

    for(int i=0, j=0;i<3;i++){
        if(hashtable[i]){
            while(hashtable[i]){
                array[j]=i;
                j++;
                hashtable[i]--;
            }
        }
    }

    display(size, array);
}
void display(int size, int array[]){
    for(int i=0;i<size;i++){
            cout<<array[i]<<" ";
    }
}
    