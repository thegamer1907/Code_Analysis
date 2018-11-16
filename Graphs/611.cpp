#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	char s[51];
	scanf("%d%d\n",&n,&t);
	gets(s);
	for(int i=1;i<=t;i++)
		for(int j=1;j<n;j++)
			if(s[j]>s[j-1]){
				swap(s[j],s[j-1]);
				j++;
			}
	puts(s);
	return 0;
}