//C++ program for linear search
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int arr[10],n,search,pos,found=0;
cout<<"\nEnter the size of the array: ";
cin>>n;
cout<<"\nEnter the element of the array: ";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"\nEnter the element to be searched: ";
cin>>search;
for(int i=0;i<n;i++)
{
    if(arr[i]==search)
    {
        pos=i+1;
        found++;
        break;
    }
}
if(found==0)
{
    cout<<"\nThe element is not found ";
}
else{
    cout<<"\nThe element is found at position "<<pos;
   
}
}