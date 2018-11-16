#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef long double LD;
typedef pair<LL,LL> pii;
const int SZ = 1000010;
const int INF = 1e9 + 10;
const int mod = 1e9 + 7;
const LD eps = 1e-8;

LL read() {
    LL n = 0;
    char a = getchar();
    bool flag = 0;
    while(a > '9' || a < '0') { if(a == '-') flag = 1; a = getchar(); }
    while(a <= '9' && a >= '0') { n = n * 10 + a - '0',a = getchar(); }
	if(flag) n = -n;
	return n;
}

char s[SZ];

int z[SZ],n;

void Z_alo(char s[]) {
	int l = 0,r = 0;
	for(int i = 2;i <= n;i ++) {
		if(i >= l + r) {
			int h = 0;
			while(i + h <= n && s[i + h] == s[1 + h]) h ++;
			z[i] = h;
		}
		else {
			int k = i - l + 1;
			//cout << i << " " << k << " " << z[k] << " " << l << " " << r << endl;
			if(i + z[k] < l + r) z[i] = z[k];
			else {
				int h = min(l + r - i,n-i+1);
				while(i + h <= n && s[i + h] == s[1 + h]) h ++;
				z[i] = h;
			}
		}
		if(i + z[i] > l + r) l = i,r = z[i];
	}
}

int main() {
	scanf("%s",s + 1);
	n = strlen(s + 1);
	Z_alo(s);
	int ans = 0,maxx = 0;
	//for(int i = 1;i <= n;i ++) cout << s[i] << " "; puts("");
	//for(int i = 1;i <= n;i ++) cout << z[i] << " "; puts("");
	for(int i = 2;i <= n;i ++) {
		if(z[i] == n - i + 1 && maxx >= n - i + 1) {
			ans = max(ans,z[i]);
		}
		maxx = max(maxx,z[i]);
	}
		
	if(!ans) puts("Just a legend");
	else for(int i = 1;i <= ans;i ++) printf("%c",s[i]);
	return 0;
}
