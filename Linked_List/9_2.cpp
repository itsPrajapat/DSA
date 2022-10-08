#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Constructor
    Node(int val){
        data = val;
        next = NULL;
    }
};

 void insertAtTail(Node* &head, int data)
    {
        Node* tailNode = new Node(data);
        Node* temp = head;

        if(head==NULL){
            head = tailNode;
            return;
        }

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = tailNode;
    }

    void display(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }cout<<"NULL"<<endl;
    }


Node* merge(Node* &head1, Node* &head2)
{

    Node* newNode = NULL;
    Node* temp1 = head1;
    Node* temp2 = head2;

    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data == temp2->data)
        {
            insertAtTail(newNode, temp1->data);
            insertAtTail(newNode, temp2->data);
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else if(temp1->data < temp2->data){
            insertAtTail(newNode, temp1->data);
            temp1 = temp1->next;
        }
        else{
            insertAtTail(newNode, temp2->data);
            temp2 = temp2->next;
        }
    }

    while(temp1!=NULL){
        insertAtTail(newNode, temp1->data);
        temp1 = temp1->next;
    }
    while(temp2!=NULL){
        insertAtTail(newNode, temp2->data);
        temp2 = temp2->next;
    }

    return newNode;
}


int main(){


Node* head1 = NULL;
Node* head2 = NULL;

insertAtTail(head1, 1);
insertAtTail(head1, 2);
insertAtTail(head1, 4);
insertAtTail(head1, 6);
insertAtTail(head1, 5);
display(head1);

insertAtTail(head2, 1);
insertAtTail(head2, 2);
insertAtTail(head2, 3);
display(head2);

Node* head3 = merge(head1, head2);
display(head3);

    
    return 0;
}