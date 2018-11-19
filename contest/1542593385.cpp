#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

char a[5],b[5];
int A,B,C,n;

int main(){
	scanf("%s",a+1);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s",b+1);
		if(b[1]==a[1] && b[2]==a[2]) C=1;
		if(b[2]==a[1]) A=1;
		if(b[1]==a[2]) B=1;
	}
	if((A && B) || C) puts("YES");
	else puts("NO");
	return 0;
} 