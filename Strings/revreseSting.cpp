#include<iostream>
#include<string>  
#include<algorithm> //reverse();


using namespace std;

string reverse_string(string);
string reverse_string_using_function(string);
void swap(char*, char*);

int main(){
    string test = "Data Structures";
    cout<<reverse_string(test);

    cout<<"\n\n"<<reverse_string_using_function(test);
    return 0;
}

string reverse_string(string test){
    for(int i=0, j=test.length()-1;i<j;i++,j--){
        swap(&test[i], &test[j]);
    }
    return test;
}

void swap(char* a, char* b){
    char c=*a;
    *a=*b;
    *b=c;
}

string reverse_string_using_function(string test){
    reverse(test.begin(), test.end());
    return test;
}