#include<iostream>
#include<string>
using namespace std;

bool check_anagrams_distinct(string, string);
bool check_anagrams(string, string);

int main(){
    string first = "dlecimal";
    string second = "medicalp";
    cout<<endl;
    cout<<check_anagrams(first, second);
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

bool check_anagrams(string first, string second){
    if(first.size()!=second.size()){
        return false;
    }
    int* table =  new int[26];

    for(int i=0;i<first.size();i++){
        table[int(first[i])-97]++;
    }

    for(int i=0;i<first.size();i++){
        table[int(second[i])-97]--;
        if(table[int(second[i])-97]<0){
            return false;
        }
    }
    return true;
}
