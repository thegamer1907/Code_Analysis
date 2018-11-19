#include <bits/stdc++.h>
#define ll long long
#define INF 1000000005
#define MOD 1000000007
#define EPS 1e-10
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define rrep(i,n) for(int i=(int)(n)-1;i>=0;--i)
#define srep(i,s,t) for(int i=(int)(s);i<(int)(t);++i)
#define each(a,b) for(auto (a): (b))
#define all(v) (v).begin(),(v).end()
#define len(v) (int)(v).size()
#define zip(v) sort(all(v)),v.erase(unique(all(v)),v.end())
#define cmx(x,y) x=max(x,y)
#define cmn(x,y) x=min(x,y)
#define fi first
#define se second
#define pb push_back
#define show(x) cout<<#x<<" = "<<(x)<<endl
#define spair(p) cout<<#p<<": "<<p.fi<<" "<<p.se<<endl
#define svec(v) cout<<#v<<":";rep(kbrni,v.size())cout<<" "<<v[kbrni];cout<<endl
#define sset(s) cout<<#s<<":";each(kbrni,s)cout<<" "<<kbrni;cout<<endl
#define smap(m) cout<<#m<<":";each(kbrni,m)cout<<" {"<<kbrni.first<<":"<<kbrni.second<<"}";cout<<endl

using namespace std;

typedef pair<int,int> P;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<double> vd;
typedef vector<P> vp;
typedef vector<string> vs;

const int MAX_N = 100005;

int cnt[16];
bool aru[4];

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,K;
    cin >> n >> K;
    rep(i,n){
        int c = 0;
        rep(j,K){
            int a;
            cin >> a;
            if(a == 0){
                aru[j] = true;
            }
            c += (a << (3-j));
        }
        cnt[c]++;
    }
    if(cnt[0]>0){
        cout << "YES\n";
    }else{
        if(cnt[1]>0 && aru[3]){
            cout << "YES\n";
            return 0;
        }
        if(cnt[2]>0 && aru[2]){
            cout << "YES\n";
            return 0;
        }
        if(cnt[4]>0 && aru[1]){
            cout << "YES\n";
            return 0;
        }
        if(cnt[8]>0 && aru[0]){
            cout << "YES\n";
            return 0;
        }
        if(cnt[9]>0&&cnt[6]>0){
            cout << "YES\n";
            return 0;
        }
        if(cnt[12]>0&&cnt[3]>0){
            cout << "YES\n";
            return 0;
        }
        if(cnt[10]>0&&cnt[5]>0){
            cout << "YES\n";
            return 0;
        }
        cout << "NO\n";
    }
    return 0;
}
