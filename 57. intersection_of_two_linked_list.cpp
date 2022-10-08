// Find the intersection point of two linked list

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
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

// length of linked list
int length(node *head){
    int l = 0;
    node* temp = head;

    while(temp != NULL){
        l++;
        temp = temp->next;
    }

    return l;
}

void intersect(node* &head1, node* &head2, int pos){

    node* temp1 = head1;
    pos--;
    while(pos--){
        temp1 = temp1->next;
    }

    node* temp2 = head2;
    while(temp2->next!=NULL){
        temp2 = temp2->next;
    }

    temp2->next = temp1;
}

int intersection(node* &head1, node* &head2){

    int l1 = length(head1);
    int l2 = length(head2);

    int d=0;
    node* ptr1;
    node* ptr2;

    if(l1>l2){
        d = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else{
        d = l2-l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while(d){
        ptr1 = ptr1->next;
        if(ptr1 == NULL){
            return -1;
        }
        d--;
    }

    while(ptr1 != NULL && ptr2 != NULL){

        if(ptr1 == ptr2){
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1;
}

// Intersection point of two linked list in another way
int intersection_linked_list(node* &head1, node* &head2){
    node* temp1 = head1;
    node* temp2 = head2;

    while(temp1 != temp2){
        if(temp1==NULL){
            temp1 = head2;
        }
        else{
            temp1 = temp1->next;
        }

        if(temp2==NULL){
            temp2 = head1;
        }
        else{
            temp2 = temp2->next;
        }
    }
    return temp1->data;
}

int main(){

    node* head1 = NULL;
    node* head2 = NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 6);
    insertAtTail(head2, 9);
    insertAtTail(head2, 10);

    intersect(head1, head2, 3);
    display(head1);
    display(head2);

    cout<<intersection(head1, head2)<<endl;
    cout<<intersection_linked_list(head1, head2)<<endl;

    return 0;
}