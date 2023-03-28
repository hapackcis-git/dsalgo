//C++ programming to represent the sparse matrix
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
//sparse matrix of class 5X6 with non-zero values
int sparsematrix[5][6]=
{
{0,0,0,0,9,0},
{0,8,0,0,0,0},
{4,0,0,2,0,0},
{0,0,0,0,0,5},
{0,0,2,0,0,0}
};
//Finding the total non-zero values in the sparse matrix
int size=0;
for(int row=0;row<5;row++)
{
    for(int column=0;column<6;column++)
    {
        if(sparsematrix[row][column]!=0)
        size++;
    }
}
//Defining the resultmatrix
int resultMatrix[3][size];
//Generating the result matrix
int k=0;
for(int row=0;row<5;row++)
{
    for(int column=0;column<6;column++)
    {
        if(sparsematrix[row][column]!=0)
        {
            resultMatrix[0][k]=row;
            resultMatrix[1][k]=column;
            resultMatrix[2][k]=sparsematrix[row][column];
            k++;0
        }
    }
    //Displaying result matrix
    cout<<"\nTriplet Representation: "<<endl;
    for(int row=0;row<3;row++)
    {
        for(int column=0;colum<size;column++)
        {
            cout<<resultMatrix[row][column]<<" ";
            cout<<endl;;;
        }
    }
    return 0;
}

}