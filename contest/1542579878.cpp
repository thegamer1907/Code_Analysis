#include <bits/stdc++.h>
#define digit (ch <  '0' || ch >  '9')

using namespace std;

template <class T> inline void read(T &x) {
	int flag = 1; x = 0;
	register char ch = getchar();
	while( digit) { if(ch == '-')  flag = -1; ch = getchar(); }
	while(!digit) { x = (x<<1)+(x<<3)+ch-'0'; ch = getchar(); }
	x *= flag;
}

const long long maxn = 1e5+10;
map <string, long long> r;
long long a[maxn][10],c[maxn],d[10];
long long ans1,ans2,n,k,maxx;

int main() {
	read(n); read(k);
 	for(register long long i = 1; i <= n; i++) {
        for(register long long j = 1; j <= k; j++)
            read(a[i][j]), c[i] += a[i][j], d[j] += a[i][j], maxx = max(maxx, d[j]);
        ans1 += (!c[i]) ? 1 : 0, ans2 += (c[i] == 1) ? 1 : 0;
    }
    if(maxx == n) { printf("NO"); return 0; }
    if(ans2 > 0 || ans1 > 0) { printf("YES"); return 0; }
    if(k < 4) { printf("NO"); return 0; }
    for(register long long i = 1; i <= n; i++) {
        string s = "";
        for(register long long j = 1; j <= k; j++) s += char('0'+a[i][j]);
        r[s]++;
    }
    	 if(r["1100"] > 0 && r["0011"] > 0) printf("YES");
    else if(r["1010"] > 0 && r["0101"] > 0) printf("YES");
    else if(r["1001"] > 0 && r["0110"] > 0) printf("YES");
	else printf("NO");
    return 0;
}
