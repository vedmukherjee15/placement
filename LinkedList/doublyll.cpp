#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d)
    {
        this -> data =d;
        this -> prev = NULL;
        this -> next = NULL;
    }
    ~Node()
    {
        int val = this -> data;
        if(next!=NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data"<<val<<endl;
    }
};

void print(Node* &head)
{
    Node* temp = head;

    while(temp!=NULL)
    {
        cout<< temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int getLength(Node *head)
{
    int len=0;
    Node* temp = head;
    while(temp!=NULL)
    {
        len++;
        temp = temp ->next;
    }
    return len;
}
void insertAtHead(Node *&head,Node *&tail,int d)
{
    if(head==NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
      Node* temp = new Node(d);
      temp -> next = head;
      head -> prev = temp;
      head= temp;
    }
}
void insertAtTail(Node* &head,Node* &tail,int d)
{
    if(tail==NULL)
    {
      Node *temp = new Node(d);
      head = temp;
      tail = temp;
    }
    else
    {
     Node* temp = new Node(d);
     temp -> prev =tail;
     tail -> next =temp;
     tail= temp;
    }
}
void insertAtposition(Node* &head,Node* &tail,int position,int d)
{
    if(position == 1)
    {
        insertAtHead(head ,tail, d);
        return;
    }
    Node*temp = head;
    int cnt=1;
    while(cnt< position-1)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next == NULL)
    {
        insertAtTail(head,tail,d);
        return;
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert->prev;
    temp->next = nodetoinsert;
    nodetoinsert->prev =temp;
}
void deleteNode(int position , Node* &head)
{
    if(position ==1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head= temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt =1;
        while(cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        curr->prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main()
{
    //Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    // cout<<"Length " <<getLength(head) <<endl;

    // insertAtHead(head , 12);
    // print(head);

    // insertAtHead(head , 15);
    // print(head);

    insertAtTail(head,tail,25);
    print(head);

    insertAtTail(head,tail,15);
    print(head);

    insertAtTail(head,tail,36);
    print(head);

    insertAtposition(head,tail,2,22);
    print(head);

    insertAtposition(head,tail,1,20);
    print(head);

    insertAtposition(head,tail,6,5);
    print(head);

    deleteNode(1, head);
    print(head);
    cout<<"head"<<head ->data<<endl;
    cout<<"tail"<<tail ->data<<endl;
    return 0;
}