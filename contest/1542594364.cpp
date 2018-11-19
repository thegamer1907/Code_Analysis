#include <cstdio>
#include <cstring>
const int MAXN = 110;
char A[5], dic[MAXN][5];
int main () {
	scanf("%s", A);
	int N;
	scanf("%d", &N);
	bool sol = false;
	for(int i = 1; i<=N; i++) {
		scanf("%s", dic[i]);
		if(strcmp(dic[i], A) == 0) sol = true;
	}
	for(int i = 1; i<=N; i++)
		for(int j = 1; j<=N; j++) {
			if(dic[i][1] == A[0] && dic[j][0] == A[1]) sol = true;
		}
	puts(sol?"YES":"NO");
}
