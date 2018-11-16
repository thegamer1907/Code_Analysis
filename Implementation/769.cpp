#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int n,t;
    cin>>n>>t;
    char *ch=new char[n];
    int *mas=new int [n];
    cin>>ch;
    for(int i=0;i<n;i++)
    {
        if(ch[i]=='G')
            mas[i]=0;
        else
            mas[i]=1;
    }
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(mas[j]==1&&mas[j+1]==0)
            {
              swap(mas[j],mas[j+1]);
              j++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(mas[i]==1)
            cout<<'B';
        else
            cout<<'G';
    }

    return 0;
}
