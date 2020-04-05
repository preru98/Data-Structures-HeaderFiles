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
Node* search(int);
void build_tree(int);


int main(){
    int ele=90;
    int array[]={78,90,23,78,90,12,34,56,1,6,34,2};
    int size=sizeof(array)/sizeof(array[0]);
    
    root=create_node(ele);
    //Root Ready...
    
    for(int i=0;i<size;i++){
      build_tree(array[i]);
    }
    
    Node* result=search(1);
    if(result){
        cout<<"Found :";
        cout<<result->data;
    }
    else{
        cout<<"Not found";
    }
    return 0;
}

Node* search(int key){
    Node* traverse=root;
    while(traverse){
        if(traverse->data==key){
            return traverse;
        }
        else if(traverse->data<key){
            traverse=traverse->rChild;
        }
        else{
            traverse=traverse->lChild;
        }
    }
    return NULL;
}

void build_tree(int key){
    Node *traverse=root, *tail=NULL,*newNode=NULL;
    while(traverse!=NULL){
        if(traverse->data==key){
            // cout<<"Exists Already";
            return;
        }
        tail=traverse;
        newNode=create_node(key);

        if(traverse->data<key){ 
            traverse=traverse->rChild;
        }
        else{
            traverse=traverse->lChild;
        }
    }
    if(tail->data<key){
        tail->rChild=newNode;
    }
    else{
        tail->lChild=newNode;
    }
}

Node* create_node(int n){
    Node* temp=new Node;
    temp->data=n;
    temp->lChild=temp->rChild=NULL;
}
