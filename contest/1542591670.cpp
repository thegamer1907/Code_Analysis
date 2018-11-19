#include <bits/stdc++.h>

using namespace std;

#define TASK "a"

#define REP(i, a, b) for(i = (a); i < (b); i++)
#define FORU(i, a, b) for(i = (a); i <= (b); i++)
#define FORD(i, a, b) for(i = (a); i >= (b); i--)
#define IT(t, i, v) for(vector<t>::iterator i = (v).begin(); i != (v).end(); i++)

typedef pair<int, int> ii;
typedef pair<int, ii> iii;

int n;
int i, j, k;

char s[5];
char t[111][5];
char x[11];

main(){
	#ifndef ONLINE_JUDGE
	freopen(TASK".inp","r",stdin);
	freopen(TASK".out","w",stdout);
	#endif
	scanf("%s", s);
	scanf("%d", &n);
	FORU(i, 1, n) scanf("%s", t[i]);
	FORU(i, 1, n)
		FORU(j, 1, n){
			x[0] = t[i][0];
			x[1] = t[i][1];
			x[2] = t[j][0];
			x[3] = t[j][1];
			FORU(k, 1, 3)
				if((x[k-1]==s[0]) && (x[k]==s[1])){
					printf("YES");
					return 0;
				}
		}
	printf("NO");
}