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
void inorder(Node *);
Node* build_tree(int, Node*);


int main(){
    int ele=90;
    int array[]={78,90,23,78,90,12,34,56,1,6,34,2};
    int size=sizeof(array)/sizeof(array[0]);
    
    root=build_tree(ele,root);
    //Root Ready...
    
    for(int i=0;i<size;i++){
      build_tree(array[i],root);
    }

    inorder(root);
    return 0;
}

void inorder(Node *np){
    if(np->lChild!=NULL){
        inorder(np->lChild);
    }

    cout<<np->data<<"  ";

    if(np->rChild!=NULL){
        inorder(np->rChild);
    }
}

 Node* build_tree(int key,Node* np){
    if(np==NULL){
        Node* temp=create_node(key);
        return temp;
    }
    if(np!=NULL){
        if(np->data==key){
            // cout<<"Exists Already";
            return np;
        }
        if(np->data<key){ 
                np->rChild=build_tree(key,np->rChild);
            }
        else { 
                np->lChild=build_tree(key,np->lChild);
            }
    }
   return np; 
}

Node* create_node(int n){
    Node* temp=new Node;
    temp->data=n;
    temp->lChild=temp->rChild=NULL;
}