#include<set>
#include<map>
#include<ctime>
#include<cmath>
#include<stack>
#include<queue>
#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<functional>
typedef long long LL;
using namespace std;
#define inf 0x3f3f3f3f
#define maxn 5
typedef long long LL;
char s[maxn];
int vis[30];
char now[maxn];
int main(){
	int n;
	scanf("%s%d", s, &n);
	bool jud = false;
	while (n--){
		scanf("%s", now);
		if (!strcmp(now, s))
			jud = true;
		vis[now[0] - 'a'] |= 1;
		vis[now[1] - 'a'] |= 2;
	}
	if (jud||((vis[s[0] - 'a'] & 2) && (vis[s[1] - 'a'] & 1)))
		puts("YES");
	else
		puts("NO");
}