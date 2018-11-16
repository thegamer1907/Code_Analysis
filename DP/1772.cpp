#include<bits/stdc++.h>

using namespace std;

typedef     long long      ll;
typedef     long double    ld;
typedef     pair<int,int>  pii;
typedef     pair<ll,ll>    pll;

#define     rep(i,a,b)     for(int i=a;i<b;i++)
#define     repr(i,a,b)    for(int i=a;i>=b;i--)
#define     pb             push_back
#define     mp             make_pair
#define     fs             first
#define     ss             second
#define     mems(m,b)      memset(m,b,sizeof(m))
#define     all(v)         v.begin(),v.end()
#define     mod            1000000007
#define     maxn           100000+50
#define     fast           ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string s;
int main()
{
    fast;
    cin>>s;
    bool flag=false,fAB=false,fBA=false;
    rep(i,0,s.size()-1)
    {
        if(s[i]=='A' and s[i+1]=='B' and !fAB){fAB=true;i++;}
        else if(s[i]=='B' and s[i+1]=='A' and fAB){flag=1;break;}
    }
    rep(i,0,s.size()-1)
    {
        if(s[i]=='B' and s[i+1]=='A' and !fBA) {fBA=true;i++;}
        else if(s[i]=='A' and s[i+1]=='B' and fBA) {flag=1;break;}
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
}