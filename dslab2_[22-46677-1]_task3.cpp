//Initialize an array with no common elements.
#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,2,1,3};
    cout<<"The Array is : ";
    for(int i=0;i<5;++i)
        cout<<arr[i]<<"  ";

    cout<<"\nArray With Unique Elements are : ";
    for(int i=0;i<5;i++)
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
