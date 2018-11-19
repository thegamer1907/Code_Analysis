#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdlib>
using namespace std;
int Encode(int a = 0,int b = 0,int c = 0,int d = 0){
	return d * 8 + c * 4 + b * 2 + a;
}
int N,K,a[1000],t;
int main(){
	scanf("%d%d",&N,&K);
	memset(a,0,sizeof(a));
	for (int i=1;i<=N;i++){
		t = 0;
		for (int j=1;j<=K;j++){
			int x;
			scanf("%d",&x);
			t = t * 2 + x;
		}
		a[t] ++;
	}
	if (K == 1){
		if (a[0]) puts("YES"); else puts("NO");
		return 0;
	}
	if (K == 2){
		if (a[Encode(0,0)]) puts("YES"); else
		if (a[Encode(1,0)] && a[Encode(0,1)]) puts("YES"); else
		puts("NO");
		return 0;
	}
	if (K == 3){
		if (a[Encode(0,0,0)]) puts("YES"); else
		if (a[Encode(0,0,1)] && a[Encode(0,1,0)]) puts("YES"); else
		if (a[Encode(0,0,1)] && a[Encode(1,0,0)]) puts("YES"); else
		if (a[Encode(1,0,0)] && a[Encode(0,1,0)]) puts("YES"); else
		if (a[Encode(1,1,0)] && a[Encode(0,0,1)]) puts("YES"); else
		if (a[Encode(1,0,1)] && a[Encode(0,1,0)]) puts("YES"); else
		if (a[Encode(0,1,1)] && a[Encode(1,0,0)]) puts("YES"); else		
		puts("NO");
		return 0;
	}
	if (K == 4){
		if (a[Encode(0,0,0)]) {puts("YES");return 0;}
			for (int i=0;i<4;i++){
				for (int j=0;j<4;j++){
					if (i == j) continue;
					if (a[1<<i] && a[1<<j]) {puts("YES");return 0;}
				}
			}
			
			for (int i=0;i<4;i++){
				for (int j=0;j<4;j++){
					for (int k=0;k<4;k++){
						if (i == j) continue;
						if (i == k) continue;
						if (j == k) continue;
						if (a[(1<<i) + (1<<j)] && a[1<<k]) {puts("YES");return 0;}
//						if (a[(1<<i) + (1<<j) + (1<<k)]) {puts("YES");return 0;}
					}
				}
			}
			
			for (int i=0;i<4;i++){
				for (int j=0;j<4;j++){
					for (int k=0;k<4;k++){
						for (int l=0;l<4;l++){
							if (i == j || i == k || j == k || i == l || j == l || k == l) continue;
							if (a[(1<<i) + (1<<j)] && a[(1<<k) + (1<<l)]) {puts("YES");return 0;}
							if (a[(1<<i) + (1<<j) + (1<<k)] && a[(1<<l)]) {puts("YES");return 0;}
//							if (a[(1<<i) + (1<<j) + (1<<k) + (1<<l)]) {puts("YES");return 0;}
					}
				}
			}
		}
	}
	puts("NO");
	return 0;
}