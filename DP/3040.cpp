#pragma optimize("-O3")
#include <bits/stdc++.h>
using namespace std;
#ifdef Wavator
#include "local_debug.h"
#else
#define debug(...)
#endif
#define pb push_back
#define rep(i,a,n) for(int i=(a);i<(n);++i)
#define per(i,a,n) for(int i=(n)-1;i>=(a);--i)
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define fi first
#define se second
typedef long long ll;
typedef double db;
typedef vector<int> vi;
typedef pair<int, int> pii;
const ll mod = 1e9 + 7;
struct Mat
{
    ll a[4][4];
    int n,m;
    Mat(int _n,int _m){
        n=_n,m=_m;
        for(int i=0;i<n;i++)
            fill(a[i],a[i]+m,0);
    }

    ll*operator[](const int x){
        return a[x];
    }

    Mat operator*(const Mat &b)const{
        Mat ret(n,b.m);
        for(int i=0;i<n;i++)
            for(int j=0;j<b.m;j++)
                for(int k=0;k<m;k++){
                    ll t = (ll)a[i][k] * b.a[k][j];
                    if (t >= mod)
                        t %= mod;
                    ret[i][j] += t;
                    if (ret[i][j] >= mod)
                        ret[i][j] -= mod;
                }
        return ret;
    }

    Mat operator^(long long k)const{
        Mat ret(n,m),b = *this;
        for(int i=0;i<n;++i)ret[i][i]=1;
        for(;k;k>>=1,b=b*b){
            if(k&1)
                ret=ret*b;
        }
        return ret;
    }
};

int main() {
    Mat a(4,4);
    rep(i,0,4){
        rep(j,0,4){
            a[i][j]=(i!=j);
        }
    }
    int n;
    cin>>n;
    cout<<(a^(n))[3][3]<<endl;
    return 0;
}