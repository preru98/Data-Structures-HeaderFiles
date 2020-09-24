#include<iostream>
using namespace std;

int calculate_used_size(char*);
int main(){
    char* my_string = "Best Regards";
    cout<<my_string; 
    int size=calculate_used_size(my_string);
    cout<<size;
    return 0;
}

int calculate_used_size(char array[]){
    int count=0;
    for(int i=0;array[i]!=0;i++){           //array[i]!=0 || array[i]!='\0'
        count++;
    }
    return count;
}