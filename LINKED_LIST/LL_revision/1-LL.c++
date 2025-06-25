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
int size(Node *head)
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

void diplay(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void diplayRec(Node *head)
{
    if (head == NULL)
        return;
    cout << head->val << " ";
    diplayRec(head->next);
}