#include <cstdio>
#include <map>
#include <iostream>
using namespace std;
int main(){
	int n,m,i,c=0;
	scanf("%d %d",&n,&m);
	char s[600];
	map<string,int>mp;
	for (i=0; i<n;i++)
		scanf("%s",s),mp[s]=1;
	for (i=0; i<m;i++){
		scanf("%s",s);
		if (mp[s]) c++; }
	if(m==n) return!printf(c%2==1 ? "YES":"NO");
	else return!printf(n>m ? "YES":"NO");
}
