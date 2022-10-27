#include <iostream>
using namespace std;

int Stack[10], Top=-1, size=10;

bool isEmpty()
{
	return (Top==-1);
}

bool isFull()
{
	return (Top==size);
}

bool push(int Element)
{
	if(isFull())
    {
        cout << "Stacks Overflow"<<endl;;
        return false;
    }
 	Stack[Top++] = Element;
 	cout<<Element<<" inserted into the Stack successfully."<<endl;
	return true;
}

bool pop()
{
	if(isEmpty())
    {
        cout<<"Stack empty"<<endl;
        return false;
    }
	Top--;
	cout<<"Pop operation is performed successfully"<<endl;;
	return true;
}

int showTop()
{
	return Stack[Top-1];
}

void display()
{
    cout <<"\nStack Elements are"<<endl;;
	for( int i=Top-1; i>=0; i-- )
	{
        cout<<Stack[i]<<endl;
	}
}

int main()
{
    push(7);push(6);push(10);push(17);push(11);push(2);
    //push();push();push();push();

    display();
    cout<<"\nTop Element of the Stack: "<<showTop()<<"\n"<<endl;

    pop();
    pop();
    display();
    cout<<"\nTop Element of the Stack: "<<showTop()<<"\n"<<endl;

    pop();
    display();
    cout<<"\nTop Element of the Stack: "<<showTop()<<"\n"<<endl;

    return 0;
}
