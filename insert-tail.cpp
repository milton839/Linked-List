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

    cout << "Your Linked List: ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->Next;
    }
    cout<<endl;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Terminate" << endl;
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
        else if(op == 3){
            break;
        }
    }

    return 0;
}