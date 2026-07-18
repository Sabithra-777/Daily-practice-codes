#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertEnd(Node* &head, int value)
{
    Node* newNode = new Node(value);

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void display(Node* head)
{
    while(head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }

    cout << "NULL";
}

int main()
{
    Node* head = NULL;

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter node values:\n";

    for(int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        insertEnd(head, value);
    }

    int newValue;
    cout << "Enter value to insert at end: ";
    cin >> newValue;

    insertEnd(head, newValue);

    cout << "Linked List:\n";
    display(head);

    return 0;
}