#include<iostream>
#include<stack>
using namespace std;

void display(stack<string> S);

int main(){
    
    stack<string> S;
    
    //PUSH 
    S.push("Hey!");
    S.push("How are you doing?");
    S.push("I wish you luck :)");

    //Display
    cout<<"Stack after insertion\n";
    display(S);

    //TOP element
    cout<<S.top();
    
    //POP
    S.pop();
    S.pop();

    cout<<"Stack after deletion\n";
    display(S);
    
    return 0;
}
void display(stack<string>S){
    while(!S.empty()){
        cout<<S.top()<<"  ";
        S.pop();
    }

}