/***** King_01 *****/
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define ppb         pop_back
#define    endl        '\n'
#define mii         map<ll int,ll int>
#define msi         map<string,ll int>
#define mis         map<ll int, string>
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
#define mpi         map<pair<ll int,ll int>,ll int>
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define vii         vector<pair<ll int, ll int>>
#define vs          vector<string>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define what_is(x)  cerr << #x << " is " << x << endl;
using namespace std;
#define N  100005

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m],d[n];
    rep(i,0,n)
    cin>>a[i];
    rep(i,0,m)
    cin>>b[i];
    int *k=max_element(a,a+n);
    int c[*k+1]={0};
    rep(i,0,n)
    c[a[i]]+=1;
    int s=0;
    rep(i,0,*k+1)
    if(c[i]>0)
    s+=1;
    d[0]=s;
    rep(i,1,n)
    {
        if(c[a[i-1]]>1)
        {
            c[a[i-1]]-=1;
            d[i]=d[i-1];
        }
        else if(c[a[i-1]]==1)
            d[i]=d[i-1]-1;
    }
    rep(i,0,m)
    cout<<d[b[i]-1]<<endl;
    return 0;
}
