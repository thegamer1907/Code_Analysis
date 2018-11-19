#include <cstdio>
#include <iostream>
#include <string.h>
#include <string> 
#include <map>
#include <queue>
#include <deque>
#include <vector>
#include <set>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <stack>
#include <iomanip>
#define mem0(a) memset(a,0,sizeof(a))
#define meminf(a) memset(a,0x3f,sizeof(a))
using namespace std;
typedef long long ll;
typedef long double ld;
typedef double db;
const int maxn=100005,inf=0x3f3f3f3f;  
const ll llinf=0x3f3f3f3f3f3f3f3f;   
const ld pi=acos(-1.0L);
int a[maxn][5],b[5],c[20];

int main() {
	int n,k,i,j,sum=0;
	scanf("%d%d",&n,&k);
	mem0(b);mem0(c);
	for (i=1;i<=n;i++) {
		int x=0;
		for (j=1;j<=k;j++) {
			scanf("%d",&a[i][j]);
			if (a[i][j]) {
				b[j]++,sum++;
				x+=(1<<j-1);
			}
		}
		c[x]++;
	}
	if (k==1) {
		if (b[1]!=n) cout << "YES"; else cout << "NO";
	} else {
		if (c[0]!=0) {
			cout << "YES";return 0;
		}
		for (i=0;i<16;i++) {
			for (j=0;j<16;j++) {
				if (i==j) continue;
				if (((i&j)==0)&&c[i]&&c[j]) {
					cout << "YES";return 0;
				}
			}
		}
		cout << "NO";
	}
	return 0;
}