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
Node* return_pointer(int);
void display(Node *);
void insert_at_end_array(int[],int);
int print_ele(int);


int main(){
    int array[]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);
    insert_at_end_array(array,size);
    display(start);
    cout<<"Node found at address :"<<return_pointer(2);
    cout<<"Element found at position :"<<print_ele(2);
}


void insert_at_end_array(int array[],int size){
    
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

Node* return_pointer(int pos){
    if(pos==0)
        return NULL;
    Node *traverse=start;
    for(int i=1;i<pos;i++){
        traverse=traverse->next;
    }
    return traverse;
}


int print_ele(int pos){
    Node *traverse=start;
    for(int i=1;i<pos;i++){
        traverse=traverse->next;
    }
    return traverse->data;
}



