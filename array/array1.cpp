#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int arr[100],n,i,search,position;
bool found=false;
cout<<"\nEnter the size of the array: ";
cin>>n;
cout<<"\nEnter the element of the array: ";
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"\nEnter the number to be searched: ";
cin>>search;
for(i=0;i<n;i++)
{
    if(search==arr[i])
    {
      found=true;
      position=i+1;
      break;
    }
}
if(found==true)
{
    cout<<"\nThe searched number  "<<search<<"is at position "<<position<<endl;
}
else
{
    cout<<"\nThe number is not found: ";
}
}