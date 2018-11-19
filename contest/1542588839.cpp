#include <cstdio>
#include <cstring>
#include <algorithm>

#define Rep(i, _begin, _end) for(int i=(_begin),i##_END=(_end);i<=(i##_END);++i)
#define For(i, _begin, _end) for(int i=(_begin),i##_END=(_end);i!=(i##_END);++i)
#define Lop(i, _begin, _end) for(int i=(_begin),i##_END=(_end);i>=(i##_END);--i)
#define Dnt(i, _begin, _end) for(int i=(_begin),i##_END=(_end);i!=(i##_END);++i)

using std :: max;
using std :: min;

typedef long long LL;

int n, m, x, y, z, k, num;
int f;

char tmp[10];
char s[505][10];

int main(){
	scanf("%s", tmp);
	scanf("%d", &n);
	Rep(i, 1, n){
		scanf("%s", s[i]);
	}
	Rep(i, 1, n){
		Rep(j, 1, n){
			if(s[i][1] == tmp[0] && s[j][0] == tmp[1])
				f = 1;
			if(s[i][0] == tmp[0] && s[i][1] == tmp[1])
				f = 1;
		}
	}
	puts(f? "YES" : "NO");
	return 0;
}
