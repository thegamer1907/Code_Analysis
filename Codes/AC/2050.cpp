#include<bits/stdc++.h>
using namespace std;
#define fore(i, l, r) for(li i = (l); i < (r); ++i)
#define forn(i, n) fore(i, 0, n)
#define fori(i, l, r) fore(i, l, (r) + 1)
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define mp make_pair
#define max1 1000000007
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
int main()
{
    iostream::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    li n,k,cnt=0;
    cin>>n>>k;
    vector<li> a(n);
    forn(i,n)
    {
        cin>>a[i];
        if(a[i]==0)
            cnt++;
    }
    map<li,li> v1,v2;
    vector<li> p1(n,0),p2(n,0);
    fore(i,1,n-1)
    {
        if(a[i]==0)
            continue;
        v1[a[i-1]]++;
        if(a[i]%k==0)
            p1[i]=v1[a[i]/k];
    }

    for(li i=n-1;i>=1;i--)
    {
        //if(i<n-1)
            //v2[i]=v2[i+1];
        if(a[i]==0)
            continue;
        v2[a[i+1]]++;
        if(a[i]%k==0)
            p2[i]=v2[a[i]*k];
    }
    li s=0;
    fore(i,1,n-1)
    {
        s+=p1[i]*p2[i];
    }
    if(cnt>=3)
        s+=(cnt*(cnt-1)*(cnt-2))/6;
    cout<<s;
}
