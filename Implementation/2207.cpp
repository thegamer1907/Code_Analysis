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
int max(int a,int b)
{
    if(a>b)
    return a;
    return b;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,n,w;
    cin>>k>>n>>w;
    cout<<max(0,k*(w*(w+1))/2-n)<<endl;
    return 0;
}