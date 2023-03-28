#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int arr[10][10],m,n,zeros=0,transpose[10][10];
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
    cout<<"\nThe given matrix is sparse matrix: ";
    cout<<"The sparse matrix is: "<<endl;
    for (int  i = 0; i < m; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
        
    }
    
    //computing the transpose of sparse matrix
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++){
            transpose[j][i]=arr[i][j];
        }
    }
    //printing the transpose of sparse matrix
    cout<<"\nThe transpose of sparse matrix: "<<endl;
    for (int  i = 0; i < n; i++)
    {
      for (int  j = 0; j < m; j++)
      {
          cout<<transpose[i][j]<<" ";
      }
      cout<<"\n";
    }
    

}
else{
    cout<<"\nThe given matrix is not sparse matrix: ";
}
return 0;
}