#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node* create_node(int);
void display(Node*);
void insert_in_sorted(int);

Node *start=NULL, *rear=NULL;

int main(){
    int list[] = {4,-7,2,9,1,0,2,6,9,10};
    int size =sizeof(list)/sizeof(list[0]);

    for(int i=0;i<size;i++){
        insert_in_sorted(list[i]);
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


void display(Node* start){
    while(start){
        cout<<start->data<<" | ";
        start=start->next;
    }
}

void insert_in_sorted(int info){
    Node *new_node = create_node(info);
    if(start){
        if(start->data>info){
            //Insert in the beginning
            new_node->next=start;
            start=new_node;
            return;
        }
        Node *traverse=start->next, *prev=start;
        while(traverse){
            if(traverse->data > info){;
                new_node->next = traverse;
                prev->next=new_node;
                return;
            }
            prev=traverse;
            traverse=traverse->next;
        }
        //Node will be largest node in the list
        prev->next = new_node;
        rear=new_node;
        return;
    }
    //empty list
    start= rear =new_node; 
}



