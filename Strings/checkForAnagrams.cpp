#include<iostream>
#include<string>
using namespace std;

bool check_anagrams_distinct(string, string);

int main(){
    string first = "decimal";
    string second = "medical";
    cout<<endl;
    cout<<check_anagrams_distinct(first, second);
    return 0;
}

bool check_anagrams_distinct(string first, string second){
    if(first.size()!=second.size()){
        return false;
    }
    int* table =  new int[26];

    for(int i=0;i<first.size();i++){
        table[int(first[i])-97]++;
    }

    for(int i=0;i<first.size();i++){
        if(!(table[int(second[i])-97])){
            return false;
        }
    }
    return true;
}

