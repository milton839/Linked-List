#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void printMiddle(Node *head)
{ // Time Complexity O(n) & Space Complexity O(1)
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    Node *slow = head;
    Node *fast = head;
    Node *prev = NULL;

    // Move fast by 2 and slow by 1
    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    // If length is odd -> slow points to middle
    if (fast != NULL)
    {
        cout << "Middle element: " << slow->data << endl;
    }
    // If length is even -> prev and slow are the two middle nodes
    else
    {
        cout << "Middle elements: " << prev->data << " " << slow->data << endl;
    }
}

// Helper function to insert at end
void insertEnd(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main()
{
    Node *head = NULL;
    int n, val;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        insertEnd(head, val);
    }

    printMiddle(head);
    return 0;
}
