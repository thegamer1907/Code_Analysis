//satyaki3794
#include <bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
#define MOD (1000000007LL)
#define LEFT(n) (2*(n))
#define RIGHT(n) (2*(n)+1)
 
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
 
ll pwr(ll base, ll p, ll mod=MOD){
ll ans = 1;while(p){if(p&1)ans=(ans*base)%mod;base=(base*base)%mod;p/=2;}return ans;
}
 
 
ll gcd(ll a, ll b){
    if(b == 0)  return a;
    return gcd(b, a%b);
}


const int N = 100002;
int n, k, arr[N], lptr = 1, rptr = 0;
ll cnt[N], DP[22][N], curr_val = 0;


inline void traverse(int l, int r){
	while(lptr < l){
		cnt[arr[lptr]]--;
		curr_val -= cnt[arr[lptr]];
		lptr++;
	}
	while(lptr > l){
		lptr--;
		curr_val += cnt[arr[lptr]];
		cnt[arr[lptr]]++;
	}
	while(rptr > r){
		cnt[arr[rptr]]--;
		curr_val -= cnt[arr[rptr]];
		rptr--;
	}
	while(rptr < r){
		rptr++;
		curr_val += cnt[arr[rptr]];
		cnt[arr[rptr]]++;
	}
}


void DnC_DP(int k, int l, int r, int opt_l, int opt_r){

	if(l > r)	return;

	int mid = (l + r)/2, opt_m = -1;
	DP[k][mid] = (ll)1e16;
	for(int i=opt_l;i<=mid&&i<=opt_r;i++){
		traverse(i, mid);
// cout<<"at "<<k<<" "<<l<<" "<<r<<" "<<mid<<" "<<i<<" we have cost = "<<DP[k-1][i-1] + curr_val<<endl;
		if(opt_m == -1 || DP[k-1][i-1] + curr_val < DP[k][mid]){
			DP[k][mid] = DP[k-1][i-1] + curr_val;
			opt_m = i;
		}
	}

	DnC_DP(k, l, mid-1, opt_l, opt_m);
	DnC_DP(k, mid+1, r, opt_m, opt_r);
}





int main(){
 
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    scanf("%d%d", &n, &k);
    for(int i=1;i<=n;i++){
    	scanf("%d", &arr[i]);
    }


    for(int i=1;i<=n;i++)
    	DP[0][i] = (ll)1e16;
    for(int j=1;j<=k;j++){
    	DP[j][0] = (ll)1e16;
    	DnC_DP(j, 1, n, 1, n);
    }

// cout<<"DP:\n";
// for(int j=1;j<=k;j++){
// 	cout<<j<<": ";for(int i=0;i<=n;i++)	cout<<DP[j][i]<<" ";cout<<endl;
// }cout<<endl;

    printf("%lld\n", DP[k][n]);
    return 0;
}



