//Serene
#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cmath>
using namespace std;
const int maxn=100+10;
int n;string s,x;
bool ok[2];

int main() {
	cin>>s;
	scanf("%d",&n);
	for(int i=1;i<=n;++i) {
		cin>>x;
		if(x==s) ok[0]=ok[1]=1;
		if(x[1]==s[0]) ok[0]=1;
		if(x[0]==s[1]) ok[1]=1;
	}
	if(ok[0]&&ok[1]) printf("YES");
	else printf("NO");
	return 0;
}
