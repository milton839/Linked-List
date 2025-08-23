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

    // Last node add kore dilam
    tmp->Next = newNode;
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
    }

    newNode->Next = tmp->Next;
    tmp->Next = newNode;
}

void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);

    newNode->Next = head;
    head = newNode;
}


void deleteNodeAtPosition(Node *head, int position){
    Node *tmp = head;

    for (int i = 0; i < position-1; i++)
    {
        tmp = tmp->Next;
    }

    Node *deleteNode = tmp->Next;

    tmp->Next = tmp->Next->Next;
    delete deleteNode;
    
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout<<endl;
        cout << "Option 1 : Insert for Tail " << endl;
        cout << "Option 2 : Print Linked List " << endl;
        cout << "Option 3 : Insert Node at position " << endl;
        cout << "Option 4 : Insert at Head " << endl;
        cout << "Option 5 : Delete Node " << endl;
        cout << "Option 6 : Terminate " << endl<<endl;

        int option;
        cin >> option;

        if (option == 1)
        {
            cout<<"Please Enter a Value: ";
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
            cout<<"Please Enter a Value: ";
            int val;
            cin >> val;
            insertAtHead(head, val);
        }
        else if(option == 5){
            cout<<"Please Enter a Position: ";
            int position;
            cin>>position;
            deleteNodeAtPosition(head, position);
        }
        else if (option == 6)
        {
            break;
        }
    }
    return 0;
}