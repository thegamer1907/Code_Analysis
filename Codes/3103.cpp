//lol
#include<bits/stdc++.h>
using namespace std;
int a[100005];
int read() {
	char c=getchar(); int x=0,f=1;
	while (c<'0' || c>'9') {
		if (c=='-') f=-1;
		c=getchar();
	}
	while (c>='0' && c<='9') {
		x=x*10+c-'0';
		c=getchar();
	}
	return x*f;
}
int main() {
	int n=read();
	for (int i=1; i<=n; i++) a[i]=read();
	int j=1,k=1;
	while (a[j]>=k) {
		++j;
		if (j==n+1) j=1;
		++k;
	}
	cout<<j<<endl;
	return 0;
}