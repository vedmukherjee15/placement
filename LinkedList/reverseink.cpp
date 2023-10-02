#include<iostream>
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

Node* reversek( Node* &head , int k)
{
   if (head == NULL && head->next == NULL)
   {
       return head;
   } 

   Node* prev = NULL;
   Node* curr = head;
   Node* forward = NULL;
   int count  = 0;
   while(curr!=NULL && count<k)
   {
    forward = curr->next;
    curr->next = prev;
    prev= curr;
    curr =forward;
    count++;
   }
   if(forward != NULL)
   {
      head->next = reversek(forward,k);
   }
   return prev;
}
