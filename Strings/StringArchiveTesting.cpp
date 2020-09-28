#include<iostream>
#include<string>  

using namespace std;

string perm(string);

int main(){
    string test = "ABC";
    cout<<perm(test);
    return 0;
}

string perm(string test){
    static string str =test;
    return str;
}