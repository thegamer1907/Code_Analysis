#include<bits/stdc++.h>

#define fin freopen("input.txt", "r", stdin);
#define LL long long
#define si(x) scanf("%d", &x)
#define sii(x, y) scanf("%d %d", &x, &y)
#define pi pair<int, int> 
#define mp make_pair
#define fi first
#define se second
#define SZ(v) ((int) v.size())
#define inf 1000000000
#define FOR(i, N) for(int i = 0 ; i < N ; i++)
#define FORi(i , x , N) for(int i = x ; i < N ; i++)
#define mem(dp, val) memset(dp, val, sizeof dp)
#define all(x) (x).begin() , (x).end()
#define rall(x) (x).rbegin() , (x).rend()

using namespace std;

typedef vector<int> VII;

inline int SET(int N,int pos){return N=N | (1<<pos);}
inline int RESET(int N,int pos){return N= N & ~(1<<pos);}
inline bool CHECK(int N,int pos){return (bool)(N & (1<<pos));}

VII vec;

int main() {
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif
		string str;
		cin >> str;
		int one = 0 , zero = 0 , mx = 0;
		FOR(i , SZ(str)) {
			if(str[i] == '1') one++ , zero = 0;
			else one = 0 ,zero++;
			mx = max(mx , one);
			mx = max(mx , zero);
		}
		if(mx >= 7) printf("YES\n");
		else printf("NO\n");
}