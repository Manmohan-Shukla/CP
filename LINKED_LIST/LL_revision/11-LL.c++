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
Node *Addsum2(Node *l1, Node *l2)
{
    Node *c = new Node(9);
    Node *tempC = c;
    int carry = 0;
    while (l1 || l2 || carry != 0)
    {
        int sum3 = carry;
        if (l1)
        {
            sum3 += l1->val;
            l1 = l1->next;
        }
        if (l2)
        {
            sum3 += l2->val;
            l2 = l2->next;
        }
        carry = sum3 / 10;
        tempC->next = new Node(sum3 % 10);
        tempC = tempC->next;
    }
    tempC->next = NULL;
    return c->next;
}