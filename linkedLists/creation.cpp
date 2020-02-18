#include<iostream>
using namespace std;

//Self Referential Structure
struct Node{
    int data;
    Node *next;
};
Node *start=NULL, *rear=NULL;

//prototypes
Node * create(int);
void display(Node *);
void insert_at_end(int[],int);


int main(){
    int array[]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);
    insert_at_end(array,size);
    display(start);
}

void insert_at_end(int array[],int size){
    
    //linking with start & rear
    start=rear=create(array[0]);
    
    for(int i=1;i<size;i++){
        Node *temp;
        temp=create(array[i]);
        rear->next=temp;
        rear=temp;
    }
}

Node* create(int info){
    Node *temp;
    temp=new Node;
    temp->data=info;
    temp->next=NULL;
    return temp;
}

void display(Node * first){
    while(first!=NULL){
        cout<<first->data<<" | ";
        first=first->next;
    }
}