#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

 Node*  reverslinkedlist(Node* &head)
{
    if(head == NULL || head -> next == NULL)
    {
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
   
    while(curr!=NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev; 
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
    Node* ans = reverslinkedlist(temp1);
    // cout<<ans->data;
    while(ans)
       {
        cout<<ans->data<<" ";
        ans = ans->next;
       }
    return 0;

}

// // Recursive soln
// void reverse(Node* &head, Node* curr , Node* prev)
// {
//     if(curr==NULL)
//     {
//         head = prev;
//         return;
//     }

//     Node*forward = curr->next;
//     reverse(head,forward,curr);
//     curr->next = prev;
// }

// Node* revll(Node* head)
// {
//     Node* curr = head;
//     Node* prev = NULL;
//     reverse(head , curr , prev);
//     return head;
// }

// //Recu 