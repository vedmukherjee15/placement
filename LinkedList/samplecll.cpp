#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if(this->next!=NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
};
void insertNode(Node* &tail , int element , int d)
{
    if(tail==NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode ->next = newNode;
    }
    else
    {
        Node* curr = tail;
        while(curr->data != element)
        {
            curr = curr->next;
        }
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(Node *tail)
{
    
}