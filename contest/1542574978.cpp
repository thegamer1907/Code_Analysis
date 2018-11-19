#include <bits/stdc++.h>

using namespace std;

#define TASK "c"

#define REP(i, a, b) for(i = (a); i < (b); i++)
#define FORU(i, a, b) for(i = (a); i <= (b); i++)
#define FORD(i, a, b) for(i = (a); i >= (b); i--)
#define IT(t, i, v) for(vector<t>::iterator i = (v).begin(); i != (v).end(); i++)

typedef pair<int, int> ii;
typedef pair<int, ii> iii;

const int N = 1e5 + 5;

int n, k;
int i, j;
int stt;
int know[N][5];

bool mark[111];

main(){
	#ifndef ONLINE_JUDGE
	freopen(TASK".inp","r",stdin);
	freopen(TASK".out","w",stdout);
	#endif
	scanf("%d%d", &n, &k);
	FORU(i, 1, n){
		stt = 0;
		FORU(j, 1, k){
			scanf("%d", &know[i][j]);
			if(know[i][j]) continue;
			stt += (1 << j);
		}
		FORU(j, 0, 1 << (k+1)){
			if((j | stt) != stt) continue;
			mark[j] = 1;
		}
	}
	FORU(i, 1, n){
		stt = 0;
		FORU(j, 1, k){
			if(!know[i][j]) continue;
			stt += (1 << j);
		}
		if(mark[stt]){
			printf("YES");
			return 0;
		}
	}
	printf("NO");
}
