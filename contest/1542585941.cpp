#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

const int N=100010;

int n,k,a[N],b[20];

int main(){
	scanf("%d%d",&n,&k);
	for(int i=1,x;i<=n;i++){
		for(int j=1;j<=k;j++)
			scanf("%d",&x),a[i]=a[i]*2+x;
		b[a[i]]++;
	}
	for(int i=0;i<16;i++)
		for(int j=0;j<16;j++)
			if(!(i&j) && b[i] && b[j]) return puts("YES"),0;
	puts("NO");
	return 0;
}