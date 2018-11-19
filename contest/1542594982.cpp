#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <map>
#define N 105
#define fi(a, b, c) for(int a = (b); a < (c); a++)
#define FI(a, b, c) for(int a = (b); a <= (c); a++)
using namespace std;

int n;
char s[3], t[N][3];

int main(){
	scanf("%s %d", s, &n);
	
	fi(i, 0, n){
		scanf("%s", t[i]);
		if(!strcmp(s, t[i])){
			puts("YES");
			return 0;
		}
	}
	
	fi(i, 0, n) fi(j, 0, n) if(s[0] == t[i][1] && s[1] == t[j][0]){
		puts("YES");
		return 0;
	}
	
	puts("NO");
}
