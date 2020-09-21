/*
______________________________________________________________________________________________________
Not Recommended at all. Perform this exercise as the practice only.
_______________________________________________________________________________________________
*/

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

    int element = -9;
    cout<<"\n\n";
    
    int res1=linear_search(start, element);
    res1==-1?cout<<"Element Not Found":cout<<"\nFound at Position: "<<res1<<" | Index: "<<res1-1;
    
    cout<<"\n\n";
    int res2=linear_search(start, element);
    res2==-1?cout<<"Element Not Found":cout<<"\nFound at Position: "<<res2<<" | Index: "<<res2-1;
    
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

int linear_search(Node* first, int element){

    if(first){
        if(first->data == element){
            // cout<<"\nNo swapping at all\n";
            return 1;
        }
        if(first->next->data == element){
            // cout<<"\nSwapping with first\n";
            int pos=2;
            Node *save = start->next;
            
            start->next = save->next;
            save->next = start;
            start = save;
            return pos;
        }
        // cout<<"\nRegular swapping with left element.\n";
        int pos=3;
        Node *t=start->next->next, *pt=start->next, *ppt=start;
        while(t){
            if(t->data==element){
                ppt->next = t;
                pt->next=t->next;
                t->next=pt;
                return pos;
            }
            ppt=pt;
            pt=t;
            t=t->next;
            pos++;
        }
        // cout<<" Not Found";
        return -1; 
    }
    // cout<<"Underflow";
    return -1;
}




