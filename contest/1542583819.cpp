#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<utility>
#include<stack>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
#include<set>
#include<map>
using namespace std;
char str[10], str2[10];

int main() {
#ifndef ONLINE_JUDGE
//	freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
#endif
	int n;
	bool flag1 = 0, flag0 = 0;
	scanf("%s", str);
	scanf("%d", &n);
	while(n--) {
		scanf("%s", str2);
		if(strcmp(str, str2) == 0) {
			flag1 = flag0 = 1;
		}
		if(str2[0] == str[1])
			flag1 = 1;
		if(str2[1] == str[0])
			flag0 = 1;
	}
	if(flag1 && flag0)
		printf("YES\n");
	else
		printf("NO\n");
		
	return 0;
}
