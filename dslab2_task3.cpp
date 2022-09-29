#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the size of Array: ";cin>>a;
    cout<<"\n"<<endl;

    int arr[a];
    cout<<"Input Elements of Array: ";
    for(int i=0;i<a;i++)
        cin>>arr[i];

    cout<<"\nArray With Unique Elements are : ";
    for(int i=0;i<a;i++)
    {
        int b;
        for(b=0;b<i;b++)
        {
            if(arr[i]==arr[b])
            {
                break;
            }
        }
        if (i == b)
            cout<<arr[i]<<" ";
    }
    return 0;
}
