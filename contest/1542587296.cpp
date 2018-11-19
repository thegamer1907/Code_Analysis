#include<cstdio>
#include<cstring>
#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define LL long long
#define FOR(i,a,b) for (int i=a;i<=b;++i)
#define FORD(i,a,b) for (int i=a;i>=b;--i)
using namespace std;
typedef pair<int,int> pa;
typedef long double ld;
void getint(int &v){
    char ch,fu=0;
    for(ch='*'; (ch<'0'||ch>'9')&&ch!='-'; ch=getchar());
    if(ch=='-') fu=1, ch=getchar();
    for(v=0; ch>='0'&&ch<='9'; ch=getchar()) v=v*10+ch-'0';
    if(fu) v=-v;
}
int h,m,s,t1,t2;
bool I(int x){
	return (x>=t1 && x<=t2);
}
int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	h%=12;
	t1%=12;
	t2%=12;
	int A=h*36000+m*600+s*10;
	int B=120*s+7200*m;
	int C=7200*s;
	t1*=36000;
	t2*=36000;
	if (t1>t2) swap(t1,t2);
	if (!I(A) && !I(B) && !I(C)) return puts("YES"),0;
	bool ok=1;
	if (A>t2 || A<t1) ok=0;
	if (B>t2 || B<t1) ok=0;
	if (C>t2 || C<t1) ok=0;
	puts(ok?"YES":"NO");
	return 0;
}