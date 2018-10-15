#include <cstdio>
#include <algorithm>
int main() {
	int n,c=0;
	scanf("%d",&n);
	int s[n];
	for(int i=0;i<n;scanf("%d",&s[i]),i++);
	std::sort(s,s+n);
	for(int i = 0,j = n/2;j<n && i<n/2;j++)
		if(s[j]>=2*s[i])c++,i++;
	printf("%d",n-c);
}