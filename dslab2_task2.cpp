//Initialize 2 integer type arrays with different sizes and make a new array with the common elements between them.
#include<iostream>
using namespace std;
int main()
{
    int found=0;

    int arrA[4]={1,2,3,4};
    int arrB[5]={1,2,3,4,5};

    cout<<"First Array is :\n";
    for (int i=0;i<4;++i)
    {
        cout<<arrA[i]<<"  ";
    }

      cout<<"\nSecond Array is :\n";
    for (int j=0;j<5;++j)
    {
        cout<<arrB[j]<<"  ";
    }

    cout<<"\nCommon Elements are: ";
    for(int i=0,j=0; i<4,j<5; i++,j++)
    {
        if(arrA[i]==arrB[j])
        {
            cout<<arrA[i]<<"  ";
            found++;
        }
    }
    if(found==0)
        cout<<"\nNo Common Elements Found!"<<endl;


    return 0;
}
