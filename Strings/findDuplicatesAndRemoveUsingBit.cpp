//Only small letters | O(1) Space & O(n) Time Complexity
#include<iostream>
#include<string>
using namespace std;

string find_duplicates_and_remove(string);

int main(){
    string test = "repeat repeat";
    cout<<endl;
    cout<<find_duplicates_and_remove(test);
    return 0;
}

string find_duplicates_and_remove(string test){
    
    int table = 0, support=1;
    string result="";
    for(int i=0; i<test.size(); i++){
        support = 1;
        support = support<<(int(test[i])-97);
        //masking
        if(!(support & table)){
            result+=test[i];
            //merging
            table = support | table;
        }
    }
    return result;
}

