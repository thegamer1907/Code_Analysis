#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<queue>
#include<set>
#include<map>
#include<stack>
#include<bitset>
using namespace std;
typedef long long LL;
int gi() {
	int w=0;bool q=1;char c=getchar();
	while ((c<'0'||c>'9') && c!='-') c=getchar();
	if (c=='-') q=0,c=getchar();
	while (c>='0'&&c <= '9') w=w*10+c-'0',c=getchar();
	return q? w:-w;
}
bool check() {
	double a=gi(),b=gi(),c=gi(),l=gi(),r=gi();
	if (l>r) swap(l,r);
	if (c!=0) b+=0.5;
	if (b!=0) a+=0.5;

	if (b>=60) b-=60;
	if (a>=12) a-=12;

	b=b/5;c=c/5;

	
	bool o1=0,o2=0;
	if (l<=a&&a<=r) o1=1;
	if (l<=b&&b<=r) o1=1;
	if (l<=c&&c<=r) o1=1;
	if (a<l||r<a) o2=1;
	if (b<l||r<b) o2=1;
	if (c<l||r<c) o2=1;
	return !(o1&&o2);
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("B.in","r",stdin);
	freopen("B.out","w",stdout);
#endif
	puts(check()?"YES":"NO");
	return 0;
}
