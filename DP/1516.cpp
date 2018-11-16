#include<bits/stdc++.h>
using namespace std;
#define el '\n'
#define ull unsigned long long
#define ui unsigned int
#define ll long long
int a[105];
int aa[105];
int ar[105];
int mid(int st,int ed,int n)
{
    int sum=0;
    for(int i=0;i<st;i++)
        sum+=ar[i];
    for(int i=st;i<=ed;i++)
        if(ar[i]==0)
            sum++;
    for(int i=ed+1;i<n;i++)
        sum+=ar[i];
    return sum;
}
int main()
{
    int n,tem,c=0,mx=0,pos,st=0,fst=0,cn1=0,one=0,zero=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>tem;
        if(!tem)
            zero++;
        ar[i]=tem;
        a[i]=zero;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            c=mid(i,j,n);
            mx=max(mx,c);
        }
    }
    if(zero==0)
        mx=n-1;
    if(n==1 && ar[0]==1)
        mx=0;
    if(n==1 && ar[0]==0)
        mx=1;
    cout<<mx<<el;
    return 0;
}
/*
9
1 0 0 1 0 0 1 1 0
*/
