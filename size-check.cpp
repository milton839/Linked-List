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

void insertNode(Node* &head, int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* tmp = head;
    while (tmp->Next != NULL)
    {
        tmp = tmp->Next;
    }
    tmp->Next = newNode;
}

void printLinkedList(Node* head){
    Node* tmp = head;

    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->Next;
    }
}

int sizeCheck(Node* head){
    Node* tmp = head;
    int count = 0;
    while(tmp != NULL){
        count++;
        tmp = tmp->Next;
    }

    return count;
}

int main()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;

    Node* head2 = NULL;
    Node* tail2 = NULL;

    while(true){
        cout<<"Option 1: Insert Head1 Value"<<endl;
        cout<<"Option 2: Insert Head2 Value"<<endl;
        cout<<"Option 3: Print LinkedList Value"<<endl;
        cout<<"Option 4: LinkedList Size"<<endl;
        cout<<"Option 5: Close the program"<<endl;
        int option;
        cin>>option;

        if(option == 1){
            cout<<"Enter LinkedList value: ";
            int val;
            cin>>val;
            insertNode(head1, val);
        }
        else if(option == 2){
            cout<<"Enter LinkedList value: ";
            int val;
            cin>>val;
            insertNode(head2, val);
        }
        else if(option == 3){
            cout<<"Linked List1: ";
            printLinkedList(head1);
            cout<<endl<<"Linked List2: ";
            printLinkedList(head2);
            cout<<endl;
        }
        else if(option == 4){
            int size1 = sizeCheck(head1);
            int size2 = sizeCheck(head2);
            if(size1 == size2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(option == 5){
            break;
        }
    }
    return 0;
}