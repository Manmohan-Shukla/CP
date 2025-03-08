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
class Stack
{
public:
   Node* head;
    int size;
    Stack()
    {
        head=NULL;
        size=0;
    }
    void push(int val)
    {
        Node* temp=new Node(val);
        temp->next=head;
        head=temp;
        size++;
    }
    void pop()
    {if(head==NULL){
        cout<<"stack is empty"<<endl;
        return;
    }
        head=head->next;
        size--;
    }
    int top()
    { {if(head==NULL){
        cout<<"stack is empty"<<endl;
        return;
    }
        return head->val;
    }
   
};
int main()
{
}