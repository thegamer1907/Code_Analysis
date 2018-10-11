#include <iostream>
#include <stdio.h>
#include <string.h>
#include <map>
using namespace std;
string s;
map<string,int> M;

int main(){
	int n,m;
	while(~scanf("%d%d",&n,&m)){
		M.clear();
		int sum1=0;
		for(int i=0;i<n;i++){
			cin >> s;
			if(M.count(s)>0);
			else M[s]=1,sum1++;
		}
		int sum=0,t=0;
		for(int i=0;i<m;i++){
			cin >> s;
			if(M.count(s)>0) sum1--,t++;
			else sum++,M[s]=1;
		}
		if(t%2) sum1++;
		if(sum1>sum) puts("YES");
		else puts("NO");
	}
}