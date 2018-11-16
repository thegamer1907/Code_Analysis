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
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<n/2<<endl;
    f(i,0,n/2-1)
    {
        cout<<2<<" ";
    }
    if(n%2==0)
    cout<<2<<endl;
    else
    cout<<3<<endl;
    return 0;
}