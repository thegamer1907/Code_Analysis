#include<bits/stdc++.h>
#define x first
#define y second
#define m_p make_pair
using namespace std;
typedef long long LL;
bool hve[22];
int main(void){
	int n,k;
	scanf("%d%d",&n,&k);
	for (int i=1;i<=n;i++){
		int state=0;
		for (int i=1;i<=k;i++){
			int t;
			scanf("%d",&t);
			state<<=1;
			state|=t;
		}
		hve[state]=1;
	}
	if (hve[0]){
		printf("YES");
		return 0;
	}
	for (int i=0;i<16;i++){
		for (int j=0;j<16;j++){
			if (i&j) continue;
			if (hve[i]&&hve[j]){
				printf("YES");
				return 0;
			}
		}
	}
	printf("NO");
	return 0;
}