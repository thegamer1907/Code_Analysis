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
const int N = int(3e5), mod = int(1e9)  + 7;

int n,k;

int a[N][5];

int cnt[20], c[5];;

int main () {
	scanf("%d%d", &n, &k);
	for(int i = 1; i <= n; i++){
		int x = 0;
		for(int j = 0; j < k; j++){
			scanf("%d", &a[i][j]);
			x = x * 2 + a[i][j];
		}
		cnt[x]++;
	}
	for(int mask = 1; mask < (1<<16); mask++){
		bool bad = 0;
		int all = 0;
		memset(c,0, sizeof(c));
		for(int i = 0; i < 16; i++){
			if(mask & (1<<i)){
				all++;
				if(cnt[i] == 0) bad = 1;
				for(int j = 0; j < k; j++){
				    if(i & (1<<j)) c[j]++;
				}
			}
		}
		for(int i = 0; i < k; i++){
			if(c[i] > all / 2) bad = 1; 
		}
		if(!bad){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";

return 0;
}