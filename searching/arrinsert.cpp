//c++ program to insert element in an array
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}