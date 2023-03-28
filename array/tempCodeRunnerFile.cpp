//Find the rotation count in Rotated Sorted array
/*Consider an array of distinct numbers sorted in increasing order.The array has been rotated(clockwise) k number of times.Given such an array ,find the value of k.*/
#include <iostream>
#include <conio.h>
int countRotations(int arr[],int n)
{
   //We basically find index of minimum
   //element
   int min=arr[0],min_index;
   for(int i=0;i<n;i++)
   {
       if(min>arr[i])
       {
           min=arr[i];
           min_index=i;
       }
   }
   return min_index;

}
using namespace std;
int main(){
int arr[]={15,18,2,3,6,12};
int n=size of(arr)/sizeof(arr[0]);
cout<<countRotations(arr,n);
return 0;
}