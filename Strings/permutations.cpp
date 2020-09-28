#include<iostream>
#include<string>  

using namespace std;

void perm(string, int=0);

int main(){
    string test = "ABC";
    perm(test);
    return 0;
}

void perm(string test, int k){
    static string result = test;
    static int* aux = new int [test.size()];
    if(k==test.size()){
        cout<<result<<endl;
        return;
    }
    for(int i=0 ; i<test.size();i++){
        if(aux[i]==0){
            result[k]=test[i];
            aux[i]=1;
            perm(test, k+1);             //recursion
            aux[i]=0;                    //backtrack
        }
    }
}