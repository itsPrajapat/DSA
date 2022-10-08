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

    void insertAtHead(Node* &head, int data){
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

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

    void insertAtGivenIndex(Node* &head, int index, int data)
    {
        Node* newNode = new Node(data);

        Node* temp1 = head;
        Node* temp2 = head->next;
        if(index==0){
            insertAtHead(head, data);
        }
        while(index>0)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
            index--;
        }
        temp1->next = newNode;
        newNode->next = temp2;
    }

    void deletionAtHead(Node* &head)
    {
        Node* todelete = head;
        head = head->next;
        delete todelete;
    }
    
    void deletionAtTail(Node* &head)
    {
        Node* temp = head;
        while(temp->next->next!=NULL){
            temp= temp->next;
        }

        Node* todelete = temp->next;
        temp->next = NULL;
        delete todelete;
    }

    void display(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }cout<<"NULL"<<endl;
    }

int main(){

    Node* head = NULL;

    insertAtHead(head, 7);
    insertAtHead(head, 6);
    insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtTail(head, 8);
    insertAtGivenIndex(head, 2, 6);
    deletionAtHead(head);
    deletionAtTail(head);

    display(head);
    
    return 0;
}