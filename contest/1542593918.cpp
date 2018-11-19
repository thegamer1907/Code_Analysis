#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <climits>
#include <cstring>
#include <string>
#include <set>
#include <bitset>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#include <cassert>
#include <ctime>
#define rep(i,m,n) for(i=m;i<=(int)n;i++)
#define inf 0x3f3f3f3f
#define mod 998244353
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ll long long
#define pi acos(-1.0)
#define pii pair<long long,int>
#define sys system("pause")
#define ls (rt<<1)
#define rs (rt<<1|1)
#define all(x) x.begin(),x.end()
const int maxn=1e5+10;
const int N=5e4+10;
using namespace std;
ll gcd(ll p,ll q){return q==0?p:gcd(q,p%q);}
ll qmul(ll p,ll q,ll mo){ll f=0;while(q){if(q&1)f=(f+p)%mo;p=(p+p)%mo;q>>=1;}return f;}
ll qpow(ll p,ll q){ll f=1;while(q){if(q&1)f=f*p%mod;p=p*p%mod;q>>=1;}return f;}
int n,m,k,t;
string a,b[maxn];
int main(){
    int i,j;
    cin>>a>>n;
    bool flag=false;
    rep(i,1,n)
    {
        cin>>b[i];
        if(b[i]==a)flag=true;
    }
    rep(i,1,n)rep(j,1,n)
    {
        string x;
        x+=b[i][1];
        x+=b[j][0];
        if(x==a)flag=true;
    }
    puts(flag?"YES":"NO");
    return 0;
}