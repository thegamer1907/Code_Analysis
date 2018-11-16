#include<bits/stdc++.h>

#define fin freopen("input.txt", "r", stdin);
#define LL long long
#define si(x) scanf("%d", &x)
#define pi pair<int, int> 
#define mp make_pair
#define fi first
#define se second
#define inf 1000000000
#define FOR(i, N) for(int i = 0 ; i < N ; i++)
#define mem(dp, val) memset(dp, val, sizeof dp)
#define all(x) (x).begin() , (x).end()

using namespace std;

inline int SET(int N,int pos){return N=N | (1<<pos);}
inline int RESET(int N,int pos){return N= N & ~(1<<pos);}
inline bool CHECK(int N,int pos){return (bool)(N & (1<<pos));}

int main() {
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif
		int N , t;
		string str;
		cin >> N >> t >> str;
		FOR(j , t) for(int i = 0 ; i < N - 1 ; i++) {
			if(str[i] == 'B' && str[i + 1] == 'G') str[i] = 'G', str[i + 1] = 'B' , i++;
		}
		cout << str << endl;
}