#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

char aa[2],bb[103][2];

int main() {
	scanf("%s",aa);
	int n;
	scanf("%d",&n);
	bool flag = 0;
	for(int i = 0;i < n;i ++) {
		scanf("%s",bb[i]);
		if(strcmp(aa,bb[i]) == 0)
			flag = 1;
	}
	if(!flag) {
		for(int i = 0;i < n;i ++) {
			for(int j = 0;j < n;j ++) {
				if(bb[i][1] == aa[0] && bb[j][0] == aa[1])
					flag = 1;
			}
		}
	}
	if(flag) {
		printf("YES\n");
	}
	else
		printf("NO\n");
	return 0;
}
