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
#define maxn 20
typedef long long LL;
int vis[maxn];
int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	bool jud = false;
	while (n--){
		int status = 0;
		for (int i = 0; i < k; i++){
			int x;
			scanf("%d", &x);
			if (x)
				status |= 1 << i;
		}
		vis[status] = 1;
		for (int i = 0; i < (1 << k); i++){
			if (status&i)
				continue;
			if (vis[i])
				jud = true;
		}
	}
	if (jud)
		puts("YES");
	else
		puts("NO");
}