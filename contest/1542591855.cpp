#include<bits/stdc++.h>
using namespace std;
char s1[10],s2[10];
int n;
int main(){
	scanf("%s",s1);
	scanf("%d",&n);
	int flag=0,flag1=0,flag2=0;
	for (int i=1;i<=n;i++) {
		scanf("%s",s2);
		if (s1[0]==s2[0]&&s1[1]==s2[1]) flag=1;
		if (((!flag1)||flag1==flag2)&&s1[0]==s2[1]) flag1=i;
		if (((!flag2)||flag1==flag2)&&s1[1]==s2[0]) flag2=i;
	}
	if (flag1&&flag2) printf("YES\n");
	else if (flag) printf("YES\n");
	else printf("NO\n");
}
