#include <iostream>
#include <conio.h>
using namespace std;
void cyclicalgo(int arr[],int n)
{
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
void rotate(int arr[],int d,int n)
{
    cyclicalgo(arr,n);
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    
    {    
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[]={1,2,3,4,5,6,7,8,9,19};
int n=sizeof(arr)/sizeof(arr[0]);
int d;
cout<<"\nEnter the number of rotations: ";
cin>>d;

rotate(arr,d,n);
printarray(arr,n);
}