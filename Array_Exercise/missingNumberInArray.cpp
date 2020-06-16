/*__________________________________________________________________________________________________________________________________________________________________________________________________
Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing, the missing number is to be found.

Input:
The first line of input contains an integer T denoting the number of test cases. For each test case first line contains N(size of array). The subsequent line contains N-1 array elements.

Output:
Print the missing number in array.
_________________________________________________________________________________________________________________________________________________________________________________________________*/

#include<iostream>

using namespace std;

int main(){

    int test_cases, N, temp, sum_of_N;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        cin>>N;
        sum_of_N=(N*(N+1))/2;
        for(int i=0;i<N-1;i++){
            cin>>temp;
            sum_of_N=sum_of_N-temp;
        }
        cout<<sum_of_N<<endl;
    }
    return 0;
}
