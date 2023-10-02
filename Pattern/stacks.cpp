#include<bits/stdc++.h>
using namespace std;



 class Stack
 {
    public:
     int *arr;
     int top;
     int size;

    Stack(int size)
    {
        this->size  = size;
        arr = new int(size);
        top = -1;
    }

    void push(int element)
    {
        if(size-top>1)
        {
            top++;
            arr[top]=element;
        }
        else
        {
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else
        {
           cout<<"Stack Undeflow";
        }
    }
    int peek()
    {
        if(top>=0)
        {
            return arr[top];
        }
        else
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

 };



    /*stack<int>s;
    s.push(2);
    s.push(3);

    s.pop();

    cout<<"printing top element"<<s.top()<<endl;

    if(s.empty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"Stack is not empty"<<endl;
    }
    return 0;*/
int main()
{
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
     
    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;


    if(st.isEmpty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"Stack is not empty"<<endl;
    }
    return 0;



}


