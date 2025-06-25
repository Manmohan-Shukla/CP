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
Node *middleL(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node *getNode(Node *head, int i)
{
    Node *temp = head;
    for (int j = 0; j <= i; j++)
    {
        temp = temp->next;
    }
    return temp;
}
Node *revLL(Node *head)
{
    int n = 0;
    Node *temp = head;
    while (temp)
    {
        temp = temp->next;
        n++;
    }
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        Node *left = getNode(head, i);
        Node *right = getNode(head, j);
        int t = left->val;
        left->val = right->val;
        right->val = t;
        i++;
        j--;
    }
    return head;
}

Node *LLrev(Node *head)
{
    Node *next = head;
    Node *curr = head;
    Node *prev = NULL;
    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node *LLrevRec(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *newHead = LLrevRec(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}