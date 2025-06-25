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

bool cycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}

Node *cycleHead(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    bool flag = false;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            flag = true;
    }
    if (flag == false)
        return NULL;
    else
    {
        Node *temp = head;
        while (temp != slow)
        {
            temp = temp->next;
            slow = slow->next;
        }
        return slow;
    }
}

int findLengthOfLoop(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            // Cycle detected — break immediately
            int n = 1;
            Node *temp = slow->next;
            while (temp != slow)
            {
                temp = temp->next;
                n++;
            }
            return n;
        }
    }

    // No cycle
    return 0;
}
