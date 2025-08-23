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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->Next = a;
    a->Next = b;
    b->Next = c;
    c->Next = d;

    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->Next;
    }

    temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->Next;
    }
    
    return 0;
}