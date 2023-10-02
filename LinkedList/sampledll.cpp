#include<iostream>
using namespace std;

class Node
{
     public:
     int data;
     Node *prev;
     Node *next;

    Node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

    ~Node()
    {
        int value=this->data;
        while(this->next!=NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for value with node"<<value<<endl;
    }

};

void print(Node* head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node* head)
{
    int len = 0;
    Node* temp = head;
  
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}

void insertathead(Node* &head,Node* &tail, int d)
{
  if(head == NULL)
  {
    Node *temp = new Node(d);
    head = temp;
    tail = temp;
  }
  else
  
  {
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
  }  
}
void insertattail(Node* &head, Node* &tail , int d)
{
    if(tail == NULL)
    {
        Node* temp = new Node(d);
        head=temp;
        tail=temp;
    }
    else
    {
     Node* temp = new Node(d);
     tail->next = temp;
     temp->prev = tail;
     temp->next = NULL;
     tail = temp;
    } 
}
void insertatposition(Node *&head , Node *&tail,int position, int d)
{
    if(position==1)
    {
        insertathead(head,tail,d);
        return;
    }
    Node* temp = head;
    int cnt =1;

    while(cnt<position-1)
    {
        temp = temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
        insertattail(head,tail,d);
        return;
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}
void deleteNode(int position , Node* &head)
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
        Node *curr = head;
        Node *prev = NULL;
        int cnt=1;
        while(cnt<position-1)
        {
            prev=curr;
            curr=curr->next;
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
    // Node* node1 = new Node(10);
    // Node* head = node1;
    // Node* tail = node1;

    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    // cout<<getLength(head)<<endl;

    insertathead(head , tail,11);
    print(head);

    insertathead(head ,tail, 13);
    print(head);

    insertathead(head ,tail, 15);
    print(head);

    insertattail(head,tail, 25);
    print(head);
    
    insertatposition(head,tail,3, 100);
    print(head);
}   
