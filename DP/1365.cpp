#include<bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mp make_pair
#define ll long long
#define db double
#define pb push_back
#define ld long double
#define INF INT_MAX
#define M LONG_LONG_MAX



int main()
{
	
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    IOS
    ll n,i,a,m,ans=0;
    cin>>n;
    vector <ll> v;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a==0)
            v.pb(1);
        else
        {
            ans++;
            v.pb(-1);
        }
    }
    ll max_ending_here=0,max_so_far=0,l=0,r=0,lidx=0,ridx=0;
    for(i=0;i<n;i++,r++)
    {
        max_ending_here=max_ending_here+v[i];
        if(max_ending_here<0)
        {
            max_ending_here=0;
            l=i+1;
        }
        if(max_so_far<max_ending_here)
        {
            max_so_far=max_ending_here;
            lidx=l;
            ridx=r;
        }
    }
    for(i=lidx;i<=ridx;i++)
    {
        if(v[i]==1)
            ans++;
        else
            ans--;
    }
    cout<<ans;
    return 0;
}	