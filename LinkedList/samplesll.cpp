#include<iostream>
using namespace std;
 
class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;

    }
    ~Node()
    {
        int value = this->data;
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for mode with data"<<value<<endl;
    }
   
}; 

void insertAtHead(Node* &head , int d)
{
    Node*temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAttail(Node* &tail , int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void insertAtPosition(Node* &head,Node* &tail,int position, int d)
{
    if(position==1)
    {
        insertAtHead(head ,d );
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }

    if(temp -> next ==NULL)
    {
        insertAttail(tail,d);
        return;
    }
    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;

}
void print(Node* &head)
{
   Node *temp = head;

   while(temp!=NULL)
   {
     cout<<temp -> data<<" ";
     temp = temp->next;
   }
   cout<<endl;
}
void deleteNode(int position , Node* &head)
{
    if(position==1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node *node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // Node* head = node1;
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAttail(tail , 12);

    print(head);

    insertAttail(tail , 15);
    print(head);

    insertAtPosition(head ,tail, 4 , 22);
    print(head);

    deleteNode(3,head);
    print(head); 
    

    return 0;
}