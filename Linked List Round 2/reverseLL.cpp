#include<bits/stdc++.h>
using namespace std;

struct Node
{
     public:
     int data;
     struct Node* next;

     Node(int d)
     {
        this->data = d;
        this->next = NULL;
     }
};

struct LinkedList
{
    Node* head;
    LinkedList()
    {
        head=NULL;
    }


    void reverse()
    {
        if(head == NULL || head->next == NULL)
        {
            return  ;
        }
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;

        while(curr != NULL )
        {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = curr->next;
        }
        head = prev;
    }

    void print()
    {
        
        // if(head==NULL)
        // {
        //     cout<<"List is empty"<<endl;
        //     return;
        // }
        struct Node* temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void push(int d)
    {
        Node*temp = new Node(d);
        temp->next = head;
        head=temp;
    }

    

    
};    
int main()
{
    LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);
 
    cout << "Given linked list\n";
    ll.print();
 
    ll.reverse();
 
    cout << "\nReversed linked list \n";
    ll.print();
    return 0;
}

    

