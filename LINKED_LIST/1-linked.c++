#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void displayrec(Node *head)
{
    if (head == NULL)
        return;
    cout << head->val << " ";
    displayrec(head->next);
}

void insertAtEnd(Node *head, int val)
{
    Node *t = new Node(val);
    while (head->next != NULL)
        head = head->next;
    head->next=t;
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    insertAtEnd(a, 80);
    Node *temp = a;
    while (temp != NULL)
    {
        cout << temp->val << " "; // temp ke andar jo address hai uski value
        temp = temp->next;
    }
    cout << "\n";
    display(a);
    cout << "\n";
    displayrec(a);
}