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

struct Test
{
    int position[1000];
};

void insertAtTail(Node *&head, int val);
void insertAtHead(Node *&head, int val);
void display(Node *n);
int countLength(Node *&head);
void insertionAtSpecificPosition(Node *&head, int pos, int val);
int SearchByValueUique(Node *&head, int key);
void SearchByValueDuplicate(Node *&head, int key);

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

void insertionAtSpecificPosition(Node *&head, int pos, int val)
{
    int i = 0;
    Node *temp = head;
    while (i < pos - 2)
    {
        temp = temp->Next;
        i++;
    }
    Node *newnode = new Node(val);
    newnode->Next = temp->Next;
    temp->Next = newnode;
}

int SearchByValueUique(Node *&head, int key)
{
    Node *temp = head;
    int count = 1;
    if (temp == NULL)
    {
        return -1;
    }

    while (temp->value != key)
    {
        if (temp->Next == NULL)
        {
            return -1;
        }
        temp = temp->Next;
        count++;
    }
    return count;
}

void SearchByValueDuplicate(Node *&head, int key)
{
    Node *temp = head;
    int size;
    size = countLength(head);
    int position[size + 1], k = 1;
    int count = 1;
    int flag = 0;

    while (temp != NULL)
    {
        if (temp->value == key)
        {
            // cout << count << " ";
            position[k] = count;
            k++;
            flag = 1;
        }
        temp = temp->Next;
        count++;
    }

    if (flag == 0)
        cout << "The Searched Value is not yet in the List" << endl;
    else
    {
        position[0] = k;
        cout << "The number is at Poistion: ";
        for (int i = 0; i < position[0]; i++)
        {
            cout << position[i];
            if (i < position[0] - 1)
                cout << ",";
        }
        cout << endl;
    }
}

Test SearchByValueDuplicateReturn(Node *&head, int key)
{
    Node *temp = head;
    Test T;
    int k = 1;
    int count = 1;

    while (temp != NULL)
    {
        if (temp->value == key)
        {
            // cout << count << " ";
            T.position[k] = count;
            k++;
        }
        temp = temp->Next;
        count++;
    }
    T.position[0] = k;
    return T;
}

int main()
{
    Node *head = NULL;

    int n, positon;
    // Choice 1: Insertion at Head
    // Choice 2: Insertion at Tail
    // Choice 3: Insertion at a Certain Position
    // Choice 4: Search a value (Unique List)
    // Choice 5: Search a value (Duplicateion enabled List)
    // Choice 0: Exit
    cout << "Choice 1: Insertion at Head" << endl
         << "Choice 2: Insertion at Tail" << endl
         << "Choice 3: Insertion at a Certain Position" << endl
         << "Choice 4: Search a value (Unique List)" << endl
         << "Choice 5: Search a value (Duplicateion enabled List)" << endl
         << "Choice 0: Exit" << endl;

    int choice;
    cout << "Next Choice: ";
    cin >> choice;
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the Value: ";
            cin >> n;
            insertAtHead(head, n);
            break;
        case 2:
            cout << "Enter the Value: ";
            cin >> n;
            insertAtTail(head, n);
            break;
        case 3:
            cout << "Enter the Desred Position: ";
            cin >> positon;
            cout << "Enter the Value: ";
            cin >> n;
            insertionAtSpecificPosition(head, positon, n);
            break;
        case 4:
            cout << "Enter the Value to Search: ";
            cin >> n;
            positon = SearchByValueUique(head, n);
            if (positon != -1)
            {
                cout << "The Number is at Position: " << positon << endl;
            }
            else
            {
                cout << "The number is not yet in the list" << endl;
            }
            break;
        case 5:
            cout << "Enter the Value to Duplicate Search: ";
            cin >> n;
            // SearchByValueDuplicate(head, n);
            Test T;
            T = SearchByValueDuplicateReturn(head, n);
            if (T.position[0] == 1)
            {
                cout << "The Searched Value is not yet in the List" << endl;
            }
            else
            {
                int size = T.position[0];
                for (int i = 1; i < size; i++)
                {
                    cout << T.position[i];
                    if (i < size - 1)
                        cout << ", ";
                }
                cout << endl;
            }
            break;

        default:
            break;
        }

        cout << "Next Choice: ";
        cin >> choice;
    }

    cout << "Linked List: ";
    display(head);
    cout << endl
         << "Length of the List: " << countLength(head) << endl;

    return 0;
}