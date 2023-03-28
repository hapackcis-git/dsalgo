//C++ to count the number of rotation in an sorted rotated array
#include <iostream>
#include <conio.h>
using namespace std;
int countrotation(int arr[],int n)
{
    int min=arr[0];
    int min_index;
    for (int  i = 0; i < n; i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            min_index=i;
        }

    }
    
    return min_index;
}
int main(){
int arr[]={5,4,3,1,2};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"\nThe number of rotation is: "<<countrotation(arr,n);
}