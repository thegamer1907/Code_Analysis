#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define lp(i,a,n) for(int i=a;i<=n;++i)
#define lpd(i,a,n) for(int i=a;i>=n;--i)
#define mem(a,b) memset(a,b,sizeof a)
#define all(v) v.begin(),v.end()
#define println(a) cout <<(a) <<endl
#define sz(x) ((int)(x).size())
#define readi(x) scanf("%d",&x)
#define read2i(x,y) scanf("%d%d",&x,&y)
#define read3i(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define mod 1000000007
#define eps 1e-8
#define infi 1000000000
#define infll 1000000000000000000ll
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef set<int> si;
typedef map<int,int> mii;

const int N = 100002;
int n;
string x,a[N];
bool ok;

int main(){
    cin >>x;
    readi(n);
    lp(i,1,n){
        cin >>a[i];
        ok |= a[i] == x;
    }
    lp(i,1,n) lp(j,1,n){
        string y;
        y += a[i][1];
        y += a[j][0];
        ok |= x == y;
    }
    if(ok) cout <<"YES";
    else cout <<"NO";
}

/*
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/
