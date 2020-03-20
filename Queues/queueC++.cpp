#include<iostream>
#include<queue>
using namespace std;
void showQueue(queue <string>);
int main(){
    queue <string> Q;

    //ENQUEUE 
    
    Q.push("Hi");
    Q.push("I hope you having a good day.");
    Q.push("Take care!");

    //User defined func. to display the contents of Queue
    cout<<"Queue after insertion\n";
    showQueue(Q);
 
    //Built in function
    // cout<<Q.front();
    // cout<<Q.back();

    //Assignment to temporary variable
    string s=Q.front();
    
    //DEQUEUE
    Q.pop();
    Q.pop();
    cout<<"Queue after deletion\n";
    showQueue(Q);

    return 0;
}

void showQueue(queue <string> Q){

    /*

    ***
    Very Important 
    The Data Structurepassed here, totally preserve the contents as well as relationship between 
    elements but changes made here in this DS, will not be reflected back to calling function.
    ***

    */
    while(!Q.empty()){
        cout<<Q.front()<<"  ";
        Q.pop();  
    }
    cout<<"\n";
}
