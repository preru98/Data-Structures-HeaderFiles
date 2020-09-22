#include<iostream>
using namespace std;


struct Node{
    int data;
    Node *next;
};

Node* create_node(int);
void insert_at_end(int);
void display(Node*);
int linear_search(Node*, int);
void insert_at_beg(int);
void insert_after_pos(int, int);


Node *start=NULL, *rear=NULL;

int main(){
    int list[] = {4,-17,2,-9,1,110,2,6,1,9,10};
    int size =sizeof(list)/sizeof(list[0]);

    for(int i=0;i<size;i++){
        insert_at_end(list[i]);
    }
    display(start);

    insert_after_pos(0, 11);

    // int element = 2;
    cout<<"\n\n";
    
    // int res1=linear_search(start, element);
    // res1==-1?cout<<"Element Not Found":cout<<"\nFound at Position: "<<res1<<" | Index: "<<res1-1;
    // cout<<"\n\n";
    display(start);
    // cout<<"\n\n";
    // int res2=linear_search(start, element);
    // res2==-1?cout<<"Element Not Found":cout<<"\nFound at Position: "<<res2<<" | Index: "<<res2-1;
    
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

void insert_at_beg(int info){
    Node *new_node = create_node(info);
    new_node->next = start;
    start = new_node;
}

void insert_after_pos(int pos, int info){
    if(pos==0){
        cout<<"Insert at beginning\n";
        insert_at_beg(info);
        return;
    }
    cout<<"here";
    int pos_counter=1;
    Node *temp= start;
    while(temp){
        // cout<<pos_counter<<" | \n";
        if(pos==pos_counter){
            Node *new_node=create_node(info);
            new_node->next=temp->next;
            temp->next=new_node;
        }
        temp=temp->next;
        pos_counter++;
    }
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
            return 1;
        }
        else{
            int pos=2;
            Node *temp=start->next, *prev_temp=start;
            while(temp){
                if(temp->data == element){
                    cout<<"Moving to head";
                    prev_temp->next = temp->next;
                    temp->next=start;
                    start = temp;

                    return pos;
                }
                pos++;
                prev_temp=temp;
                temp=temp->next;
            }
            cout<<"Not Found";
            return -1;
        }
    }
    // cout<<"Underflow";
    return -1;
}




