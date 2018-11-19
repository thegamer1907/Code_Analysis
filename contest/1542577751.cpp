/******************************************
*    AUTHOR:         BHUVNESH JAIN        *
*    INSTITUITION:   BITS PILANI, PILANI  *
******************************************/
#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef long double LD;
typedef pair<int,int> pii;
typedef pair<LL, LL> pll;

#define fi				first
#define sec 			second
#define inchar			getchar//_unlocked
#define outchar(x)		putchar(x)//_unlocked(x)

template<typename T> void inpos(T &x) {
	x = 0; register T c = inchar();
	while(((c < 48) || (c > 57)) && (c != '-')) c = inchar();
	bool neg = false; if (c=='-') neg = true;
	for(; c < 48 || c > 57; c = inchar()) ;
	for(; c > 47 && c < 58; c = inchar()) x = (x<<3) + (x<<1) + (c&15);
	if(neg) x = -x;
}

template<typename T> void outpos(T n) {
	if(n < 0) { outchar('-'); n *= -1; }
	char snum[65]; int i = 0;
	do {
		snum[i++] = n % 10 + '0';
		n /= 10;
	} while(n);
	i = i - 1;
	while (i >= 0) outchar(snum[i--]); outchar('\n');
}

const int MAX = 1e5 + 5;

int mask[MAX], a[MAX][4];

int main() {
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin);
	#endif
	int n, k;
	inpos(n), inpos(k);
	vector<int> v;
	for(int i = 0; i < n; ++i) {
		int x = 0;
		for(int j = 0; j < k; ++j) {
			inpos(a[i][j]);
			if (a[i][j]) {
				x |= 1 << j;
			}
		}
		if (mask[x] == 0) {
			v.push_back(x);
		}
		mask[x] = 1;
	}
	int l = 1 << v.size();
	for(int i = 1; i < l; ++i) {
		vector<int> w;
		for(int j = 0; j < v.size(); ++j) {
			if (i & (1<<j)) {
				w.push_back(v[j]);
			}
		}
		// cout << i << " : ";
		// for(auto x : w) cout << x << " ";
		// cout << "\n";
		vector<int> s(k, 0);
		for(int j = 0; j < k; ++j) {
			for(int l = 0; l < w.size(); ++l) {
				if (w[l] & (1<<j)) {
					s[j] += 1;
				}
			}
		}
		int f = 1;
		for(int j = 0; j < k; ++j) {
			if (2*s[j] > w.size()) {
				f = 0;
				break;
			}
		}
		if (f) {
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
}