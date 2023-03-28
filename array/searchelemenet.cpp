#include <iostream>
#include <conio.h>
using namespace std;

int main(){
int arr[10];
int n,pos=0,search;
cout<<"\nEnter the size of the array from 0-10: "<<endl;
cin>>n;
cout<<"\nEnter the element of the array: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"\nThe array is: ";
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
cout<<"\nEnter the element to be searched: ";
cin>search;
for(int i=0;i<n;i++)
{
    if(search==arr[i])
    {
     pos=i+1;
    }
}
cout<<"\nThe element is found at index at position: "<<pos;
}
