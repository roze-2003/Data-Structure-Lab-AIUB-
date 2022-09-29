//Extract Odd Numbers From An Array Using Two Ranges 
#include<iostream>
using namespace std;

int i;
int arr1[]= {2,3,4,5,6,8,9,11,15,21,33};

void printOdd(int a, int b)
{
    cout<<"\nOdd Numbers are: ";
    for(arr1[i]=a; arr1[i]<=b; i++)
    {
        if(arr1[i]%2!=0)
        {
            cout<<arr1[i]<<"  ";
        }

    }
    cout<<""<<endl;

}

int main()
{
    int a;
    int b;
    cout<<"First Range: ";
    cin>>a;
    cout<<"Last Range: ";
    cin>>b;

    printOdd(a,b);
    return 0;

}
