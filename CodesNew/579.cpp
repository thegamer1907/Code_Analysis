/*input
7
2 3 5 7 11 4 8
2
8 10
2 123

*/
/*
  ####   #    #    ##    #####    ####           #    #
 #       #    #   #  #   #    #  #    #          #    #
  ####   ######  #    #  #    #  #    #          #    #
      #  #    #  ######  #    #  #    #          # ## #
 #    #  #    #  #    #  #    #  #    #          ##  ##
  ####   #    #  #    #  #####    ####  #######  #    #

*/
#include<bits/stdc++.h>
#define lld          long long int
#define pb          push_back
#define ppb         pop_back
#define    endl        '\n'
#define mii         map<lld,lld>
#define msi         map<string,lld>
#define mis         map<lld, string>
#define mpi         map<pair<lld ,lld >,lld >
#define pii         pair<lld,lld>
#define vi          vector<lld>
#define vs          vector<string>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (lld)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define what_is(x)  cerr << #x << " is " << x << endl;
using namespace std;
#define N  10000005
bool vis[N];
lld spf[N];
void sieve()
{
    spf[1]=1;
    for(lld i=2;i<N;i++)
    {
        spf[i]=2;
    }
    for(lld i=3;i<N;i+=2)
    {
        spf[i]=i;
    }
    for(lld i=3;i*i<N;i++)
    {
        if(spf[i]==i)
        {
            for(lld j=i*i;j<N;j+=i)
            {
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
        }
    }
}
vector <lld> pf(lld x)
{
    map <lld,lld> m;
    vector <lld> ret;
    while(x!=1)
    {
        m[spf[x]]+=1;
        x/=spf[x];
    }
    for(auto i : m)
    {
        ret.pb(i.F);
    }
    return ret;
}
void solve()
{
    sieve();
    vector <lld> v,a;
    lld n,m;
    cin>>n;
    for(lld i=0;i<n;i++)
    {
        lld x;
        cin>>x;
        a=pf(x);
        for(auto it:a)
        {
            v.pb(it);
        }
    }
    sort(v.begin(),v.end());
    lld q;
    cin>>q;
    while(q--)
    {
        lld l,r;
        cin>>l>>r;
        cout<<(ubnd(v.begin(),v.end(),r)-lbnd(v.begin(),v.end(),l))<<"\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}
