#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this -> data =data;
        this -> next =NULL;
    }
    ~Node()
    {
        int value = this ->data;
        //memory free
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
};

void insertAtHead(Node* &head , int d )
{
    Node* temp =new Node(d);
    temp -> next = head;
    head = temp;
}
void insertAtTail(Node* &tail , int d)
{
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}
void insertAtposition( Node* &head,Node* &tail,int position , int d)
{
    if(position ==1)
    {
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt=1;

    while(cnt<position - 1)
    {
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL)
    {
        insertAtTail(tail,d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
    
}
void deleteNode(int position , Node* &head)
{
    if(position==1)
    {
        Node *temp = head;
        head = temp->next;
        temp->next=NULL;
        delete temp;
    }  
    else
    {
         Node* curr = head;
         Node* prev = head;
        int cnt =1;
        while(cnt <=position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr->next;
        curr -> next = NULL;
        delete curr;
    }  
}
void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main()
{
    //created a new node
    Node* node1 = new Node(10);
    cout<<node1 -> data<<endl;
    cout<<node1 -> next<<endl;

    //head pointed to node1
    Node* head = node1;
    // print(head);

    // insertAtHead(head , 12);
    // print(head);

    // insertAtHead(head , 15);
    // print(head);

    // insertAtHead(head , 30);
    // print(head);


    Node* tail = node1;
    print(head);

    insertAtTail(tail , 12);
    print(head);

    insertAtTail(tail , 15);
    print(head);

    insertAtposition(head,tail,1,22);
    print(head);

    cout<<"head"<<head ->data<<endl;
    cout<<"tail"<<tail ->data<<endl;
    
    deleteNode(1, head);
    print(head);

    return 0;
}