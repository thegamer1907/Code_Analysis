#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <cstring>
#include <map>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <bitset>
#define f first
#define s second
#define ll long long
#define ull unsigned long long
#define mp make_pair
#define pb push_back
#define vi vector <int>
#define ld long double
#define pii pair<int, int>
#define y1 sda
using namespace std;    
const int N = 120, mod = int(1e9)  + 7; 

char last[2 * N][50], first[2 * N][50], s[2*N][N];

bitset <10000> bit[202][13];

int n,m;

int len[N];

string c;

string cur[N]; 

int main () {
	//freopen("in","r",stdin);
	//("out","w",stdout);
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("\n%s", s[i]);
		len[i] = strlen(s[i]);
		
		for(int j = 0; j < min(len[i], 12); j++){
			first[i][j] = s[i][j];
		}
		for(int j = max(0,len[i] - 12),f = 0; j < len[i]; f++, j++){
			last[i][f] = s[i][j];
		}
		for(int j = 0; j < len[i]; j++){
			int res = 0;
			for(int k = j; k < len[i]; k++){
				res = res * 2 + (s[i][k] - '0');
				if(k - j + 1 <= 12){
					int len = k - j + 1;
					bit[i][len][res] = 1;
				}
				else break;
			}
		}
	}
	scanf("%d", &m);
	for(int t = 1,a,b; t <= m; t++){
		scanf("%d%d", &a, &b);
		int x = strlen(last[a]);
		int y = strlen(first[b]);
		c = "";
		for(int i = 0; i < x; i++){
			c += last[a][i];	
		}
		for(int i = 0; i < y; i++){
			c += first[b][i];	
		}
		for(int i = 1; i <= 12; i++){
			bit[n + t][i] = (bit[a][i] | bit[b][i]);
		}
		for(int i = 0; i < c.size(); i++){
			int res = 0;
			for(int j = i; j < c.size(); j++){
				res = res * 2 + (c[j] - '0');
				int len = j - i + 1;
				if(len <= 12){
					bit[n + t][len][res] = 1;
				}
			}
		}
		int ans = 0;
		for(int i = 1; i <= 12; i++){
			if(bit[n + t][i].count() == (1<<i)){
				ans = i;
			}
		}
		printf("%d\n", ans);
		c = "";
		y = strlen(last[b]);
		x = strlen(last[a]);
		if(y < 12){
			c = "";
			for(int i = 0; i < x; i++){
				c += last[a][i];
			}
			for(int i = 0; i < y; i++){
				c += last[b][i];
			}
			for(int i = max(int(c.size()) - 12, 0),f = 0; i < c.size(); i++, f++){
				last[n + t][f] = c[i];
			}
		}
		else{
			for(int i = 0; i < y; i++){
				last[n + t][i] = last[b][i];
			}
		}
		x = strlen(first[a]);
		y = strlen(first[b]);
		if(x < 12){
			for(int i = 0; i < x; i++){
				first[n + t][i] = first[a][i];
			}
			for(int i = 0; i < y && x + i < 12; i++){
				first[n + t][x + i] = first[b][i];
			}
		}
		else{
			for(int i = 0; i < x; i++){
				first[n + t][i] = first[a][i];
			}
		}
		
	}

return 0;
}