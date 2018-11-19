#include <stdio.h>
#include <algorithm>
#include <string.h>

char Aim[3];
int n;
char use[23];
int qian[22005],hou[22005];

int main(){
	scanf("%s",Aim+1);
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		scanf("%s",use+1);	
		qian[use[1]-'0']++;
		hou[use[2]-'0']++;
		if(use[1]==Aim[1] && use[2]==Aim[2]){
			printf("YES\n");
			return 0;
		}
		else if(use[1]==Aim[2] && use[2]==Aim[1]){
			printf("YES\n");
			return 0;
		}
	}
	if(hou[Aim[1]-'0'] > 0 && qian[Aim[2]-'0'] > 0){
		printf("YES\n");
		return 0;
	}
	printf("NO\n");
	return 0;
}
