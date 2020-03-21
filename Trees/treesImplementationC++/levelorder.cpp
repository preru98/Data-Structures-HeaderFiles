#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node *lChild;
    Node* rChild;
};
Node* root =NULL; 

Node* create_node(int n);
void levelorder(Node *np);
void build_tree();

queue<Node*>Q;

int main(){
    int ele;
    cout<<"Enter Root Element";
    cin>>ele;
    cout<<"Creating Root...";
    root=create_node(ele);
    Q.push(root);
    //Root Ready...
    
    while(!Q.empty()){
      build_tree();
    }

    levelorder(root);
    return 0;
}

void levelorder(Node *np){
    queue <Node*> L;
    Node *temp,*ptr; 
    
    cout<<np->data<<"  ";
    L.push(np);

    while(!L.empty()){
        ptr=L.front();
        L.pop();
        if(ptr->lChild){
            temp=ptr->lChild;
            cout<<temp->data<<"  ";
            L.push(temp);
        }
        if(ptr->rChild){
            temp=ptr->rChild;
            cout<<temp->data<<"  ";
            L.push(temp);
        }
    }
}

void build_tree(){
    Node *temp,*ptr; 
    int lc,rc;

    ptr=Q.front();
    Q.pop();

    cout<<"LChild of "<<ptr->data<<" : ";
    cin>>lc;
    if(lc!=-1){
        temp=create_node(lc);
        ptr->lChild=temp;
        Q.push(temp);
    }
        
    cout<<"RChild of "<<ptr->data<<" : ";
    cin>>rc;
    if(rc!=-1){
        temp=create_node(rc);
        ptr->rChild=temp;
        Q.push(temp);
    }
}

Node* create_node(int n){
    Node* temp=new Node;
    temp->data=n;
    temp->lChild=temp->rChild=NULL;
}