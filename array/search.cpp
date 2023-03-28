#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int arr[10],search,pos=0,n;
cout<<"\nEnter the size of the array between 0-10: ";
cin>>n;
cout<<"\nEnter the element of the array: ";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"\nThe array is  :"<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<"\nEnter the element to be searched: ";
cin>>search;
for(int i=0;i<n-1;i++)
{
    if(search==arr[i])
    {
        pos=i+1;
        break;
    }
}

cout<<"\nThe element to be searched is at position: "<<pos;

}