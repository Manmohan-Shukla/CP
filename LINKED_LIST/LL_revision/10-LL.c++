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
    int n = 0;
    while (head)
    {
        n++;
        head = head->next;
    }
    return n;
}

Node *intersection(Node *headA, Node *headB)
{
    Node *tempA = headA;
    Node *tempB = headB;
    int lenA = sizeLL(headA);
    int lenB = sizeLL(headB);
    if (lenA > lenB)
    {
        int diff = lenA - lenB;
        for (int i = 0; i < diff; i++)
        {
            tempA = tempA->next;
        }
        while (tempA->val != tempB->val)
        {
            tempA = tempA->next;
            tempB = tempB->next;
        }
        return tempA;
    }
    else
    {
        int diff = lenB - lenA;
        for (int i = 0; i < diff; i++)
        {
            tempB = tempB->next;
        }
        while (tempA->val != tempB->val)
        {
            tempA = tempA->next;
            tempB = tempB->next;
        }
        return tempA;
    }
}