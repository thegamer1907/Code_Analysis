#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;
const int N=1000050;

char s[N];
int nx[N],ok[N];
int main()
{
 
	
	int i,j,n;
	scanf("%s",s+1);
	n=strlen(s+1);
	for(i=2,nx[0]=-1;i<=n;i++){
		nx[i]=nx[i-1]+1;
		while(nx[i]&&s[i]!=s[nx[i]])
			nx[i]=nx[nx[i]-1]+1;
		if(i!=n){
			for(j=nx[i];j;j=nx[j]){
				if(ok[j])break;
				ok[j]=1;
			}
		}
	}
	for(i=nx[n];i;i=nx[i]){
		if(ok[i]){
			for(j=1;j<=i;j++)
				printf("%c",s[j]);
			return 0;
		}
	}
	puts("Just a legend");
	
	return 0;
}