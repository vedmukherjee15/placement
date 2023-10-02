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
// int getlength(Node* head)
// {
//     int len =0;
//     while(head!=NULL)
//     {
//         len++;
//         head=head->next;
//     }
//     return len;
// }
// Node* getmiddle(Node* head)
// {
//     int len = getlength(head);
//     int ans = (len)/2;
//     Node* temp = head;
//     int cnt = 0;
//     while(cnt<ans)
//     {
//         temp=temp->next;
//         cnt++;
//     }
//     return temp;
// }
Node* findmiddle(Node* head)
{
    if(head==NULL || head->next == NULL)
    {
        return head;
    }
    // if(head->next->next == NULL)
    // {
    //     return head->next;
    // }
    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow = slow->next;
    }
    return slow;

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
    
    Node* temp1 = new Node(10);
    Node* temp2 = new Node(11);
    temp1->next = temp2;
    Node* temp3 = new Node(12);
    temp2->next = temp3;
    Node* temp4 = new Node(13);
    temp3->next = temp4;
    Node* temp5 = new Node(14);
    temp4->next = temp5;
    // Node* temp6 = new Node(15);
    temp5->next = NULL;
    // temp6->next = NULL;
    Node* ans = findmiddle(temp1);
    cout<<ans->data;
    return 0;

}