#include<bits/stdc++.h>
using namespace std;

#define pi 3.141592654
#define hell 1000000007
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fix(n) cout << fixed << setprecision(n)
#define in1(n) int n;cin>>n
#define in2(a, b) int a,b;cin>>a>>b
#define ina(a,n,c) c a[n];rep(i,0,n)cin>>a[i]
#define ins(s) string s;cin>>s
#define Max(a,b) ((a)>(b)?(a):(b))
#define Min(a,b) ((a)<(b)?(a):(b))
#define rep(i,a,b) for (__typeof((b)) i=(a);i<(b);i++)
#define repp(i,a,b,p) for(__typeof((b)) i=(a);i<(b);i+=p)
#define ren(i,a,b) for(__typeof((a)) i=(a);i>=(b);i--)
#define ll  long long
#define ull unsigned long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define vi vector<int>
#define pii pair<ull,int>
#define piii pair<pair<int,int>,int>
#define all(v) (v).begin(), (v).end()
#define sz(x) (int)x.size()
#define out(n) cout<<n<<" "
#define outl(n) cout<<n<<endl
bool check(int n){
    int c=0;
    while(n>0){
        c+=n%10;n/=10;
    }
    if(c==10)return 1;
    return 0;
}
void solve(){
    in1(k);
    int c=19;
    while(1){
        // out(c);
        if(check(c))k--;
        if(k==0){
            out(c);return;
        }
        c++;
    }
}
int main(){
	io;
	int t=1;
// 	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}