//C++ program for array deletion
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int arr[10],n,count=0,del;
cout<<"\nEnter the size of the array: ";
cin>>n;
cout<<"\nEnter the element of the array: ";
for(int i=0;i<n;i++)
{
    cin>>arr[i];

}
cout<<"\nEnter the element to be deleted: ";
cin>>del;
for(int i=0;i<n;i++)
{
    if(arr[i]==del)
    {
        for(int j=i;i<n-1;j++)
        {
            arr[j]=arr[j+1];
            count++;
            n--;
            break;

                    }
    }
}
if(count==0)
{
    cout<<"\nThe element not found: ";
}
else{
    cout<<"\nThe element is successfully deleted ";
    cout<<"\nThe new array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
}