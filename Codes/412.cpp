#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
#include<vector>
#define LL long long
#define MAXN
#define INF 0x3f3f3f3f
#define rec(i,x) for(int i=0;i<x;i++)
#define REC(i,x) for(int i=1;i<=x;i++)
#define rd(x) scanf("%d",&x)
#define prt(x) printf("%d",x);
#define P pair<int,int>
using namespace std;


int main() {
	int n;
	rd(n);
	int k = 0;
	int nm = 1;
	while (1) {
		int lf = nm;
		int sm = 0;
		while (lf != 0) {
			sm += lf % 10;
			lf /= 10;
		}
		if (sm == 10) {
			k++;
			if (k == n) {
				printf("%d", nm);
				return 0;
			}
		}
		nm++;
	}


	return 0;
}