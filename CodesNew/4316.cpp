#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;

char S[1000050];

int N, Slen = 0;
int beginch[1000050], endch[1000050], len[1000050];

int main() {
	int i, k, lenthis, lenlast, minlen; char ch;
	scanf("%d", &N);
	
	//read
	i = 0;
	while((ch = getchar()) != EOF) {
		if(ch == '\n') continue;
		S[Slen] = ch;
		if(ch == '#') {
			beginch[i] = Slen+1;
			if(i) endch[i-1] = Slen-1;
			i++;
		}
		Slen++;
	}
	endch[N-1] = Slen-1;

	//greedy
	for(i=0;i<N;i++) len[i] = endch[i] - beginch[i] + 1;

	for(i=N-1;i>=1;i--) {
		lenthis = len[i];
		lenlast = len[i-1];
		minlen = min(lenthis, lenlast);

		//cmp
		bool cut = 0;
		for(k=0;k<minlen;k++) {
			if(S[beginch[i-1] + k] > S[beginch[i] + k]) {
				len[i-1] = k;
				cut = 1;
				break;
			}
			if(S[beginch[i-1] + k] < S[beginch[i] + k]) {
				cut = 1;
				break;
			}
		}
		if(!cut) {
			if(lenlast > lenthis) len[i-1] = len[i];
		}
	}

	//print
	for(i=0;i<N;i++) {
		putchar('#');
		for(k=beginch[i];k<=beginch[i]+len[i]-1;k++) putchar(S[k]);
		putchar('\n');
	}
	return 0;
}