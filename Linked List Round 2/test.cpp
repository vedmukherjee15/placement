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
};

void insertAthead(Node* head,int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void print (Node* head,int d)
{
    if(head==NULL)
      cout<<"List is empty";
    Node *temp = new Node(d);
    if(temp->data != NULL )
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }  
}

void reverse(Node * head)
{
     if(head==NULL || head->next == NULL)
    {
        return;
    }
   
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr!=NULL)
    {
        forward = curr->next;
        curr->next = prev;
        curr = curr->next;
        prev = curr;

    }
    head = prev;
}

Node* revrseink(Node* head , int k )
{
    if(head==NULL)
    {
        return;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    int count = 0;

    while(curr!=NULL && count < k )
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = curr->next;
        count++;
    }
    if(forward != NULL)
    {
        head->next = revrseink(forward,k);
    }

   return prev;
}