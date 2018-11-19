#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

#define mp make_pair
#define pb push_back
#define bp __builtin_popcount
#define FI first
#define SE second

#define mt(a,b,c) mp(a,mp(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define pii pair<int,int>

const ll mo=1e9+7;
const ll INF=1e9+1;
const ld pi=acos(-1);
const int mxn=1e2+5;
const int cons=1;

using namespace std;

map<int,int> ct1;
map<pii,int> ct2;

int nxt(int t)
{
    return (t+1)%12;
}

int main()
{
    //freopen("input.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h,m,s,t1,t2,ct,t1_nxt;
    cin>>h>>m>>s>>t1>>t2;
    // Normalizing time
    if(h==12)
    {
        h=0;
    }
    if(t1==12)
    {
        t1=0;
    }
    if(t2==12)
    {
        t2=0;
    }
    // Hour hand
    if(m==0 && s==0)
    {
        //cout<<"hi1\n";
        ct1[h]++;
    }
    else
    {
        //cout<<"hi2\n";
        ct2[mp(h,nxt(h))]++;
    }
    // Minute hand
    if(s==0 && m%5==0)
    {
        //cout<<"hi3\n";
        ct1[m/5]++;
    }
    else
    {
        //cout<<"hi4\n";
        ct2[mp(m/5,nxt(m/5))]++;
    }
    // Second hand
    if(s%5==0)
    {
        //cout<<"hi5\n";
        ct1[s/5]++;
    }
    else
    {
        //cout<<"hi6\n";
        ct2[mp(s/5,nxt(s/5))]++;
    }
    // Calculating hands in between t1 and t2
    ct=0;
    while(t1!=t2)
    {
        t1_nxt=nxt(t1);
        ct+=ct1[t1];
        ct+=ct2[mp(t1,t1_nxt)];
        t1=t1_nxt;
    }
    if(ct==0 || ct==3)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
