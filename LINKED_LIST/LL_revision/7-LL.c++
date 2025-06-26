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
Node *deleteNth(Node *head, int n)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *temp = head;
    int size = 0;
    while (temp)
    {
        size++;
        temp = temp->next;
    }
    if (n == size)
    {
        head = head->next;
        return head;
    }
    temp = head;
    for (int i = 0; i < size - n; i++)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}