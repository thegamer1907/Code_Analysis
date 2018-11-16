#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

#define maxn 110000

int n,A[maxn],t;
bool used[maxn];

int main(){
	scanf("%d%d",&n,&t);
	for (int i=1;i<n;i++) scanf("%d",&A[i]);
	if (1+A[1]<=n) used[1+A[1]]=1;
	for (int i=2;i<n;i++){
		if (used[i]&&i+A[i]<=n) used[i+A[i]]=1;
	}
	if (used[t]) printf("YES\n");
	else printf("NO\n");
	return 0;
}