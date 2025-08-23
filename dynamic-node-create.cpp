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
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    head->Next=second;
    second->Next=third;

    cout<<head->val<<endl;
    cout<<head->Next->val<<endl;
    cout<<head->Next->Next->val<<endl;
    return 0;
}