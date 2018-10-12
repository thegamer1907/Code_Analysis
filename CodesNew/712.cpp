#include <cstdio>
#include <cmath>
#include <map>
#include <vector>
#include <iostream>
using namespace std;
int main(){
	int n,m,i,c=0;
	scanf("%d %d",&n,&m);
	char s[600];
	map<string,int>mp;
	for (i=0; i<n;i++){
		scanf("%s",s);
		mp[s]=1;
	}
	for (i=0; i<m;i++){
		scanf("%s",s);
		if (mp[s]) c++;
	}
	if(m==n){
		if (c%2==1) return!printf("YES\n");
		else return!printf("NO\n");
	}
	else if (n>m) return!printf("YES\n");
	else return!printf("NO\n");
}
