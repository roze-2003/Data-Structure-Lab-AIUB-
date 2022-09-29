#include<iostream>
using namespace std;

int main()
{
    int arrA[8]={1,2,3,4,5,6,7,8};
    int arrB[4]={50,60,70,80};

    int m_arr[12];

    for(int i=0, j=7; i>=7,j>=0; i++,j--)
        m_arr[i]=arrA[j];

    for(int i=8, j=3; i>=(11),j>=0; i++,j--)
        m_arr[i]=arrB[j];

    cout<<"\nShowing Array A & Array B Merged in Reverse Order:"<<endl;

    for(int i=0; i<12; i++)
        cout<<m_arr[i]<<"  ";

    return 0;
}
