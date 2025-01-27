#include <bits/stdc++.h>
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

class LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtEnd(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val)
    {
        if (idx < 0 || idx > size)
            cout << "Invalid Idx" << " ";
        else if (idx == 0)
            insertAtHead(val);
        else if (idx == size)
            insertAtEnd(val);
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 0; i <idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    int getAtIdx(int idx)
    {
        if (idx < 0 || idx >= size)
            cout << "Invalid Idx" << " ";
        else if (idx == 0)
            return head->val;
        else if (idx == size - 1)
            return tail->val;
        else
        {
            Node *temp = head;
            for (int i = 1; i < idx; i++)
            {
                temp = temp->next;
            }
            return temp->val;
        }
    }

    void deleteAtHead()
    {
        if (size == 0)
            cout << "list is empty";
        head = head->next;
        size--;
    }

    void deleteAtTail()
    {
        if (size == 0)
            cout << "list is empty";
        Node *temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
    }

    void deleteAtIdx(int idx)
    {
        if (size == 0)
        {
            cout << "list empty" << " ";
            return;
        }

        else if (idx < 0 || idx >= size)
        {
            cout << "Invalid Idx" << " ";
            return;
        }
        else if (idx == 0)
            deleteAtHead();
        else if (idx == size - 1)
            deleteAtTail();
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx-1; i++)
            {
                temp = temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
};

int main()
{
    LinkedList ll;
    ll.insertAtHead(10);

    ll.display();
    ll.insertAtEnd(170);

    ll.display();
    ll.insertAtEnd(105);

    ll.display();
    ll.insertAtHead(105);

    ll.display();
    ll.insertAtEnd(190);

    ll.display();

    ll.insertAtIdx(2, 80);
    ll.display();

    cout << ll.getAtIdx(2) << endl;
}