/*__________________________________________________________________________________________________________________________________________________________________________________________________
Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on...

Note: O(1) extra space is allowed. Also, try to modify the input array as required.

Input:
First line of input conatins number of test cases T. First line of test case contain an integer denoting the array size N and second line of test case contain N space separated integers denoting the array elements.

Output:
Output the modified array with alternated elements.
_________________________________________________________________________________________________________________________________________________________________________________________________*/

#include<iostream>

using namespace std;
void alter_array(long long, long long[]);

int main(){

    long long test_cases, size;
    cin>>test_cases;
    for(long long i=0;i<test_cases;i++){
        cin>>size;
        long long* array=new long long[size];
        for(long long i=0;i<size;i++){
            cin>>array[i];
        }
        alter_array(size, array);
        cout<<endl;
    }
    return 0;
}

void alter_array(long long size,long long array[]){
    long long min_p=0, max_p=size-1, z=array[size-1]+1, i=0;

    while(i<size){ 
        array[i++]+=  i%2==0 ? (array[max_p--]%z)*z : (array[min_p++]%z)*z;
    }
    for(int i=0;i<size;i++){
        cout<<array[i]/z<<" ";
    }
    
}
/* 
    I like to write smol code but this practice decreases the readability.
    So here is the expanded version of the above while loop, which is easy to understand and readable.
    
    while(i<size){    
        if(i%2==0){
            array[i]+=(array[max_p--]%z)*z;
            // max_p--;
        }
        else{
            array[i]+=(array[min_p++]%z)*z;
            // min_p++;
        }
        i++;
    }
    for(int i=0;i<size;i++){
        cout<<array[i]/z<<" ";
    }


*/