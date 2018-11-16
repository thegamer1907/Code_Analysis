//@HelloElwin20180810
#include <iostream>
#include <cstdio>
using namespace std;
int n, ansi=1, ansj=1, a[200], b[200];

int main(){

	scanf("%d", &n);

	for(int i=1; i<=n; i++){
		int x;
		scanf("%d", &x);
		a[i]=a[i-1];
		b[i]=b[i-1];
		if(x){
			++a[i];
		}else{
			++b[i];
		}
	}

	for(int len=1; len<=n; len++){
		for(int i=1; i+len-1<=n; i++){
			int j=i+len-1;
			if(b[ansj]-b[ansi-1]-a[ansj]+a[ansi-1]<b[j]-b[i-1]-a[j]+a[i-1]){
				ansi=i;
				ansj=j;
			}
		}
	}

	printf("%d", a[n]+b[ansj]-b[ansi-1]-a[ansj]+a[ansi-1]);

	return 0;
}
