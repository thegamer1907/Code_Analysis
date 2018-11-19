#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;
struct NOOD{
	char x,y;
}a[200];
int main()
{
	int n;
	char u,v;
	cin>>u>>v;
	cin>>n;
	for(int i = 1; i <= n; i++) scanf(" %c%c",&a[i].x,&a[i].y);
	for(int i = 1; i <= n; i++){
		if(a[i].x == u && a[i].y == v){
			printf("YES\n");
			return 0;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i].y == u && a[j].x == v) {
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
}