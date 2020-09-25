#include<iostream>
#include<string>

using namespace std;

void count_words_vowels(string);

int main(){
    string test = " Hello  Wow!      amazing ";
    count_words_vowels(test);
    return 0;
}

void count_words_vowels(string test){

    int valid_space =0, vowels=0, words;

    for(int i=0;i<test.size();i++){
        if(test[i]=='A' || test[i]=='a' || test[i]=='E' || test[i]=='e' || test[i]=='I' || test[i]=='i' || test[i]=='O' || test[i]=='o' || test[i]=='U' || test[i]=='u'){
            vowels++;
        }
        if(test[i]==' ' && (i-1)>=0 && test[i-1]!=' '){
            valid_space++;
        }
    }
    if(test[test.size()-1]==' '){
        words = valid_space;
    }
    else{
        words= valid_space+1;
    }
    cout<<"Words  :"<<words<<endl;
    cout<<"Vowels  :"<<vowels<<endl;
}
