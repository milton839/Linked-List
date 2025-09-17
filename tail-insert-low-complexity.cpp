#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *Next;

    Node(int val)
    {
        this->val = val;
        this->Next = NULL;
    }
};

void printLinkedList(Node *head)
{
    cout << "Print Linkedlist: ";
    while (head)
    {

        cout << head->val << " ";
        head = head->Next;
    }
    cout << endl;
}

int size(Node *head)
{
    int count = 0;
    while (head)
    {
        count++;
        head = head->Next;
    }
    return count;
}

void insertTail(Node *&head, Node *&tail, int val)
{
    //Time Complexity O(n) & Space Complexity O(1)
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->Next = newNode;
    tail = newNode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;

    head->Next = a;
    a->Next = b;
    b->Next = c;
    c->Next = d;

    printLinkedList(head);

    // cout << size(head);
    cout<<"Tail = "<<tail->val<<endl;

    insertTail(head, tail, 100);

    printLinkedList(head);

    cout<<"Tail = "<<tail->val<<endl;

    insertTail(head, tail, 100);

    printLinkedList(head);

    cout<<"Tail = "<<tail->val<<endl;
    return 0;
}