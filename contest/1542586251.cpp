#include <bits/stdc++.h>
#define ll long long
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
using namespace std;
bool vis[15];
int main (){
	int i,h,m,s,t1,t2;
	scanf ("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	int tag1=0,tag2=0;
	if (m%5!=0) {vis[m/5]=1;}
	if (m%5==0&&s==0) {vis[m/5]=1;vis[(m/5+11)%12]=1;}
	if (m%5==0&&s!=0) {vis[m/5]=1;}
	if (m==0&&s==0) {vis[h-1]=1;vis[h%12]=1;}
	else {vis[h%12]=1;}
	if (s%5!=0) {vis[s/5]=1;}
	else {vis[(s/5+11)%12]=1;vis[s/5]=1;}
	for (i=t1;i<(t1<t2?t2:t2+12);i++)
	{if (vis[i%12]) {tag1=1;break;}
	}
	for (i=t2;i<(t1<t2?t1+12:t1);i++)
	{if (vis[i%12]) {tag2=1;break;}
	}
	if (tag1&&tag2) {puts("NO");}
	else {puts("YES");}
	return 0;
}