#include <bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
#define MP make_pair
#define PB push_back
#define ll long long
#define int long long
#define f(i,x,n) for(int i=x;i<n;i++)
#define mod 1000000007
int a[100001],b[5];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    f(i,0,n)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    int ans=0;
    ans+=b[4];
    ans+=b[2]/2;
    b[2]-=(b[2]/2)*2;
    int temp=min(b[1],b[3]);
    ans+=temp;
    b[1]-=temp,b[3]-=temp;
    ans+=b[1]/4;
    b[1]-=(b[1]/4)*4;
    temp=min(b[1]/2,b[2]);
    ans+=temp;
    b[1]-=temp*2;b[2]-=temp;
    temp=min(b[1],b[2]);
    ans+=temp;
    b[1]-=temp;b[2]-=temp;
    if(b[1]>0)
    ans++;
    if(b[2]>0)
    ans++;
    ans+=b[3];
    cout<<ans<<endl;
    return 0;
}