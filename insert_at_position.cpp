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

void insertTail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;

    while (tmp->Next != NULL)
    {
        tmp = tmp->Next;
    }

    // Akn last node er next e
    tmp->Next = newNode;
}

void printLinkedList(Node *head)
{
    Node *tmp = head;
cout<<endl;
    cout << "Your Linked List: ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->Next;
    }
    cout << endl<<endl;
}

void insertAtPosition(Node *&head, int position, int val)
{
    Node *newNode = new Node(val);

    Node *tmp = head;

    for (int i = 1; i <= position - 1; i++)
    {
        tmp = tmp->Next;
    }
    newNode->Next = tmp->Next;
    tmp->Next = newNode;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout<<endl;
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at Position" << endl;
        cout << "Option 4: Terminate" << endl<<endl;
        int op;
        cin >> op;

        if (op == 1)
        {
            cout << "Please Enter Value: ";
            int val;
            cin >> val;
            insertTail(head, val);
        }
        else if (op == 2)
        {
            printLinkedList(head);
        }
        else if (op == 3)
        {
            int position, val;
            cout << "Please Enter Position: ";
            cin >> position;

            cout << "Please Enter Value: ";
            cin >> val;

            

            insertAtPosition(head, position, val);
        }
        else if (op == 4)
        {
            break;
        }
    }

    return 0;
}