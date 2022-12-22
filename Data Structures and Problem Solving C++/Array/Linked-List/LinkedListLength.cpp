#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;

    // Constructor Creation
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};
void insertAtTail(Node *&head, int val);
void insertAtHead(Node *&head, int val);
void display(Node *n);
int countLength(Node *&head);

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }

    temp->Next = newNode;
}

void insertAtHead(Node *&head, int val)
{
    // s1: newNode creation
    Node *newNode = new Node(val);
    // s2: Update of newNode->Next
    newNode->Next = head;
    // s3: Update of head
    head = newNode;
}

void display(Node *n)
{
    while (n != NULL)
    {
        cout << n->value;
        if (n->Next != NULL)
            cout << " -> ";
        n = n->Next;
    }
}

int countLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->Next;
    }

    return count;
}

int main()
{
    Node *head = NULL;

    int n;
    // Choice 1: Insertion at Head
    // Choice 2: Insertion at Tail
    // Choice 3: Insertion at a Certain Position
    cout << "Choice 1: Insertion at Head" << endl
         << "Choice 1: Insertion at Tail" << endl
         << "Choice 3: Exit" << endl;
    int choice = 2;
    while (choice == 1 || choice == 2)
    {
        cout << "Enter the Value: ";
        cin >> n;
        if (choice == 1)
            insertAtHead(head, n);
        else if (choice == 2)
            insertAtTail(head, n);
        cout << "Next Choice: ";
        cin >> choice;
    }

    cout << "Linked List: ";
    display(head);
    cout<<endl << "Length of the List: " << countLength(head) << endl;

    return 0;
}