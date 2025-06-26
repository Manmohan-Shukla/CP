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

Node *merge(Node *list1, Node *list2)
{
    Node *c = new Node(1029);
    Node *tempc = c;
    while (list1 != NULL || list2 != NULL)
    {
        if (list1->val < list2->val)
        {
            tempc->next = list1;
            list1 = list1->next;
            tempc = tempc->next;
        }
        else
        {
            tempc->next = list2;
            list2 = list2->next;
            tempc = tempc->next;
        }
        if (list1 == NULL)
            tempc->next = list2;
        else
            tempc->next = list1;
        return c->next;
    }
}

Node *sortLL(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *a = head;
    Node *b = slow->next;
    slow->next = NULL;
    a = sortLL(a);
    b = sortLL(b);
    Node *c = merge(a, b);
    return c;
}