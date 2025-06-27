class Solution
{
public:
    ListNode *deleteLL(ListNode *&head, ListNode *&temp)
    {
        ListNode *nextll = temp->next;

        if (temp == head)
        {
            head = nextll;
            if (head)
                head->prev = NULL;
        }
        else
        {
            ListNode *previous = temp->prev;
            if (previous)
                previous->next = temp->next;
            if (nextll)
                nextll->prev = previous;
        }

        delete temp;
        return nextll;
    }

    ListNode *deleteAllOccurrences(ListNode *head, int target)
    {
        ListNode *temp = head;
        while (temp)
        {
            if (temp->val == target)
            {
                temp = deleteLL(head, temp);
            }
            else
            {
                temp = temp->next;
            }
        }
        return head;
    }
};