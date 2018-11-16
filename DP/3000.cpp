#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int maxn = 1000005;
int n, res;
char a[maxn], b[maxn];
int main(){
	scanf("%d%s%s", &n, a, b);
	for(int i = 0; i < n; i++)
		a[i] -= '0', b[i] -= '0';
	for(int i = 0; i < n; ++i){
		if(a[i] == b[i]) continue;
		if(i < n - 1 && (a[i] ^ a[i + 1]) && (b[i] ^ b[i + 1])) ++res, ++i;
		else ++res;
	}
	printf("%d\n", res);
	return 0;
}