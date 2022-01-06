1. WAP to implement Queue.
a. Insert an element into the queue.
b. Delete an element from the queue.
c. Display the contents of the queue.
  
2. WAP to implement Circular Queue.
a. Insert an element into the circular queue.
b. Delete an element from the circular queue.
c. Display the contents of the circular queue.
  
3. WAP to implement Double Ended Queue. 
a. Insert an element into the double ended queue.
b. Delete an element from the double ended queue.
c. Display the contents of the double ended queue.
  
4. WAP to implement Priority Queue.
a. Insert an element into the priority queue.
b. Delete an element from the priority queue.
c. Display the contents of the priority queue. 

5.WAP to implement a stack using queues.
6. WAP to implement a queue using stacks.
7.WAP to implement n stacks in a single array.
8.WAP to implement n queues in a single array.
9.WAP to implement Stack using Linked List.
10.WAP to implement Queue using Linked List.
  
 //Q1:
  // Queue implementation using stack
#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int>s1;
    stack<int>s2;
    public:
    void Insert(int data)
    {
        s1.push(data);
        cout<<data<<" is inserted in Queue"<<endl;
    }
    int Delete(){
        if(s1.empty() && s2.empty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        if(s2.empty())
        {
            while(!s1.empty())
            {
              s2.push(s1.top());
              s1.pop();  
            }
            cout<<s2.top()<<" is deleted from the Queue"<<endl;
            s2.pop();
        }
    }
    void Display()
    {
        while(!s2.empty())
        {
            cout<<s2.top()<<" ";
            s2.pop();
        }
    }
};

int main()
{
    Queue q;
    q.Insert(10);
    q.Insert(20);
    q.Insert(30);
    q.Insert(40);
    q.Insert(50);
    q.Delete();
    cout<<"Contents of the Queue are:"<<endl;
    q.Display();
}
  
  
  
  
  
  
