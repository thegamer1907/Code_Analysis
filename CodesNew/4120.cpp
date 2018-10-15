#include <bits/stdc++.h>
#include <bitset>
#define ll long long
#define pb push_back
#define f first
#define s second
#define mod 998244353
#define hurry ios::sync_with_stdio(false)
#define PI 3.141592654
#define xx (int) 2e5+7
//1618
using namespace std;

ll N,a[xx],pref[xx],ans,q;

int main()
{
    hurry;
    cin>>N>>q;
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
        pref[i]=a[i];
        pref[i]+=pref[i-1];
    }
    int i=0,rest=a[0];
    while(q--)
    {
        ll x; cin>>x;

            if(rest > x) rest-=x;
            else if(rest==x)
            {
                i++ , i%N;
                rest=a[i];
            }
            else
            {
                x-=rest;
                ll z=pref[i]+x;
                int idx=upper_bound(pref+i,pref+N,z)-pref;
                i=idx;
                rest=pref[i]-z;
            }
            ans=N-i;
            if(ans==0) ans=N,i=0, rest=a[0];
            cout<<ans<<"\n";
    }
    return 0;
}
/*
4 4
1 2 3 4
2 5 3 9


*/
