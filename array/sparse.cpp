//c++ program to represent triplet of the sparse matrix
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int arr[10][10],m,n,zeros=0;
cout<<"\nEnter the dimension of the matrix: ";
cin>>m>>n;
cout<<"\nEnter the element of the matrix: ";
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
        if(arr[i][j]==0)
        {
          zeros++;  
        }
    }
}
if(zeros>(m*n)/2)
{
    cout<<"\nThe given matrix is sparse matrix ";
    int size=0;
    int triplet[3][size];
    int k=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(arr[i][j]!=0)
           {
               triplet[3][k]=i;
               triplet[3][k]=j;
               triplet[3][k]=arr[i][j];
           } 
        }
    }
    //Displaying triplet matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<triplet[i][j]<<" ";
        }
        cout<<endl;
    }
}
else{
    cout<<"\nThe given matrix is not sparse matrix ";
}
}