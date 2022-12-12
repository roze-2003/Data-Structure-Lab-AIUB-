/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

class Queue{

private:
    int rear,front;
    int arr[7];

public:
    Queue(){
        rear = -1;
        front = -1;
        for(int i = 0; i<7; i++){
            arr[i] = 0;
        }
    }

    bool isEmpty(){
        if(front == -1 && rear == -1)
            return true;
        else
            return false;
    }

    bool isFull(){
        if(rear == 6)
            return true;
        else
            return false;
    }

    void enqueue(int value){
        if(isFull())
            cout<<"Queue is Full\n";
        else if(isEmpty()){
            rear = 0;
            front = 0;
            arr[rear] = value;

        }
        else{
            rear++;
            arr[rear] = value;

        }
    }

    void dequeue(){
        if(isEmpty())
            cout<<"Queue is Empty!\n";
        else if(rear == front){
            rear = -1;
            front = -1;

        }
        else{
            front++;

        }
    }

    void display(){
        if(isEmpty())
            cout<<"Queue is Empty\n";
        else{
            for(int i = front; i<=rear; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

    int DisplayFront(){
        if(isEmpty())
            cout<<"Queue is Empty\n";
        else
            return arr[front];
    }


};

int main()
{
    Queue a;
    a.enqueue(9);
    a.enqueue(6);
    a.enqueue(3);
    a.enqueue(7);
    a.enqueue(21);
    a.display();
    cout<<endl;;
    cout<<"Front element is: "<<a.DisplayFront()<<endl;
    cout<<"After Dequeue : ";
    a.dequeue();
    a.dequeue();
    a.display();
}