#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#define RG register
using namespace std;
inline int gi(){
	RG char ch=getchar();RG int x=0,q=0;
	while(ch<'0' || ch>'9') ch=='-'?q=1:0,ch=getchar();
	while(ch>='0' && ch<='9') x=x*10+ch-'0',ch=getchar();
	return q?(-x):x;
}
int n,k,bj[10000],tot,st[100],sum[10000],num;
inline int check(){
	int s=num/2;
	for (int i=1; i<=k; ++i)
		if (sum[i]>s)
			return 0;
	return 1;
}
inline int dfs(int x){
	if (num && check())
		return 1;
	if (x>tot) return 0;
	++num;
	for (int i=1; i<=k; ++i)
		if ((1<<(i-1))&st[x])
			++sum[i];
	if (dfs(x+1)) return 1;
	for (int i=1; i<=k; ++i)
		if ((1<<(i-1))&st[x])
			--sum[i];
	--num;
	if (dfs(x+1)) return 1;
	return 0;
}
int main(){
	//freopen("1.in","r",stdin);
	//freopen("1.out","w",stdout);
	n=gi(),k=gi();
	for (int i=1; i<=n; ++i){
		int p=0;
		for (int j=1; j<=k; ++j) p<<=1,p+=gi();
		bj[p]=1;
	}
	for (int i=0; i<16; ++i)
		if (bj[i])
			st[++tot]=i;
	if (dfs(1))
		puts("YES");
	else
		puts("NO");
	return 0;
}
