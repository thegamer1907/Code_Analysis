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
    f(i,1,n+1)
    {
        if(i==1)
        {
            cout<<"I hate ";
        }
        else if(i%2==0)
        {
            cout<<"that I love ";
        }
        else
        {
            cout<<"that I hate ";
        }
    }
    cout<<"it"<<endl;
    return 0;
}
