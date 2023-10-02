#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};

bool isCircularList(Node *head)
{
    if(head==NULL)
     return true;

    Node* temp = head->next;
    while(temp!=NULL && temp!=head)
      temp = temp->next;

    if(temp==head)
     return true;

    return false; 
}
int main()
{
    Node* temp1 = new Node(10);
    Node* temp2 = new Node(11);
    temp1->next = temp2;
    bool ans = isCircularList(temp1);
    cout<<ans;
    return 0;
}