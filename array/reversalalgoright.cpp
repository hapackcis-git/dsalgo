//Reversal algorithm for right rotation of an array
#include <iostream>
#include <conio.h>
using namespace std;
void rotatearray(int arr[],int start ,int end)
{
    
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void reversalalgo(int arr[],int d,int n)
{
    if(d==0)
    return ;
    d=d%n;
  rotatearray(arr,0,n-1);
  rotatearray(arr,0,d-1);
  rotatearray(arr,d,n-1);
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[]={1,2,3,4,5,6,7,8,9,10};
int n=sizeof(arr)/sizeof(arr[0]);
reversalalgo(arr,3,n);
printarray(arr,n);
}