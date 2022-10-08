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

    void cycleMake(Node* &head)
    {
        Node* temp = head;

        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = head->next;
    }

    bool cycleDetection(Node* &head)
    {
        Node* slow = head;
        Node* fast = head->next;

        while(fast!=NULL && fast->next != NULL){

            if(slow == fast){
                return true;
            }
            
            slow = slow->next;
            fast = fast->next->next;
        }
        return false;
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

    cycleMake(head);
    cout<<cycleDetection(head);
    
    return 0;
}