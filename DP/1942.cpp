#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define mem(a,b) memset(a,b,sizeof(a))
#define endl "\n"
#define mod 1000000007
using namespace std;
/*
int gcd(int x,int y)
{
    if(x%y==0)
    return y;
    return gcd(y,x%y);
}
int no1(int x)
{
    int count=0;
    while(x)
    {
        if(x%2)
        count++;
        x=x>>1;
    }
    return count;
}
ll min(ll x,ll y)
{
    if(x<y)
    return x;
    return y;
}*/
int max(int x,int y)
{
    if(x>y)
    return x;
    return y;
}
/*
ll power(int  b,int p)
{
    if(p==0)
    return 1;
    ll temp=power(b,p/2);
    temp=temp*temp;
    if(p%2==1)
    temp=temp*b;
    return temp;
}
*/
int lif(float x)
{
    int y=x;
    if(x==(float)y)
    return y;
    return y+1;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int c[1000000];
    mem(c,0);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int nod=0;
    for(int i=n-1;i>=0;i--)
    if(c[a[i]]==0)
    {
        nod++;
        c[a[i]]=1;
        a[i]=nod;
    }
    else
    a[i]=nod;
    while(m--)
    {
        cin>>n;
        n--;
        cout<<a[n]<<endl;
    }
    return 0;
}