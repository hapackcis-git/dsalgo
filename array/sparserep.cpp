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
    }
    
}
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
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
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
       if(arr[i][j]!=0)
    {
        size ++;
    }
      }
  }
  int k=0;
  int triplet[3][size];
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
          if (arr[i][j]!=0)
          {
            triplet[0][k]=i;
            triplet[1][k]=j;
            triplet[2][k]=arr[i][j];
            k++;
          }
          
      }
  }
  cout<<"\nThe triplet of the matrix is: "<<endl;
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
          cout<<triplet[i][j]<<" ";
      }
      cout<<"\n";
  }

}
else{
    cout<<"\nThe given matrix is not sparse matrix ";
}
return 0;
}