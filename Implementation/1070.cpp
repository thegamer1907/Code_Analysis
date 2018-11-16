#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
cin>>n;
int t;
cin>>t;
char a[n];
for(int i=0;i<=n-1;i++)
{
    cin>>a[i];
}
for(int j=0;j<=t-1;j++)
for(int i=0;i<=n-2;i++)
{
    if(a[i]=='B'&&a[i+1]=='G')
    {
        a[i]='G';a[i+1]='B';
        i+=1;
    }
}
for(int i=0;i<=n-1;i++)
{
    cout<<a[i];
}}
