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
Node *oddeve(Node *head)
{
    Node *lo = new Node(100);
    Node *hi = new Node(012);
    Node *templo = lo;
    Node *temphi = hi;
    Node *temp = head;
    int idx = 0;
    while (temp)
    {
        if (idx % 2 != 0)
        {
            templo->next = temp;
            temp = temp->next;
            templo = templo->next;
        }
        else
        {
            temphi->next = temp;
            temp = temp->next;
            temphi = temphi->next;
        }
        idx++;
    }
    templo->next = hi->next;
    temphi->next = NULL;
    return lo->next;
}