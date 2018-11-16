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
    int m=0;
    f(i,0,n)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        m++;
        else if(a<b)
        m--;
    }
    if(m>0)
    cout<<"Mishka"<<endl;
    else if(m==0)
    cout<<"Friendship is magic!^^"<<endl;
    else
    cout<<"Chris"<<endl;
    return 0;
}