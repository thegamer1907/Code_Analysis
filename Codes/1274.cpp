#include <cstdio>
#include <algorithm>
#include <iostream>
#include <set>
#define IL inline
#define REP(a,b,c) for(a=b;a<=c;a++)
using namespace std;
int n,m,same;
set<string> S;string s;
int main(){
	scanf("%d%d",&n,&m);int i;
	REP(i,1,n){
		cin >> s;
		S.insert(s);
	}
	REP(i,1,m){
		cin >> s;
		if(S.count(s))same++;
	}
	if(same&1)m--;
	puts(n>m?"YES":"NO");
  return 0;
}
