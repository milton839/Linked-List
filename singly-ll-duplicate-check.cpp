#include <bits/stdc++.h>
#include <unordered_set>

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

void insertNodeAtTail(Node *&head, int val){
    Node *newNode = new Node(val);
    Node *tmp = head;
    
    if (tmp == NULL)
    {
        head = newNode;
        return;
    }
    
    while(tmp->Next != NULL){
        tmp = tmp->Next;
    }

    tmp->Next = newNode;
    
}

void printLinkedList(Node *head){
    Node *tmp = head;
    cout<<"Print Linked List:"<<endl;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->Next;
    }
    cout<<endl;
}

void duplicateElementCheck(Node* head){
    // Time Complexity O(n^2) & Space Complexity O(1)
    // Node* tmp = head;
    // while(tmp){
    //     Node* runner = tmp->Next;
    //     while(runner){
    //         if (tmp->val ==runner->val)
    //         {
    //             cout<<"Duplicate Element Available";
    //             return;
    //         }
    //         runner=runner->Next;
            
    //     }
    //     tmp=tmp->Next;
    // }
    // cout<<"Duplicate Element not Available";


    unordered_set<int> seen;
    Node* curr = head;
    while (curr) {
        if (seen.count(curr->val)) {
            cout<<"Duplicate Element Available"; // Duplicate found
            return;
        }
        seen.insert(curr->val);
        curr = curr->Next;
    }
    cout<<"Duplicate Element not Available"; // No duplicates


    
}

int main()
{
    Node *head = NULL;

    while(true){
        cout<<endl;
        cout<<"Option 1: Insert Node at Tail Position"<<endl;
        cout<<"Option 2: Print Linked List"<<endl;
        cout<<"Option 3: Duplicate Element Check"<<endl;
        cout<<"Option 4: Terminate"<<endl<<endl;


        int option;
        cin>> option;

        if(option == 1){
            int val;
            cout<<"Please Enter Your Value: ";
            cin>>val;
            insertNodeAtTail(head, val);
        }
        else if(option == 2){
            printLinkedList(head);
        }
        else if(option == 3){
            duplicateElementCheck(head);
        }
        else if(option == 4){
            break;
        }
    }
    return 0;
}