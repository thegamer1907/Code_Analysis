#include <bits/stdc++.h>
#define ill int long long
#define fi first
#define se second
#define pb push_back
#define ld long double
using namespace std;
ill n,a,b,x,y,ans=0,cnt=1,i;
int main()
{
    //freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    cin>>n>>a>>b;
    a--;
    b--;
    y=1;
    while (y<n)
        y*=2,x++;
    cnt=1;
    for (i=1;i<x;i++)
    {
            cnt*=2;
        if (b/cnt==a/cnt)
            {
                cout<<i;
                return 0;
            }
    }
    cout<<"Final!";
}
