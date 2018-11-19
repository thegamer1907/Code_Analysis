#include <cstdio>
#include <algorithm>
#include <cstring>
#include <map>
#define N 205
#define M 11
#define fi(a, b, c) for(int a = (b); a < (c); a++)
#define FI(a, b, c) for(int a = (b); a <= (c); a++)
using namespace std;

int n, m, a[N], h[N][M][1 << M], tmp[1 << M];
char s[N][N], first[N][M + 2], last[N][M + 2];
char buf[N];

void fill(char *s, int l, int ind, int y){
	if(l < y) return;
	
	int ret = 0;
	fi(i, 0, y) ret = ret * 2 + s[i] - '0';
	h[ind][y][ret] = 1;
	
	fi(i, y, l){
		ret = (ret * 2 + s[i] - '0') & ((1 << y) - 1);
		h[ind][y][ret] = 1;
	}
}

void merge(int x, int y, int z){
	fi(i, 1, M) fi(j, 0, 1 << i) h[x][i][j] = h[y][i][j] | h[z][i][j];
	
	int ptr = 0;
	int fl = strlen(last[y]);
	int sl = strlen(first[z]);
	
	fi(i, 0, fl) buf[ptr++] = last[y][fl - 1 - i];
	fi(i, 0, sl) buf[ptr++] = first[z][i];
	
	fi(j, 1, M) fill(buf, ptr, x, j);
}

bool check(int x, int y){
	fi(i, 0, 1 << y) if(!h[x][y][i]) return 0;
	return 1;
}

int main(){
	scanf("%d", &n);
	
	fi(i, 0, n){
		scanf("%s", s[i]);
		int l = strlen(s[i]);
		fi(j, 0, min(l, M)) first[i][j] = s[i][j];
		fi(j, 0, min(l, M)) last[i][j] = s[i][l - 1 - j]; // reversed
		
		fi(j, 1, M) fill(s[i], l, i, j);
	}
	
	scanf("%d", &m);
	fi(i, 0, m){
		int x, y;
		scanf("%d %d", &x, &y);
		x--; y--;
		
		merge(n + i, x, y);
		
		strcpy(first[n + i], first[x]);
		strcpy(last[n + i], last[y]);
		
		int fl = strlen(first[x]);
		int ll = strlen(last[y]);
		
		int ptr = 0;
		while(fl < M && first[y][ptr]) first[n + i][fl++] = first[y][ptr++];
		first[n + i][fl] = 0;
		
		ptr = 0;
		while(ll < M && last[x][ptr]) last[n + i][ll++] = last[x][ptr++];
		last[n + i][ll] = 0;
		
		int ans = 0;
		while(ans < M && check(n + i, ans + 1)) ans++;
		printf("%d\n", ans);
	}
}
