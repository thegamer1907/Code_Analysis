#include <bits/stdc++.h>
#define llu long long unsigned
#define lld long long int
#define ii pair<int, int>
#define x first
#define y second
#define pb(x) push_back(x)
#define go(i,n) for (int i = 0; i < (int)n; i++)
#define vi vector <int>
#define vii vector <ii>
#define INF 0x3f3f3f3f
#define ff first
#define ss second
#define dd pair<double, double>
#define ms(v, x) memset(v, x, sizeof(v))
#define MAXN 10000000
using namespace std;

int b[101];
int g[101];

int main (){
	int n, m;
	scanf ("%d", &n);
	go(i,n){
		scanf ("%d", &b[i]);
	}
	scanf ("%d", &m);
	go(i,m){
		scanf ("%d", &g[i]);
	}
	
	sort(b, b+n);
	sort(g, g+m);
	
	int ans = 0;
	go(i,n){
		go(j,m){
			if (abs(b[i]-g[j]) <= 1){
				ans++;
				g[j] = -150;
				break;
			}
		}
	}
	
	printf("%d\n", ans);
	
	return 0;
}
