#include <queue>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <complex>
#include <fstream>
#include <cstring>
#include <string>
#include <cassert>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

//macros
typedef long long ll;
typedef complex<double> point;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef tree<
pair<int,int>,
null_type,
less<pair<int,int> >,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;



#define FOR(k,a,b) for(int k=(a); k<=(b); ++k)
#define REP(k,a) for(int k=0; k<(a);++k)
#define SZ(a) int((a).size())
#define ALL(c) (c).begin(),(c).end()
#define PB push_back
#define MP make_pair
#define INF 99999999
#define MOD 1000000007
#define MAX 15383
#define ITERS 100
#define pi 3.1415926
#define MAXN 50000
#define _gcd __gcd
#define f first
#define s second

using namespace std;
#define EPS 1e-9
#define ERR -987654321

int n,k;
int arr[100000];
ll dp[100000][21];
int opt[100000][21];
int curl = 0;
int curr = 0;
int freq[100001];
ll curcost=0;
void trans(int L, int R){
    while(curl<L){
        curcost-=freq[arr[curl]]-1;
        freq[arr[curl]]--;
        curl++;
    }
    while(curl>L){
        curl--;
        curcost+=freq[arr[curl]];
        freq[arr[curl]]++;
    }
    while(curr<R){
        curr++;
        curcost+=freq[arr[curr]];
        freq[arr[curr]]++;
    }
    while(curr>R){
        curcost-=freq[arr[curr]]-1;
        freq[arr[curr]]--;
        curr--;
    }
}
pair<int,ll> get(int mid, int ck, int optL, int optR){
    if(dp[mid][ck]!=2000000000000000l) return MP(opt[mid][ck],dp[mid][ck]);
    ll minival = 2000000000000000l;
    int bp = -1;
    for(int pp = optR; pp >=optL; pp--){
        trans(pp,mid);
        ll vr = curcost+((pp==0)?0:dp[pp-1][ck-1]);
        if(vr < minival){
            minival = vr;
            bp = pp;
        }
    }
    dp[mid][ck]=minival;
    opt[mid][ck]=bp;
    return MP(bp,minival);
}
void solve(int l, int r, int optL, int optR, int ck){
    if(l>r) return;
    optR = min(optR,r);
    int mid = (l+r)/2;
    pair<int,ll> pp= get(mid,ck,optL,min(optR,mid));
    if(l==r) return;
    solve(l,mid,optL,pp.first,ck);
    solve(mid+1,r,pp.first,optR,ck);

}
int main(){
    cin >> n >> k;
    curr=n-1;
    REP(i,n){
        cin >> arr[i];
    }
    REP(i,n) REP(j,k+1) dp[i][j]=2000000000000000l;
    for(int i = 1; i <= k; i++){
        //initialize current cost
        for(int j=0;j<=n;j++) freq[j]=0;
        curcost=0;
        for(int j=0;j<n;j++){
            curcost+=freq[arr[j]];
            freq[arr[j]]++;
        }
        curl = 0;
        curr = n-1;
        solve(0,n-1,0,n-1,i);
    }
    cout << dp[n-1][k] << endl;
}
