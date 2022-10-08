// Given the head of a linked list, rotate the list to the right by k places
// Input: head = {1,2,3,4,5,6,7} k=3;
// Output: {5,6,7,1,2,3,4} k=3;
/*
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructor
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{

    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

node *rotate(node *&head, int k)
{
    // edge cases
    if (head == NULL || head->next == NULL || k == 0)
    {
        return head;
    }

    // compute the length
    node *temp = head;
    int len = 1;
    while (temp->next != NULL)
    {
        len++;
        temp = temp->next;
    }

    // go till that made
    temp->next = head;
    k = k % len;
    k = len - k;
    while (k--)
    {
        temp = temp->next;
    }

    // make the node head and break connection
    head = temp->next;
    temp->next = NULL;

    return head;
}

int main()
{

    node *head = NULL;

    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    for (int i = 0; i < 7; i++)
    {
        insertAtTail(head, arr[i]);
    }
    display(head);

    node *newhead = rotate(head, 3);
    display(newhead);

    return 0;
} */





// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
// Input:   2->4->3
//          5->6->4

// Output   7->0->8
/*
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructor
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{

    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

node *addTwoNumebrs(node *&head1, node *&head2)
{

    node *dummyNode = new node(-1);
    node *temp = dummyNode;

    int carry = 0;
    while (head1 != NULL || head2 != NULL || carry != 0)
    {
        int sum = 0;

        if (head1 != NULL)
        {
            sum += head1->data;
            head1 = head1->next;
        }

        if (head2 != NULL)
        {
            sum += head2->data;
            head2 = head2->next;
        }

        sum += carry;
        carry = sum / 10;

        node *newNode = new node(sum % 10);
        temp->next = newNode;
        temp = temp->next;
    }
    return dummyNode->next;
}

int main()
{

    node *head1 = NULL;
    node *head2 = NULL;

    int arr1[] = {2, 4, 3};
    int arr2[] = {5, 6, 7, 9};

    for (int i = 0; i < 3; i++)
    {
        insertAtTail(head1, arr1[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        insertAtTail(head2, arr2[i]);
    }
    display(head1);
    display(head2);

    node *newhead = addTwoNumebrs(head1, head2);
    display(newhead);

    return 0;
}   */