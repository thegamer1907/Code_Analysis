#include<algorithm>
#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<vector>
#include<cstdio>
#include<cmath>
#include<queue>
using namespace std;
inline const int Get_Int() {
	int num=0,bj=1;
	char x=getchar();
	while(x<'0'||x>'9') {
		if(x=='-')bj=-1;
		x=getchar();
	}
	while(x>='0'&&x<='9') {
		num=num*10+x-'0';
		x=getchar();
	}
	return num*bj;
}
int n,k,M[55],s[100005];
int main() {
	n=Get_Int();
	k=Get_Int();
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=k; j++) {
			int x=Get_Int();
			s[i]=(s[i]<<1)+x;
		}
		M[s[i]]++;
	}
	if(M[0]) {
		puts("YES");
		return 0;
	}
	for(int i=0; i<(1<<k); i++)
		for(int j=0; j<(1<<k); j++) {
			if(i==j)continue;
			bool bj=1;
			for(int K=0; K<k; K++)
				if(i&(1<<K)&&j&(1<<K)) {
					bj=0;
					break;
				}
			if(bj&&M[i]&&M[j]) {
				puts("YES");
				return 0;
			}
		}
	puts("NO");
	return 0;
}

