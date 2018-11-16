#include <bits/stdc++.h>

#define N 1009

using namespace std;

char s1[N];

int main(){
	int i,j,t1,t2,t3,t4,n,ans=0;
	char ch;
	gets(s1);
	n=strlen(s1);
	for(i=0;i<26;i++){
		ch='a'+i;
		for(j=0;j<n;j++){
			if(s1[j]==ch){
				ans++;
				break;
			}
		}
	}
	printf("%d\n",ans);	
    return 0;
}