//c++ program to insert element at the end of the array
#include<iostream>
using namespace std;
int main()
{
    int arr[6], i, k;
    cout<<"Enter 5 element of the array:  ";
    for(i=0; i<5; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Inserted: ";
    cin>>k;
    arr[i] = k;
    cout<<"\nThe new array is :";
    for(i=0; i<6; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}