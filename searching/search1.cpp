//C++ program to search element of the array through linear search algorithm
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int arr[10],n,position,search;
cout<<"\nEnter the dimension of the array from 0 to 10: ";
cin>>n;
cout<<"\nEnter the element of the array: " ;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"\nThe array is : ";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<"\nEnter the element to be searched: "<<endl;
cin>>search;
//to implement linear search 
for(int i=0;i<n;i++)
{
    if(search==arr[i])
    {
     position=i+1;
    }
}
cout<<"\nThe element is found at position: "<<position;
}