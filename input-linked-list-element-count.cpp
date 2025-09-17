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
        // cout << "Node Inserted Successfully" << endl;
        return;
    }

    Node *tmp = head;

    while (tmp->Next != NULL)
    {
        tmp = tmp->Next;
    }

    // Last node add kore dilam
    tmp->Next = newNode;
    // cout << "Node Inserted Successfully" << endl;
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

int main()
{
    Node *head = NULL;
    int val;
    int count = 0;
    while(true){
        cin>>val;
        if(val == -1){
            break;
        }
        count++;
        insertTail(head, val);
    }

    printLinkedList(head);

    cout<<"Total Element: "<<count<<endl;
    return 0;
}