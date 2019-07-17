#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll n,m,k;
ll p[(int)1e5+10];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    ll i,j;
    cin>>n>>m>>k;
    for(i=0;i<m;i++)
        cin>>p[i];
    ll pos=0,ans=0;
    j=k;
    for(i=0;i<m;i++)
    {
        //if(p[i]>j+pos && p
        while(p[i]>j+pos)
            j+=k;
        while(p[i]<=j+pos)
            i++;
        ans++;
        pos=i--;
    }
    cout<<ans<<endl;
    return 0;
}

/*

10 4 5
3 5  9 10

*/