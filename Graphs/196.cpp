#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,t;
    cin>>n>>t;;
char a[n],b[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
    b[i]=a[i];
}
for(int i=0;i<t;i++)
{
    for(int j=0;j<n-1;j++)
    {
        if(a[j]=='B' and a[j+1]=='G')
        {
            b[j]=a[j+1];
            b[j+1]=a[j];
        }

    }
    for(int i=0;i<n;i++)
    {
        a[i]=b[i];
    }
}
for(int i=0;i<n;i++)
{
    cout<<b[i];
}

}
