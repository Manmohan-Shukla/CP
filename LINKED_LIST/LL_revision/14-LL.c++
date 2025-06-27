#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node *prev;
    Node()
    {
        val = 0;
        next = NULL;
        prev = NULL;
    }
    Node(int data1)
    {
        val = data1;
        next = NULL;
        prev = NULL;
    }
    Node(int data1, Node *next1, Node *prev1)
    {
        val = data1;
        next = next1;
        prev = prev1;
    }
};

Node *deleteDLL(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    Node *temp = head;
    temp = temp->next;
    temp->prev = NULL;
    return temp;
}