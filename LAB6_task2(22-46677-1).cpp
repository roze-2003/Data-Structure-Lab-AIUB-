/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

class CircularQueue{

private:
    int rear,front;
    int arr[10];

public:
    CircularQueue()
    {
        rear = -1;
        front = -1;
        for(int i = 0; i<10; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        if(front == -1 && rear == -1)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if((rear+1)%5==front)
            return true;
        else
            return false;
    }

    void enqueue(int n)
    {
        if(isFull())
            cout<<"Queue is Full\n";
        else if(isEmpty())
        {
            rear = 0;
            front = 0;
            arr[rear] = n;
        }
        else
        {
            rear=(rear+1)%10;
            arr[rear] = n;
        }
    }

    void dequeue()
    {
        if(isEmpty())
            cout<<"Queue is Empty!\n";
        else if(rear == front)
        {
            rear = -1;
            front = -1;
        }
        else
        {
            arr[front]=0;
            front=(front+1)%10;
        }
    }

    void display()
    {
        for(int i = 0; i<10; i++)
        {
            cout<<arr[i]<<" ";
        }
    }

    int DisplayFront()
    {
        if(isEmpty())
            cout<<"Queue is Empty<<endl;
        else
            return arr[front];
    }


};

int main()
{
    CircularQueue a;
    a.enqueue(9);
    a.enqueue(6);
    a.enqueue(3);
    a.enqueue(7);
    a.enqueue(21);
    a.display();
    cout<<endl;
    cout<<"Front element is: "<<a.DisplayFront()<<endl;
    a.dequeue();
    a.dequeue();
    a.display();
    cout<<endl;
    a.enqueue(10);
    a.enqueue(20);
    a.display();
}
