#include <bits/stdc++.h>
#include <string.h>
#include <cmath>
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define max3(A,B,C) max((A),max((B),(C)))

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

const int INF = 0x3f3f3f3f;
const long long int INFL = 0x3f3f3f3f3f3f3f3f;
const double pi = atan(1.0)*4.0;
const int N = 4;

int main(void) {
	// ios_base::sync_with_stdio(false);
	int n, k, x, num, v[1 << N];
	
	for(int i = 0; i < (1 << N); i++) v[i] = 0;
  	v[0] = 10;
	
	scanf("%d %d", &n, &k);
	
	for(int i = 0; i < n; i++) {
		num = 0;
		for(int j = 0; j < k; j++) {
			scanf("%d", &x);
			num += (x << j);
		}
		for(int j = 0; j < (1 << k); j++) {
			if((j&num) == 0) v[j]++;
		}
	}

	if(k == 1 && v[1] > 0) return 0*printf("YES\n");
	if(k == 1 && v[1] == 0) return 0*printf("NO\n");
	
	if(k == 2) {
		if(v[1] > 0 && v[2] > 0) return 0*printf("YES\n");
		else return 0*printf("NO\n");
	}
	
	if(k == 3) {
		num = (1 << 3) - 1;
		for(int i = 0; i < (1 << k); i++) if(v[i] > 0 && v[num-i] > 0) return 0*printf("YES\n");
		return 0*printf("NO\n");
	}
	
	if(k == 4) {
		num = (1 << 4) - 1;
		for(int i = 0; i < (1 << k); i++) {
			if(v[i] > 0 && v[num-i] > 0) {
				return 0*printf("YES\n");
			}
		}
		return 0*printf("NO\n");
	}
	
   return 0;
}
