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
typedef pair<int, ii> iii;
 
ll pwr(ll base, ll p, ll mod=MOD){
ll ans = 1;while(p){if(p&1)ans=(ans*base)%mod;base=(base*base)%mod;p/=2;}return ans;
}


ll gcd(ll a, ll b){
    if(b == 0)  return a;
    return gcd(b, a%b);
}



int cnt[20];


 
int main(){
 
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

	int n, k;
	scanf("%d%d", &n, &k);

	while(n--){
		int val = 0;
		for(int j=0;j<k;j++){
			int x;
			scanf("%d", &x);
			val = val*2 + x;
		}
		cnt[val]++;
	}

	if(cnt[0] > 0){
		printf("YES\n");
		return 0;
	}

	for(int i=0;i<16;i++)
		for(int j=i+1;j<16;j++)
			if(cnt[i]>0 && cnt[j]>0 && (i&j)==0){
				printf("YES\n");
				return 0;
			}

	for(int i=0;i<16;i++)
		if(__builtin_popcount(i) == 1 && cnt[i]>0){
			for(int j=0;j<16;j++)
				if(cnt[j] > 0){
					if((j & i) == 0){
						printf("YES\n");
						return 0;
					}
				}
		}

	printf("NO\n");
    return 0;
}






