#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int arr[10][10],m,n,zeros, transpose[10][10];
cout<<"\nEnter the dimension of the array: ";
cin>>m>>n;
cout<<"\nEnter the element of the array: ";
for (int  i = 0; i < m; i++)
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
    cout<<"\nThe given matrix is sparse matrix: ";
    cout<<endl;
    cout<<"\nThe sparse matrix is : "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<endl;
    //generating the transpose the sparse matrix
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
          transpose[j][i]=arr[i][j];
        }
    }
    //displaying the transpose of the matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<"\n";
    }
}
else{
cout<<"\nThe given matrix is not sparse matrix: ";
}


}