//c++ program to traverse array
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int arr[10],n;
cout<<"\nEnter the size of the array: ";
cin>>n;
cout<<"\nEnter the element of the array: ";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"\nThe new array: ";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}