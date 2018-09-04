#include <bits/stdc++.h>
#define len(o) ((int)(o).size())
#define get(o, i) get<i>(o)
#define x first
#define y second
using namespace std;

const int N = 1e6 + 10;

char s[N];
int z[N];

int main(){
	scanf("%s", s);
	int n = (int)strlen(s), mx = 0;
	for(int i = 1, l = 0, r = 0; i < n; i++){
		if(i <= r) z[i] = min(z[i - l], r - i + 1);
		while(i + z[i] < n && s[z[i]] == s[i + z[i]]) z[i]++;
		if(r < i + z[i] - 1) l = i, r = i + z[i] - 1;
		if(mx >= z[i] && i + z[i] == n){
			for(int j = i; j < n; j++)
				printf("%c", s[j]);
			printf("\n");
			return 0;
		}
		mx = max(mx, z[i]);
	}
	printf("Just a legend\n");
	return 0;
}
