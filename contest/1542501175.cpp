#include<bits/stdc++.h>
char a[3],b[3];
int n,a1,a2;
int main()
{
	scanf("%s",&a);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s",&b);
		if(a[0]==b[0]&&b[1]==a[1]){
			printf("YES");
			return 0;
		}
		if(a[0]==b[1])
		a1++;
		if(a[1]==b[0])
		a2++;
		if(a1&&a2){
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	return 0;
}