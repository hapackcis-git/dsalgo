//  C++ program to insert element at the end of the array
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int arr[7],k,i;
cout<<"\nEnter the 5 element of the array: ";
for( i=0;i<5;i++)
{
    cin>>arr[i];
}
cout<<"\nEnter the element to be inserted: ";
cin>>k;
arr[i]=k;
cout<<"\nEnter the element to be inserted: ";
for(int i=0;i<6;i++)
{
    cout<<arr[i]<<" ";
}

}