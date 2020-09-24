#include<iostream>
#include<string>
#include<algorithm>   // for transform()

using namespace std;
string altercase(string);
void change_case_using_functions(string);
int main(){
    string test = "Hey! Believe me, you doing fine";
    cout<<test<<"\n\n";
    cout<<altercase(test);
    cout<<endl;
    change_case_using_functions(test);
    return 0;
}

string altercase(string test){
    for(int i=0;i<test.size();i++){
        if(test[i]>=65 && test[i]<=90){
            test[i]+=32;
        }
        else if(test[i]>=97 && test[i]<=122){
            test[i]-=32;
        }
    }
    return test;
} 

void change_case_using_functions(string test){
    transform(test.begin(), test.end(), test.begin(), ::tolower);
    cout<<test;
}