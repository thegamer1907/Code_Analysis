#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int mod = 60*60*12;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int h, m, s, t1, t2;
    cin>>h>>m>>s>>t1>>t2;
    set<int> se;
    se.insert((60*60*h+60*m + s)%mod);
    se.insert((m*12*60+12*s)%mod);
    se.insert((s*12*60)%mod);
    t1 = t1*60*60%mod;
    t2 = t2*60*60%mod;
    for(auto i:se)
        cerr<<i<<' ';
    cerr<<endl;
    cerr<<t1<<' '<<t2<<endl;
    for(int i = 0; i < mod; ++i)
    {
        if(se.count((t1+i+mod)%mod))
            break;
        if((t1+i+mod)%mod == t2)
            return cout<<"YES"<<endl, 0;
    }
    for(int i = 0; i < mod; ++i)
    {
        if(se.count((t1-i+mod)%mod))
            break;
        if((t1-i+mod)%mod == t2)
            return cout<<"YES"<<endl, 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
