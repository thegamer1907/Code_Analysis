//http://codeforces.com/problemset/problem/371/C
//template by murugappan....Copied from chamow :p

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define x first
#define y second
#define pb push_back
#define mp make_pair
#define priq(i,comp) priority_queue( i, vector< i >,comp)
template<class t>
t lcm(t a,t b)
{
    return ((a*b)/__gcd(a,b));
}
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

//end of template
ll bc,cc,sc;
ll nb,ns,nc;
ll pb,ps,pc;
ll budget;
ll remb,rems,remc;
ll mysearch(ll l,ll r)
{
    if(l==r)
        return l;
    ll mid=(l+r+1)/2;
    ll reqb=max(0LL,bc*mid-remb),reqs=max(0LL,sc*mid-rems),reqc=max(0LL,cc*mid-remc);
    {
        ll cost=reqb*pb+reqs*ps+reqc*pc;
        if(cost<=budget)
            return mysearch(mid,r);
        else
            return mysearch(l,mid-1);
    }
}
int main()
{
    /*
        assert(freopen("input.txt","r",stdin));
        assert(freopen("output.txt","w",stdout));
    */
    fastread;
    string s;
    cin>>s;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='B')
            bc++;
        else if(s[i]=='C')
            cc++;
        else
            sc++;
    }
    cin>>nb>>ns>>nc;
   ll val=LONG_LONG_MAX;
    if(bc!=0)
        val=nb/bc;
    if(cc!=0)
        val=min(val,nc/cc);
    if(sc!=0)
        val=min(val,ns/sc);
    //val=min(val,min(nc/cc,ns/sc));
    remb=nb-val*bc;
    rems=ns-val*sc;
    remc=nc-val*cc;
    cin>>pb>>ps>>pc;
    cin>>budget;
    ll lim=2e12;
    cout<<val+mysearch(0,lim);
    return 0;
}

