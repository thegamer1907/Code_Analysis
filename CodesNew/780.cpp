#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<map>
using namespace std;

int main(){
	map<string,int>q;
	map<string,int>::iterator iter;
	int m,n;
	scanf("%d%d",&m,&n);
	char s[1005];
	int a=m,b=n;
	while(m--){
		scanf("%s",s);
		q.insert(pair<string,int>(s,1));
	}
	int w=0;
	while(n--){
		scanf("%s",s);
		iter=q.find(s);
		if(iter!=q.end())w++;
	}
	if(w%2==0&&a>b||w%2==1&&a>=b)printf("YES\n");
	else printf("NO\n");
	return 0;
}
