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
int a[101],b[101];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    f(i,1,n+1)
    {
        cin>>a[i];
        b[a[i]]=i;
    }
    f(i,1,n+1)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}