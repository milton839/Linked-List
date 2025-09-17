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

void insertTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }

    tail->Next = newNode;
    tail = newNode;
}

void printLinkedList(Node *tmp)
{
    if (tmp == NULL)
    {
        return;
    }

     // Print Normally
     cout<<tmp->val<<" ";
    printLinkedList(tmp->Next);
    
    // Print Reverse system
    // printLinkedList(tmp->Next);
    // cout<<tmp->val<<" ";

    
}

void printLinkedListReversely(Node *tmp)
{
    if (tmp == NULL)
    {
        return;
    }

   
    
    // Print Reverse system
    printLinkedListReversely(tmp->Next);
    cout<<tmp->val<<" ";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;

    // Total Time Complexity O(n) X O(1) = O(n)
    while (true) // Time Complexity O(n)
    {
        cin >> val;

        if (val == -1)
            break;

        insertTail(head, tail, val); // Time Complexity O(1)
    }
    cout<<"Print Linkedlist: ";
    printLinkedList(head);

    cout<<endl;

    cout<<"Print Linkedlist Reverly: ";
    printLinkedListReversely(head);

    return 0;
}