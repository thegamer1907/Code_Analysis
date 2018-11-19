#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=0x3f3f3f3f;
const int minn=-1;
int main(){
	int n;
	int flag=0;
	char a[100][2];
	char s[2];
	scanf("%s",&s);
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++)
		scanf("%s",a[i]);
	for(int i=0;i<n;i++){
		if(a[i][0]==s[0]){
			if(a[i][1]==s[1]){
				flag=1;
				break;
			}
		}
	}
	if(flag){
		printf("YES\n");
		return 0;
	} 
	for(int i=0;i<n;i++){
		if(a[i][1]==s[0]){
			for(int j=0;j<n;j++)
				if(a[j][0]==s[1]){
					flag=1;
					break;
				}
		}
	}
	if(flag)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}