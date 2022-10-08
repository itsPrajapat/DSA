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

    int length(Node* &head)
    {
        int cnt = 0;

        Node* temp = head;

        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }

        return cnt;
    }

    Node* reverseIterative(Node* &head){
        // base case
        if(head==NULL || head->next == NULL){
            return head;
        }

        Node* newHead = reverseIterative(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }

    Node* kReverse(Node* &head, int k, int len)
    {
        // base case
        if(head == NULL){
            return NULL;
        }
        if(len < k){
            return head;
        }

        Node* prev = NULL;
        Node* curr = head;
        Node* next;
        int count = 0;

        while(curr!=NULL && count < k)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        // int newLen = ; 

        if(next!=NULL){
            head->next = kReverse(next, k, len-k);
        }

        return prev;   
    }

    void removeDuplicates(Node* &head)
    {
        Node* prev = new Node(-1);
        Node* curr = head;
        Node* nextPtr;

        while(curr != NULL)
        {
            nextPtr = curr->next;
            if(curr->data != nextPtr->data)
            {
                prev->next = curr;
                curr = nextPtr;
                // nextPtr = nextPtr->next;
            }
            else{

            }
        }
    }


int main(){

    Node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 3);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    // int len = length(head);
    // Node* newNode = kReverse(head, 5, len);

    // display(newNode);
    
    return 0;
}