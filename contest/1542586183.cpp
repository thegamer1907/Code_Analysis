#include<cstdio>
#include<algorithm>
using namespace std;
#define inc(l, i, r) for(i=l; i<r; ++i)
#define re_ return
#define in_ inline
#define op_ operator

struct io
{
	in_ int op_!(void)
	{
		static int r, c;
		for(r=0; (c=getchar())<48 || 57<c;);
		for(;c>47 && 58>c; c=getchar())
			r=(r<<3)+(r<<1)+(c&15);
		re_ r;
	}
	in_ io& op_&(int& a)
	{re_ a=!*this, *this;}
	in_ io& op_^(const int a)
	{re_ printf("%d", a), *this;}
	in_ io& op_^(const char* a)
	{re_ printf("%s", a), *this;}
} io;

int h, m, s, t1, t2, a[3];

in_ int get(int t)
{
	t*=5;
	if(a[2]<t || t<=a[0]) re_ 0;
	if(a[0]<t && t<=a[1]) re_ 1;
	re_ 2;
}

int main()
{
	io &h &m &s &t1 &t2;
	a[0]=h*5, a[1]=m, a[2]=s;
	sort(a, a+3);
	io ^(get(t1)==get(t2)? "YES": "NO");
	re_ 0;
}
