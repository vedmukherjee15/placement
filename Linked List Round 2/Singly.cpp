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
    //Destructor
    ~Node()
    {
        int value = this->data;
        if(this->next == NULL)
        {
            delete next;
            this->next =NULL;
        }
        cout<<"Memory is freed with value "<<value<<endl;
    }
    
};

void insertAthead(Node* &head,int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAttail(Node* &tail,int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node* &head)
{
    if(head==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtposition(Node* &tail , Node* &head , int position , int d)
{
    if (position==1)
    {
        insertAthead(head ,d);
        print(head);
    }
    Node* temp =head; 
    int cnt  = 1;

    while(cnt<position-1)
    {
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL)
    {
        insertAttail(tail ,d);
        print(head);
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}
void deleteNode(Node* &head , int position)
{
    if(position==1)
    {
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node* curr = head;
        Node* prev = NULL;

        int cnt=1;

        while(cnt<position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next = NULL;
        delete curr; 
    }
}
int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAthead(head , 20);
    print(head);
    insertAthead(head , 30);
    print(head);
    insertAttail(tail , 40);
    print(head);
    insertAtposition(tail,head,3,50);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    deleteNode(head,4 );
    print(head);
    return  0;
}

