#include <bits/stdc++.h>
#define N 100020
#define ll long long
using namespace std;
inline int read(){
	int x=0,f=1; char ch=getchar();
	while(ch>'9'||ch<'0')ch=='-'&&(f=0)||(ch=getchar());
	while(ch<='9'&&ch>='0')x=(x<<3)+(x<<1)+ch-'0',ch=getchar();
	return f?x:-x;
}
int a[N], v[20];
int main(){
	int n = read(), k = read();
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < k; j++)
			if (read()) a[i] |= 1 << j;
		if (!a[i]) return puts("YES")&0;
		for (int j = 0; j <= 15; j++)
			if (v[j] && (j&a[i]) == 0)
				return puts("YES")&0;
		v[a[i]] = 1;
	}
	puts("NO");
}
