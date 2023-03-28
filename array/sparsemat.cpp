#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int m,n,zeros=0;
int arr[10][10];
cout<<"\nEnter the dimension of the matrix :";
cin>>m>>n;
cout<<"\nEnter the element of the matrix: ";

for(int i=0;i<m;i++)
{
    for(int j=0;j<m;j++)
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
}
else
{
    cout<<"\nThe given matrix is not sparse matrix ";
}
}