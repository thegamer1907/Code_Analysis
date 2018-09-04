#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define fre     freopen("in.txt","r",stdin);freopen("0.out","w",stdout)
#define abs(x) ((x)>0?(x):-(x))
#define rep(i,start,lim) for(ll i=start;i<lim;i++)
#define repr(i,start,lim) for(ll i=start;i>=lim;i--)
#define scan(x) scanf("%lld",&x)
#define print(x) printf("%lld ",x)
#define br printf("\n")
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define pll pair<ll,ll>
#define all(c) (c).begin(),(c).end()
#define INF       1000111000111000111LL
#define EPS         (double)1e-10
#define MOD         1000000007
#define PI          3.14159265358979323
#define F first
#define S second
#define gcd(a,b)    __gcd(a,b)
#define lcm(a,b) ((a)*((b)/gcd(a,b)))
#define endl '\n'
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout<<setprecision(0)<<fixed
typedef long long ll;
ll powm(ll base,ll exp,ll mod=MOD) {ll ans=1;while(exp){if(exp&1) ans=(ans*base)%mod;exp>>=1,base=(base*base)%mod;}return ans;}
typedef long double ld;
vector<ll> z(1000006,0);
set<ll,greater<ll> > sl;
unordered_set<ll> s;
int main()
{
    sync;
    ll i,j,k,res=0,n,m,sum=0,mx=0;
    string st;
    cin>>st;
    ll len=st.length();
    /*if(len<=2){
        cout<<"Just a legend";
        return 0;
    }*/
    ll l=0,r=0;
    //z[0]
    rep(i,1,len){
        if(r<i){
            l=r=i;
            while(st[r-l]==st[r]&&r<len){
                r++;
            }
            z[i]=r-l;
            if(r==len){
                sl.insert(z[i]);
                mx=max(mx,z[i]-1);
            }
            else{
                mx=max(mx,z[i]);
                s.insert(z[i]);
            }
            r--;
        }
        else{
            k=i-l;
            if(i+z[k]-1<r){
                z[i]=z[k];
                //s.insert(z[i]);
            }
            else{
                l=i;
                while(st[r-l]==st[r]&&r<len){
                    r++;
                }

                z[i]=r-l;
                if(r==len){
                    sl.insert(z[i]);
                    mx=max(mx,z[i]-1);
                }
                else{
                    mx=max(mx,z[i]);
                    s.insert(z[i]);
                }
                r--;
            }
        }
    }
    //cout<<mx<<endl;
    for(auto &value:sl){
        //cout<<value<<endl;
        if(value<=mx){
            res=value;
            break;
        }
    }
    if(res==0)cout<<"Just a legend";
    else{
        cout<<st.substr(0,res);
    }
    return 0;
}