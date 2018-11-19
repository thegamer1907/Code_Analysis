#include<bits/stdc++.h>
#define LL long long
#define PII pair<int, int>
#define MP make_pair
#define PB push_back
#define F first
#define S second
using namespace std;
const int MAXB = 1e7;
char buf[MAXB], *cp = buf;
inline void rd(int &x){
	x = 0; int f = 1;
	while(*cp < '0' || '9' < *cp){if(*cp == '-') f = -1; cp++;}
	while('0' <= *cp && *cp <= '9') x = (x << 3) + (x << 1) + *cp - 48, cp++;
	x *= f;
}
int n, k;
int cnt[1 << 5];
int main(){
	//freopen("in.txt", "r", stdin);
	fread(buf, 1, MAXB, stdin);
	rd(n); rd(k);
	while(n--){
		int t = 0;
		for(int i = 0; i < k; i++){
			int x;
			rd(x);
			t += x * (1 << i);
		}
		cnt[t]++;
		if(!t){
			return puts("YES"), 0;
		}
	}
	for(int i = 0; i < (1 << k); i++)
		for(int j = 0; j < (1 << k); j++)
			if(cnt[i] && cnt[j] && ((i & j) == 0))
				return puts("YES"), 0;
	return puts("NO"), 0;
}