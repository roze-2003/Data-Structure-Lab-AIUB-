#include<iostream>
using namespace std;
int main()
{
    int found=0;

    int arr1[4];
    cout<<"\nInput "<<4<<" elements of First Array: \n";
    for(int i=0; i<4; i++)
        cin>>arr1[i];

    int arr2[5];
    cout<<"\nInput "<<5<<" elements of Second Array: \n";
    for(int i=0; i<5; i++)
        cin>>arr2[i];

    cout<<"\nCommon Elements are: ";
    for(int i=0,j=0; i<4,j<5; i++,j++)
    {
        if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<"  ";
            found++;
        }
    }
    if(found==0)
        cout<<"nNo Common Elements Found!"<<endl;


    return 0;
}
