#include<iostream>
using namespace std;


struct Node{
    int data;
    Node *next;
};

Node* create_node(int);
void insert_at_end(int);
void display(Node*);
int linear_search(Node* start, int);


Node *start=NULL, *rear=NULL;

int main(){
    int list[] = {4,-17,2,-9,1,110,2,6,1,9,10};
    int size =sizeof(list)/sizeof(list[0]);

    for(int i=0;i<size;i++){
        insert_at_end(list[i]);
    }
    display(start);
    int element = -4;
    cout<<"\n\n";
    linear_search(start, element)==-1?cout<<"Element Not Found":cout<<"\nFound at Position: "<<linear_search(start,element)<<" | Index: "<<linear_search(start,element)-1;
    return 0;
}

Node* create_node(int info){
    Node *new_node = new Node;
    new_node->data=info;
    new_node->next=NULL;
    return new_node;
}

void insert_at_end(int info){
    Node *new_node = create_node(info);
    
    if(start==NULL && rear==NULL){
        start = rear =new_node;
        return;
    }
    rear->next = new_node;
    rear=new_node;
}

void display(Node* start){
    while(start){
        cout<<start->data<<" | ";
        start=start->next;
    }
}

int linear_search(Node* start, int element){
    if(start){
        int pos=1, flag_found=0;
        while(start){
            if(start->data==element){
                return pos;
            }
            pos++;
            start=start->next;
        }
        // cout<<" Not Found";
        return -1; 
    }
    // cout<<"Underflow";
    return -1;
}




