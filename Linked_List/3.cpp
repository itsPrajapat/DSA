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

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next = n;
}

node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while(currptr!=NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

node* reverseIterative(node* &head){

    // base case
    if(head==NULL || head->next == NULL){
        return head;
    }

    node* newHead = reverseIterative(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

node* kReverse(node* &head, int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
int count = 0;
    while(currptr!=NULL && count<k){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }

    if(nextptr!=NULL){
         head->next = kReverse(nextptr, k);
    }
    return prevptr;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void removeDuplicates(node* &head){
    node* temp = head;
    while(temp!=NULL && temp->next!=NULL){
        if(temp->data == temp->next->data){
            temp->next = temp->next->next;
        }
        temp=temp->next;
    }
}

void merge(node* &head1, node* &head2){
    node* temp1 = head1;
    node* temp2 = head2;
}

int main(){

    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 3);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 7);
    display(head); 
    // node* newHead = reverseIterative(head);
    // node* newHead = kReverse(head, 4);
    removeDuplicates(head);
    display(head);
    
    return 0;
}