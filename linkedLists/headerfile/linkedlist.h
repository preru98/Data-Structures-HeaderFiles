#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *start=NULL, *rear=NULL;

Node * create(int);
Node* search_node(Node *,int);
int count(Node *);
int sum(Node *);
int max_node(Node *);
int min_node(Node *);
void display(Node *);
void insert_at_end_array(int[],int);
void insert_at_beg_array(int[],int);
void insert_at_pos(int, int);
void delete_at_pos(int);
void insert_at_beg(int);
void insert_at_end(int);
void delete_at_beg();
void delete_at_end();
void insert_node_in_sorted(int);
bool check_sort();
void reverse();
void remove_dupliate_from_sorted();


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


void insert_at_end(int info){
    Node *temp=create(info);
    rear->next=temp;
    rear=temp;
}


void insert_at_beg_array(int array[],int size){
    
    //linking with start & rear
    start=create(array[0]);
    
    for(int i=1;i<size;i++){
        Node *temp;
        temp=create(array[i]);
        temp->next=start;
        start=temp;
    }
}


void insert_at_beg(int info){
    Node *temp=create(info);
    temp->next=start;
    start=temp;
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


int count(Node* first){
    int counter=0;
    while(first!=NULL){
        counter++;
        first=first->next;
    }
    return counter;
}


void delete_at_beg(){
    if(start==NULL){
       cout<<"Underflow";
       return;
    }
    else{
        Node *temp;
        temp=start;
        start=start->next;
        delete temp;
    }
}


void delete_at_end(){
    if(start==NULL){
       cout<<"Underflow";
       return;
    }
    else{   
        Node *temp;
        temp=rear;
        Node *traverse=start;
        while(traverse!=NULL){
            if(traverse->next==rear){
                rear=traverse;
                traverse->next=NULL;
            }
            traverse=traverse->next;
        }
        delete temp;
    }
}


int sum(Node* first){
    int res=0;
    while(first!=NULL){
        res+=first->data;
        first=first->next;
    }
    return res;
}


int max_node(Node* traverse){
    int max=INT32_MIN;
    while(traverse!=NULL){
        if(max<traverse->data){
            max=traverse->data;
        }
        traverse=traverse->next;
    }
    return max;
}


int min_node(Node* traverse){
    int min=INT32_MAX;
    while(traverse!=NULL){
        if(min>traverse->data){
            min=traverse->data;
        }
        traverse=traverse->next;
    }
    return min;
}


Node* search_node(Node* traverse, int key){

    while(traverse!=NULL){
        if(key==traverse->data){
            return traverse;
        }
        traverse=traverse->next;
    }
    return NULL;
}


void insert_at_pos(int pos, int info){
    int total=count(start);
    cout<<total;
    if(pos>total && pos!=1){
        cout<<"invalid Position";
        return ;
    }
    else{
        if(pos==1){
            insert_at_beg(info);
        }
        else{
            Node *temp=create(info);
            Node *traverse=start;
            for(int i=1;i<pos-1;i++){
                traverse=traverse->next;
            }
            temp->next=traverse->next;
            traverse->next=temp;
        }
    } 
}


void delete_at_pos(int pos){
    if(start==NULL){
       cout<<"Underflow";
       return;
    }
    else{
        if(pos==1){
        delete_at_beg();
        display(start);
        }
    
        else{
            Node *traverse=start;
            Node *save;

            for(int i=1;i<pos-1;i++){
                traverse=traverse->next;
            }
            save=traverse->next;
            traverse->next=save->next;
            delete save;
            display(start);
        }
    }  
}


void insert_node_in_sorted(int info){
    
    if(info>rear->data){
        insert_at_end(info);  
    }
    else if(info<start->data){
        insert_at_beg(info);
    }
    else{
        Node* temp=create(info);
        Node* traverse=start;
        Node* save=NULL;
        while(traverse!=NULL){
            if(info<traverse->data){
                temp->next=save->next;
                save->next=temp;
                break;
            }
            save=traverse;
            traverse=traverse->next;
        }
    }  
}


bool check_sort(){
    int x=INT32_MIN;
    Node *traverse=start;

    while(traverse!=NULL){
        if(x<=traverse->data){
            x=traverse->data;
            traverse=traverse->next;
        }
        else{
            return false;
        }
    }
    return true;
}

void remove_dupliate_from_sorted(){
    Node *traverse=start, *save=NULL;

    while(traverse!=NULL){
        
        save=traverse;
        traverse=traverse->next;
    }
}


