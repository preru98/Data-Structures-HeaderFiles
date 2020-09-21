#include<iostream>
using namespace std;


struct Node{
    int data;
    Node *next;
};

Node* create_node(int);
void insert_at_beg(int);
void display(Node*);

Node *start=NULL, *rear=NULL;

int main(){
    int list[] = {4,7,2,9,1,0,2,6,9,10};
    int size =sizeof(list)/sizeof(list[0]);

    for(int i=0;i<size;i++){
        insert_at_beg(list[i]);
    }
    display(start);
    return 0;
}

Node* create_node(int info){
    Node *new_node = new Node;
    new_node->data=info;
    new_node->next=NULL;
    return new_node;
}

void insert_at_beg(int info){
    Node *new_node = create_node(info);
    new_node->next = start;
    start = new_node;
}

void display(Node* start){
    while(start){
        cout<<start->data<<" | ";
        start=start->next;
    }
}




