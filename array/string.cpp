#include <iostream>
#include <cstring>
using namespace std;
int main(){
string str;
char n[10];
int i,j,len;
cout<<"\nEnter main string: ";
cin>>str;
cout<<"\nEnter sub string: ";

cin>>n;
for(i=0;str[i]!=NULL;i++)
{
    for(j=0;n[j]!=NULL;j++)
    {
        if(str[i+j]!=n[j])
        {
            break;
        }
    }
    if(j==len)
    cout<<i+1<<"Is the sub string inde number ";

}
cout<<"substring is not found: ";
}