#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
#include<vector>
#define N 1000
#define inf
#define mod
#define rg register
using namespace std;
typedef long long ll;
typedef double db;
int h,m,s,x,y;
int mk[N];
int main(){
	//	freopen ("b.in","r",stdin);
	//	freopen ("b.out","w",stdout);
	scanf ("%d%d%d%d%d",&h,&m,&s,&x,&y);
	if (x==12) x=0;if (y==12) y=0;if (h==12) h=0;
	if ((s%5==0)&&((x==s/5)||(y==s/5))) { printf ("NO\n");return 0; }
	else mk[s/5]=1;
	if (!s&&(m%5==0)&((x==m/5)||(y==m/5))) { printf ("NO\n");return 0; }
	else mk[m/5]=1;
	if ((!s)&&(!m)&&(x==h||y==h)) { printf ("NO\n");return 0; }
	else mk[h]=1;
	if (x>y) swap(x,y);
	int fl=0;
	//cout<<x<<" "<<y<<endl;
	for (int i=x;i<y;++i) if (mk[i]) {fl=1;break;}
	if (!fl) { printf ("YES\n");return 0; }
	fl=0;
	for (int i=y;i<12;++i) if (mk[i]) {fl=1;break;}
	for (int i=0;i<x;++i) if (mk[i]) {fl=1;break;}
	if (!fl) { printf ("YES\n");return 0; }
	else { printf ("NO\n");return 0; }
	return 0;
}
