#include<bits/stdc++.h>
using namespace std; 
int main(){
	char s[105][105];
	char a[5];
	int n;
	scanf("%s",a);
	scanf("%d",&n); 
	getchar();
	int f1=1,f2=1;
	for(int i=0;i<n;i++){
		scanf("%s",s[i]);
	}
	for(int i=0;i<n;i++){
		if(a[0]==s[i][1]){
			for(int j=0;j<n;j++){
				if(a[1]==s[j][0]&&f1){
				//	printf("%s %s",s[i],s[j]);
					printf("YES\n");
					f1 = 0;
				}
			}
		}
		if(strcmp(a,s[i])==0&&f1){
			printf("YES\n");
			f1 = 0;
		}
	}
	if(f1)
		printf("NO\n");
	return 0;
}

