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

void printLinkedList(Node *head)
{
    Node *tmp = head;

    while (tmp)
    {
        cout << tmp->val << " ";
        tmp = tmp->Next;
    }
}

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp)
    {
        count++;
        tmp = tmp->Next;
    }
    return count;
}

void printMiddleValue(Node *head, int size)
{
    Node *tmp = head;

    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    int pos = 0;
    if (size % 2 == 1)
    {
        pos = (size / 2) + 1;
    }
    else
    {
        pos = size / 2;
    }

    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->Next;
    }
    if (size % 2 == 1)
    {
        cout << "Middle Value is = " << tmp->val;
    }
    else
    {
        cout << "Middle Value is = " << tmp->val << " " << tmp->Next->val;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;

        insertTail(head, tail, val);
    }

    printLinkedList(head);

    cout << endl
         << size(head);

    printMiddleValue(head, size(head));

    return 0;
}