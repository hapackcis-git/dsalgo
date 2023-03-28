//C++ program to insert at specific position
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int arr[10],k,pos,n;
cout<<"\nEnter the size of the array: ";
cin>>n;
cout<<"\nEnter the element of the array: ";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"\nEnter the position where element is to be inserted: ";
cin>>pos;
cout<<"\nEnter the element to be inserted: ";
cin>>k;
for(int i=n-1;i>=pos-1;i--)
{
    arr[i+1]=arr[i];
}
arr[pos-1]=k;
n++;
cout<<"\nThe new array is: ";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}