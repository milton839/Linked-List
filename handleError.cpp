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
        cout << "Node Inserted Successfully" << endl;
        return;
    }

    Node *tmp = head;

    while (tmp->Next != NULL)
    {
        tmp = tmp->Next;
    }

    // Last node add kore dilam
    tmp->Next = newNode;
    cout << "Node Inserted Successfully" << endl;
}

void printLinkedList(Node *head)
{
    Node *tmp = head;

    cout << endl;
    cout << "Print Linked List: " << endl;
    while (tmp != NULL)
    {

        cout << tmp->val << " ";
        tmp = tmp->Next;
    }
    cout << endl
         << endl;
}

void insertAtPosition(Node *head, int position, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 0; i < position - 1; i++)
    {
        tmp = tmp->Next;
        if (tmp == NULL)
        {
            cout << "Invalid Index" << endl
                 << endl;
            return;
        }
    }

    newNode->Next = tmp->Next;
    tmp->Next = newNode;
    cout << "Node Inserted Successfully at position " << position << endl;
}

void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);

    newNode->Next = head;
    head = newNode;
    cout << "Head Node Inserted Successfully" << endl;
}

void deleteNodeAtPosition(Node *head, int position)
{
    Node *tmp = head;

    for (int i = 0; i < position - 1; i++)
    {
        tmp = tmp->Next;
        if (tmp == NULL)
        {
            cout << "Invalid Index" << endl
                 << endl;
            return;
        }
    }

    if (tmp->Next == NULL)
    {
        cout << "Invalid Index" << endl
             << endl;
        return;
    }

    Node *deleteNode = tmp->Next;

    tmp->Next = tmp->Next->Next;
    delete deleteNode;
    cout << "Position " << position << " Node Deleted Successfully" << endl;
}

void deleteHeadNode(Node *&head)
{

    if (head == NULL)
    {
        cout << "Head Node is not available" << endl
             << endl;
        return;
    }
    Node *deleteNode = head;

    head = head->Next;
    delete deleteNode;
    cout << "Head Node Deleted Successfully" << endl;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << endl;
        cout << "Option 1 : Insert for Tail " << endl;         // Done
        cout << "Option 2 : Print Linked List " << endl;       // Done
        cout << "Option 3 : Insert Node at position " << endl; // Done
        cout << "Option 4 : Insert at Head " << endl;          // Done
        cout << "Option 5 : Delete Node " << endl;             // Done
        cout << "Option 6 : Delete Head Node " << endl;        // Done
        cout << "Option 7 : Terminate " << endl
             << endl;

        int option;
        cin >> option;

        if (option == 1)
        {
            cout << "Please Enter a Value: ";
            int val;
            cin >> val;
            insertTail(head, val);
        }
        else if (option == 2)
        {
            printLinkedList(head);
        }
        else if (option == 3)
        {
            cout << "Please Enter a Position: ";
            int position;
            cin >> position;

            cout << "Please Enter a Value: ";
            int val;
            cin >> val;
            if (position == 0)
            {
                insertAtHead(head, val);
            }
            else
            {
                insertAtPosition(head, position, val);
            }
        }
        else if (option == 4)
        {
            cout << "Please Enter a Value: ";
            int val;
            cin >> val;
            insertAtHead(head, val);
        }
        else if (option == 5)
        {
            cout << "Please Enter a Position: ";
            int position;
            cin >> position;

            if (position == 0)
            {
                deleteHeadNode(head);
            }

            else
            {
                deleteNodeAtPosition(head, position);
            }
        }
        else if (option == 6)
        {
            deleteHeadNode(head);
        }
        else if (option == 7)
        {
            break;
        }
    }
    return 0;
}