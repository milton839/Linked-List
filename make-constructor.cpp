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
    Node a(10), b(20);
    a.Next = &b;
    cout << a.val << endl;
    cout << b.val<<endl;
    cout << a.Next->val;
    return 0;
}