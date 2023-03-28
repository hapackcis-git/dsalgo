#include <iostream>
#include <conio.h>
using namespace std;
int maxSum(int arr[],int n)
{
    int arrsum=0;
    int currVal=0;
    for(int i=0;i<n;i++)
    {
        arrsum=arrsum+arr[i];
        currVal=currVal+(i*arr[i]);
    }
    int maxVal=currVal;
    for(int j=1;j<n;j++)
    {
        currVal=currVal+arrsum-n*arr[n-j];
        if(currVal>maxVal)
        maxVal=currVal;
    }
    return maxVal;
}
int main(){
int arr[]={1,2,3,4,5,6,7,8,9,10};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"\nThe maximum sum is: "<<maxSum(arr,n);

}