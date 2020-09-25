#include<iostream>
#include<string>
#include<algorithm> //transform

using namespace std;
string remove_duplicates_high_order_complexity(string);
string remove_duplicates_count_sort(string);

int main(){
    string test = "level";
    cout<<"\n\n"<<remove_duplicates_high_order_complexity(test);
    cout<<"\n\n"<<remove_duplicates_count_sort(test);
    return 0;
}

string remove_duplicates_high_order_complexity(string test){
    //O(n*n) Complexity
    for(int i=0 ; i<test.length(); i++){
        for(int j=i+1 ; j<test.length() ;j++){
            if(test[j]=='0'){
                continue;
            }
            else{
                if(test[i]==test[j]){
                test[j]='0';
                }
            }
        }
    }

    string result = "";
    for(int j=0;j<test.length();j++){
        if(test[j]!='0'){
            result+=test[j];
        }
    }
    return result;
}

string remove_duplicates_count_sort(string test){
    //small letters only   O(n) Complexity
    int* table=new int[26];
    for(int i=0;i<test.size();i++){
        table[int(test[i])-97]++;   
    }
    string result="";

    for(int i=0;i<test.size();i++){
        if(table[int(test[i])-97]){
            table[int(test[i])-97]=0;
            result+=test[i];
        }   
    }

    return result;
}