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
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    cin>>a[1];
    for(int i=2;i<=n;i++)
    {
        cin>>a[i];
        a[i]+=a[i-1];
        
    }
    int m=-1;
    a[0]=0;
    for(int i=1;i<=n;i++)
    for(int j=i;j<=n;j++)
    {
        m=max(m,a[n]-2*(a[j]-a[i-1])+(j-i+1));
    }
    cout<<m;
    return 0;
}