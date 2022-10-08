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

    Node* addition(Node* &head1, Node* &head2)
    {
        Node* newHead1 = reverseIterative(head1);
        Node* newHead2 = reverseIterative(head2);


        int carry = 0;
        
        Node* head3 = NULL;

        while(newHead1 != NULL && newHead2 != NULL){
            int val =  newHead1->data + newHead2->data + carry ;
            int rem = val%10;
            int div = val/10;

            insertAtTail(head3, rem);
            carry = div;

            newHead1 = newHead1->next;
            newHead2 = newHead2->next;
        }

        while(newHead2!=NULL){

            int val =  newHead2->data + carry ;
            int rem = val%10;
            int div = val/10;

            insertAtTail(head3, rem);
            carry = div;

            newHead2 = newHead2->next;
        }

        while(newHead1!=NULL){

            int val =  newHead1->data + carry ;
            int rem = val%10;
            int div = val/10;

            insertAtTail(head3, rem);
            carry = div;

            newHead1 = newHead1->next;
        }

        return head3;

        
    }

int main(){

    Node* head1 = NULL;
    Node* head2 = NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);

    insertAtTail(head2, 1);
    insertAtTail(head2, 2);
    insertAtTail(head2, 3);
    // insertAtTail(head2, 8);

    display(head1);
    display(head2);

    Node* newNode1 = addition(head1, head2);
    // Node* newNode2 = reverseIt(newNode);

    Node* reversed = reverseIterative(newNode1);
    display(reversed);
    
    
    return 0;
}