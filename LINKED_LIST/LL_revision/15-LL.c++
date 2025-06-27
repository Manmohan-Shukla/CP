#include <iostream>
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

int sizeLL(Node *head)
{
    Node *temp = head;
    int n = 0;
    while (temp)
    {
        n++;
        temp = temp->next;
    }
    return n;
}

Node *tailLL(Node *head)
{
    Node *tail = NULL;
    while (head)
    {
        if (head->next == NULL)
            tail = head;
        head = head->next;
    }
    return tail;
}

Node *rotateLL(Node *head, int k)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    int len = sizeLL(head);
    k = k % len;
    Node *tail = tailLL(head);

    Node *temp = head;
    for (int i = 1; i < len - k; i++)
    {
        temp = temp->next;
    }
    tail->next = head;
    head = temp->next;
    temp->next = NULL;
    return head;
}