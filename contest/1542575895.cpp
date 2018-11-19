#include <cstdio>
#include <cmath>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;
inline int read(){
	int w = 1, data = 0; char ch = 0;
	while(ch != '-' && (ch < '0' || ch > '9')) ch = getchar();
	if(ch == '-') w = -1, ch = getchar();
	while(ch >= '0' && ch <= '9') data = data * 10 + ch - '0', ch = getchar();
	return data * w;
}
int n, k;
int f[100009][6];
int vis[100009];
int main(){
	n = read(); k = read();
	for(int i = 1; i <= n; i++){
		int sum = 0;
		for(int j = 0; j < k; j++) sum |= read()<<j;
		vis[sum] = 1;
	}
	for(int i = 0; i < 1 << k; i++){
		for(int j = 0; j < 1 << k; j++){
			if(vis[i] && vis[j] && !(i & j)){
				printf("YES");
				return 0;
			}
		}
	}
	printf("NO");
	return 0;
}
