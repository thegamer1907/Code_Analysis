#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <utility>
#include <bitset>

using namespace std;
#define LL long long
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define pill pair<int, int>
#define mst(a, b)	memset(a, b, sizeof a)
#define REP(i, x, n)	for(int i = x; i <= n; ++i)
const int MOD = 1e9 + 7;
const int qq = 1e5 + 10;
const LL INF = 1e9 + 10;
int tail[30], head[30];
char st[3];

int main(){
	scanf("%s", st);
	int n;	scanf("%d", &n);
	bool f = false;
	for(int i = 0; i < n; ++i) {
		char s[3];	scanf("%s", s);
		if(strcmp(s, st) == 0) {
			f = true;
		} else if(s[0] == st[1] && s[1] == st[0]) {
			f = true;
		}
		if(s[0] == st[1]) {
			if(tail[st[0] - 'a'])	f = true;
		}
		if(s[1] == st[0]) {
			if(head[st[1] - 'a'])	f = true;
		}
		head[s[0] - 'a']++, tail[s[1] - 'a']++;
	}
	if(f)	puts("YES");
	else	puts("NO");
	return 0;
}