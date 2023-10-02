#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    
    ~Node()
    {
        int value = this->data;
        if(this->next != NULL)
        {
            this->next == NULL;
            delete next;
        }
        cout<<"Memory is free of value"<<value<<endl;
    }
};    

void insertAtposition(Node* &tail , int element,  int d)
{
    
    if(tail == NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node* curr = tail;

        while(curr->data != element)
        {
            curr=curr->next;
        }

        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(Node* tail)
{
    Node *temp  = tail;
    if(tail == NULL)
    {
        cout<<"List is empty "<<endl;
        return;
    }
    do
    {
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);

    cout<<endl;
}

void deleteNode(Node* &tail , int value)
{
    if(tail==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        Node *prev = tail;
        Node* curr = prev->next;

        while(curr->data != value)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next = curr->next;

        if(curr == prev)
          tail = NULL;

        else if(tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    
    Node* tail = NULL;

    insertAtposition(tail,1,20);
    print(tail);
    
    // insertAtposition(tail,30,2);
    // insertAtposition(tail,40,3);
    // insertAtposition(tail,50,4);
    // print(tail);
    return 0;
}