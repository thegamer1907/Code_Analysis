#include<bits/stdc++.h>
using namespace std;
int main(){
	int h,m,s,t1,t2;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if(t1>t2) swap(t1,t2);
	if(((h>=t2 || h<t1) && (m>=t2*5 || m<t1*5) && (s>=t2*5 || s<t1*5)) || ((h>=t1 && h<t2) && (m>=t1*5 && m<t2*5) && (s>=t1*5 && s<t2*5)))
		printf("YES\n");
	else printf("NO\n");
}