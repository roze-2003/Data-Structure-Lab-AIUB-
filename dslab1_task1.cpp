#include<iostream>
using namespace std;

int main()
{
    int i;
    int arr1[13];
    cout<<"Enter the values of array: ";
    for(int i=0; i<13; i++)
    {
        cin>>arr1[i];
    }

    cout<<"Array: ";
    for(int i=0; i<13; i++)
    {
        cout<<arr1[i]<<"\t";
    }
    cout<<endl;
        
    cout<<"Reverse Array: ";
    for(int i=12; i>=0; i--)
    {
        cout<<arr1[i]<<"\t";
    }
}