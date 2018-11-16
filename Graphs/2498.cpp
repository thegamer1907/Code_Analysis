#include <cstdio>
#include <algorithm>
#include <string.h>

using namespace std;

const int N = 1e4 + 5, M = 2e4 + 5, OO = 0x3f3f3f3f;
const double EPS = 1e-7;

int head[N], nxt[M], to[M];
int ne;
int n, C[N], x;

void init(){
	memset(head+1, -1, n*sizeof head[0]);
	ne = 0;
}

void addEdge(int f, int t){
	nxt[ne] = head[f];
	to[ne] = t;
	head[f] = ne++;
}

int DFS(int u = 1, int c = 0){
	int ret = C[u] != c;
	for(int k = head[u] ; ~k ; k = nxt[k])
		ret += DFS(to[k], C[u]);
	return ret;
}

int main(){
	scanf("%d", &n);
	init();
	for(int i = 2 ; i <= n ; ++i){
		scanf("%d", &x);
		addEdge(x, i);
	}
	for(int i = 1 ; i <= n ; ++i)
		scanf("%d", C+i);
	printf("%d\n", DFS());
	return 0;
}











