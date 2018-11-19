#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

bool jud[17];

int main() {
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i = 0;i < n;i ++) {
		int num = 0,tem;
		for(int j = 0;j < k;j ++) {
			scanf("%d",&tem);
			num <<= 1;
			num += tem;
		}
		jud[num] = 1;
	}
	bool flag = 0;
	for(int i = 0;i < 16;i ++) {
		if(jud[i]) {
			for(int j = i;j < 16;j ++) {
				if(jud[j])
					if((i & j) == 0)
						flag = 1;
			}
		}
	}
	if(flag)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}