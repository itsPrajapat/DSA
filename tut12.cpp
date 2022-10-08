#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    // constructor
    node(int val){
        data = val;
        next = NULL;
    }
};

// display
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }cout<<"NULL";cout<<endl;
}

// insert at head
void InsertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

// insert at tail
void InsertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }temp->next = n;
}

// delete at head
void deleteAtHead(node* &head){

    node* todelete = head;
    head = head->next;

    delete todelete;
}

// deletion
void deletion(node* &head, int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}


int main(){

    node* head = NULL;
    InsertAtTail(head, 5);
    InsertAtTail(head, 6);
    InsertAtHead(head, 1);
    InsertAtHead(head, 2);
    InsertAtHead(head, 3);
    InsertAtHead(head, 4);
    deletion(head, 2);
    display(head);

    return 0;
}