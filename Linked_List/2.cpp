#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    // constructor
    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    if(head!=NULL){
        head->prev = n;
    }
    head = n;
}

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    n->prev = temp;
    temp->next = n;
}

void deleteAtHead(node* &head){
    if(head==NULL){
        return;
    }
    node* todelete = head;
    head = head->next;
    head->prev = NULL;
    delete todelete;
}

void deletion(node* &head, int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    int count = 1;
    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }
    node* todelete = temp;
    temp->prev->next = temp->next;
    if(temp->next != NULL){
        temp->next->prev = temp->prev;
    }
    delete todelete;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}


  int length(node* &l){
        int len = 0;
        node* temp = l;

        while(temp!=nullptr){
            temp = temp->next;
            len++;
        }
        return len;
    }

    node* addTwoNumbers(node* &l1, node* &l2) {
        node* temp1 = l1;
            node* temp2 = l2;

        int len1 = length(l1);
        int len2 = length(l2);

        if(len2<len1){
            int temp = len2;
            len2 = len1;
            len1 = temp;

            temp1 = l2;
            temp2 = l1;
        }

        node* temp = new node(-1);
        node* head = temp;

        int div = 0;
        int carry;
        while(temp1!=nullptr){
            int top1 = temp1->data;
            int top2 = temp2->data;

            int sum = top1+top2+div;
            div = sum/10;
            carry = sum%10;

            head->next = new node(carry);

            temp1 = temp1->next;
            temp2 = temp2->next;
            head=head->next; 
        }

        while(temp2!=NULL){
            int sum = temp2->data+div;
            div = sum/10;
            carry = sum%10;

            head->next = new node(carry);

            temp2 = temp2->next;
            head=head->next; 
        }
        if(div>0)
        head->next = new node(div);
        
        return temp->next;
    }

  

int main(){

    node* head = NULL;

    insertAtHead(head, 9);
    insertAtTail(head, 9);
    insertAtTail(head, 9);
    insertAtHead(head, 9);
    insertAtTail(head, 9);
    insertAtTail(head, 9);
    insertAtTail(head, 9);
    // deleteAtHead(head);
    // deletion(head, 2);
    display(head);

    
    return 0;
}