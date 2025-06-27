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

Node *insertDLL(Node *head, int x)
{
    Node *newly = new Node(x);
    if (head == NULL)
        return newly;
    newly->next = head;
    head->prev = newly;
    return newly;
}