//Quickly find multiple left rotations of an array
//Given an array of size  and multiple values around which we need to left rotate the array .How to quickly find the multiple left rotations?
/*Input:arr[]={1,3,5,7}
k1=1
k2=3
k3=4
k4=6
output: 3 5 7 9 1
        7 9 1 3 5 
        9 1 3 9 1
        3 5 7 9 1
         */
//Efficient Approach:
/*The above approches work well when there is a single rotation required.The approaches also modify the original array.
To handle multiple queries of array rotation,we use a temp array of size 2n and quickly handle rotations.
step 1:Copy the entire array  two times in temp[0-2n-1] array.
step 2:Starting position of array after k rotations in temp[] will be k%n.We do 
step 3:Print temp[] array from k%n to k%n+n.*/ 
//Fill temp[] with two copies of arr[]
void preprocess(int arr[],int n,int temp[])
{
   //Store arr[] elements at i and i+n
   for(int i=0;i<n;i++)
   {
       temp[i]=temp[i+n]=arr[i];
   }    
}
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int arr[]={1,3,5,7,9};
int n=sizeof(arr)/sizeof(arr[0]);
int temp[2*n];

}