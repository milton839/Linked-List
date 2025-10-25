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

void insert_node(Node *&head, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    while (tmp->Next != NULL)
    {
        tmp = tmp->Next;
    }
    tmp->Next = newNode;
}

void printLinkedList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->Next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 5: Terminate" << endl;
        int option;
        cin >> option;

        if (option == 1)
        {
            int val;
            cin >> val;
            insert_node(head, val);
        }
        else if (option == 2)
        {
            cout << "Linked List: ";
            // printLinkedList(head);
            for (Node *i = head; i->Next != NULL; i = i->Next)
            {
                for (Node *j = i->Next; j != NULL; j = j->Next)
                {
                    if (i->val > j->val)
                    {
                        swap(i->val, j->val);
                    }
                }
            }
            printLinkedList(head);
            cout << endl;
        }
        else if (option == 5)
        {
            break;
        }
    }

    return 0;
}