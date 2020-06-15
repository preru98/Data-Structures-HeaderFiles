#include<iostream>

using namespace std;
void subarray_sum(int,int,int[]);

int main(){

    int test_cases, size, sum;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        cin>>size;
        cin>>sum;
        int* array=new int[size];
        for(int i=0;i<size;i++){
            cin>>array[i];
        }
        subarray_sum(sum, size, array);
    }
    return 0;

}

void subarray_sum(int sum,int size,int array[]){

    int sum_inter=0,end=0,flag_match_not_found=1;

    for(int i=0;i<size;i++){
        
        if(array[i]==sum){
            cout<<i+1<<" "<<i+1<<"\n";
            flag_match_not_found=0;
            break;
        }

        sum_inter=array[i];
        end=i;

        while(sum_inter<sum && end<size){
            end++;
            sum_inter+=array[end];
        }

        if(sum_inter==sum){
            cout<<i+1<<" | "<<end+1<<"\n";
            flag_match_not_found=0;
            break;
        }

    }

    if(flag_match_not_found){
        cout<<-1<<"\n";
    }

}