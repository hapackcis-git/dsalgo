#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int arr[10][10],m,n,count=0;
cout<<"\nEnter the dimension of the matrix: ";
cin>>m>>n;
cout<<"\nEnter the element of the matrix: ";
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
}
//to check whether the given matrix is sparse or not
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(arr[i][j]==0)
        {
            count++;
        }
    }
}
if(count>(m*n)/2)
{
    cout<<"\nThe given matrix is sparse matrix ";
    cout<<"\nEntered sparse matrix is : ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" "<<endl;
        }
        cout<<"\n";
    }
}
else{
    cout<<"\nThe given matrix is not sparse matrix: ";

}
}