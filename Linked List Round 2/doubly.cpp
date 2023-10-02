#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }

    ~Node()
    {
        int value = this->data;
        if(this->next != NULL)
        {
            this->next = NULL;
            delete next;
        }
        cout<<"memory free of value "<<value<<endl;
    }
};

void print(Node* &head)
{
    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    Node* temp =head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAthead(Node* &tail,Node* &head,int d)
{  
    if(head==NULL)
    {   
        Node* temp = new Node(d);
        head=temp;
        tail=temp;

    }
    else
    {
     Node* temp = new Node(d);
     temp->next = head;
     head->prev = temp;
     head = temp;
    } 
}

void insertAttail(Node* &tail,Node* &head,int d)
{
    if(tail==NULL)
    {
        Node* temp = new Node(d);
        head= temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(d);
        tail->next = temp;       
        temp->prev = tail;
        tail=temp;
    }
}

void insertAtposition(Node* &head , Node* &tail, int position , int d)
{
    if(position==1)
    {
        insertAthead(tail,head,d);
        print(head);
    }

    Node* temp = head;
    int cnt =1;

    while(cnt<position-1)
    {
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL)
    {
        insertAttail(tail,head,d);
        print(head);
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next->prev= nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}
     
void deleteNode(Node* &head,int position)
{
    if(position==1)
    {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }    
    else
    {
       Node* prev = NULL;
       Node* curr = head;

       int cnt = 1;

       while(cnt<position)
       {
        prev = curr;
        curr = curr->next;
        cnt++;
       }

       curr->prev = NULL;
       prev->next = curr->next;
       curr->next = NULL;
       delete curr;
    }
}

int main()
{
    int d;
    Node* node1 = new Node(d);
    Node* head = NULL;
    Node* tail = NULL;

    insertAthead(tail,head,20);
    insertAthead(tail,head,30);
    insertAthead(tail,head,50);
    print(head);
    insertAttail(tail,head,40);
    print(head);
    insertAtposition(head,tail,3,10);
    print(head);
    deleteNode(head,3);
    print(head);
}