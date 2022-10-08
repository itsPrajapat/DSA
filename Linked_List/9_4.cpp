#include<iostream>
using namespace std;

class Node{
        public:
        int data;
        Node* next;

        // constructor
        Node(int val){
            data = val;
            next = NULL;
        }
    };

    // Insert at Tail
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

    // Display function 
    void display(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }cout<<"NULL"<<endl;
    }

    int length(Node* &head){
        Node* temp = head;

        int len = 0;

        while(temp!=NULL){
            temp=temp->next;
            len++;
        }

        return len;
    }

    void removeNthFromLast(Node* &head, int n)
    {
        int len = length(head);
        if(n > len){
            cout<<"Not Possible"<<endl;
            return;
        }

        Node* temp = head;

        int x = len - n;

        if(x==0){
            head = temp->next;
            delete temp;
            return;
        }
        while(x>1)
        {
            temp = temp->next;
            x--;
        }

        Node* todelete = temp->next;
        temp->next = temp->next->next;

        delete todelete;
    }

int main(){

    Node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);



    display(head);

    removeNthFromLast(head, 2);
    display(head);
    
    return 0;
}