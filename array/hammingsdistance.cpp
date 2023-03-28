#include <iostream>
#include <conio.h>
using namespace std;
int maxHamming(int arr[],int n)
{
 //arr[] to brr[] two times so that
 //we can transverse through all rotations.
 int brr[2*n+1];
 for(int i=0;i<n;i++)
 {
     brr[i]=arr[i];
 }
 for(int i=0;i<n;i++)
 {
     brr[n+i]=arr[i];
 }
 //We know  hamming  distance with 0 rotation 
 // would be 0
 int maxHam=0;
 //We try other rotations one by one and compute 
 //hamming distance of every rtaion
}
int main(){
int arr[]={2,4,6,8};
int n=sizeof(arr)/sizeof(arr[0]);

}