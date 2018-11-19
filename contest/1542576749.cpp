#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<queue>
#include<stack>
#include<vector>
#include<map>
#include<set>
using namespace std;

typedef long long int LL;
const int INF = 0x3f3f3f3f;
template<class T>
void Read(T &x){
	x=0;char c=getchar();bool flag=0;
	while(c<'0'||'9'<c){if(c=='-')flag=1;c=getchar();}
	while('0'<=c&&c<='9'){x=x*10+c-'0';c=getchar();}
	if(flag)x=-x;
}

int main(){
	double h,m,s;
	double t1,t2;
	scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2);
	h*=5,t1*=5,t2*=5;
	m+=s/60.0;
	h+=m/60.0;
	
	if(t1>t2)swap(t1,t2);
	
	bool flag1=false,flag2=false;
	if(t1<h&&h<t2)flag1=true;
	if(t1<m&&m<t2)flag1=true;
	if(t1<s&&s<t2)flag1=true;
	if(h<t1||t2<h)flag2=true;
	if(m<t1||t2<m)flag2=true;
	if(s<t1||t2<s)flag2=true;
	
	puts(flag1&&flag2?"NO":"YES");
}