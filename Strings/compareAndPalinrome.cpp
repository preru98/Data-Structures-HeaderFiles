#include<iostream>
#include<string>
#include<algorithm> //transform

using namespace std;
bool compare_string(string, string);
bool palindrome(string);
bool compare_using_function(string, string);
int compare_dictionary(string, string);

int main(){
    string test = "Level Is There!";
    string random_string = "LeveL"; 
    cout<<compare_string(test, test);
    cout<<"\n\n"<<palindrome(random_string);
    cout<<"\n\n"<<compare_using_function(test, random_string);
    int res = compare_dictionary(test, random_string);
    if(res){
        res>0 ? cout<<test<<" come Later than "<<random_string : cout<<test<<" comes sooner than "<<random_string;
    }
    else{
        cout<<"Both are equal strings";
    }
    return 0;
}

bool compare_string(string a, string b){
    if(a.size() == b.size()){
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
    }
    return false;
}
bool palindrome(string a){
    for(int i=0, j=a.size()-1;i<j;i++, j--){
        if(a[i]!=a[j]){
            return false;
        }
    }
    return true;
}
bool compare_using_function(string a, string b){
    if(a.compare(b)){
        return false;
    }
    return true;
}

int compare_dictionary(string a, string b){
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    return a.compare(b);
}

