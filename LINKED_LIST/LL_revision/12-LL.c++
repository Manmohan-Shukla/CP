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

class Solution
{
public:
    Node *sortList(Node *head)
    {
        if (!head || !head->next)
            return head;

        // Create dummy lists for 0s, 1s, and 2s
        Node *zero = new Node(0), *zeroEnd = zero;
        Node *one = new Node(0), *oneEnd = one;
        Node *two = new Node(0), *twoEnd = two;

        Node *curr = head->next; // Because head is dummy node

        while (curr)
        {
            if (curr->val == 0)
            {
                zeroEnd->next = curr;
                zeroEnd = zeroEnd->next;
            }
            else if (curr->val == 1)
            {
                oneEnd->next = curr;
                oneEnd = oneEnd->next;
            }
            else
            {
                twoEnd->next = curr;
                twoEnd = twoEnd->next;
            }
            curr = curr->next;
        }

        // Connect the 0s, 1s and 2s lists
        zeroEnd->next = one->next ? one->next : two->next;
        oneEnd->next = two->next;
        twoEnd->next = nullptr;

        // ✅ Update original head->next to point to the new sorted list
        head->next = zero->next ? zero->next : (one->next ? one->next : two->next);

        // Delete dummy nodes
        delete zero;
        delete one;
        delete two;

        return head; // ✅ Reused dummy head returned
    }
};
