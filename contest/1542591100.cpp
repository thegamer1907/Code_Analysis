#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cmath>

using namespace std;

int main()
{
	char a[200][10];
	scanf("%s",a[1]);
	int n, flag = 0;
	scanf("%d",&n);
	for(int i = 2 ; i <= n + 1 ; i++){
		scanf("%s",a[i]);
		if(a[i][0] == a[1][0] && a[i][1] == a[1][1]) flag = 1;
	}
	for(int i = 2 ; i <= n + 1 ; i++){
		for(int j = 2 ; j <= n + 1 ; j++){
			if(a[i][1] == a[1][0] && a[j][0] == a[1][1]) flag = 1;
		}
	}
	if(flag) printf("YES\n");
	else printf("NO\n");
}