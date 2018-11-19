#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int maxn = 1e5+10;
int h,m,s,t1,t2;
int main(){
	scanf("%d %d %d %d %d",&h,&m,&s,&t1,&t2);
	if(h == 12)
		h = 0;
	if(t1 == 12)
		t1 = 0;
	if(t2 == 12)
		t2 = 0;
	h = h*5;
	t1 = t1*5;
	t2 = t2*5;
	if(h < m)
		swap(h,m);
	if(h < s)
		swap(h,s);
	if(m < s)
		swap(m,s);

	if(t1 > t2)
		swap(t1,t2);
	//cout<<h<<" "<<m<<" "<<s<<" "<<t1<<" "<<t2<<endl;
	if((t1 > h)||(t2 <= s)||(t1>s&&t1<=m&&t2>s&&t2<=m)||(t1>m&&t1<=h&&t2>m&&t2<=h)||(t1<=s && t2>h))
		puts("YES");
	else
		puts("NO");
	return 0;
}