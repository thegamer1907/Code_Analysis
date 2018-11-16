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
}
int max(int x,int y)
{
    if(x>y)
    return x;
    return y;
}

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
    char c[100009];
    int q,l,r;
    cin>>c;
    cin>>q;
    int a[100009];
    a[0]=0;
    int len=strlen(c);
    for(int i=1;i<len;i++)
    {
        a[i]=a[i-1];
        if(c[i]==c[i-1])
        a[i]++;
    }
    while(q--)
    {
        cin>>l>>r;
        cout<<a[r-1]-a[l-1]<<endl;
    }
    return 0;
}