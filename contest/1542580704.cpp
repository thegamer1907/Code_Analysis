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

int n, k, cnt[16], a[4];

int main()
{
	int i, j, l, ans=0;
	io &n &k;
	inc(0, i, n)
	{
		inc(0, j, k)
			io &a[j];
		j=a[0]<<3|a[1]<<2|a[2]<<1|a[3], ++cnt[j];
//		io ^j ^"\n";
		for(l=~j&15; ;l=l-1&~j)
		{
			if(cnt[l]) ans=1;
			if(!l) break;
		}
	}
	io ^(ans? "YES\n": "NO\n");
	re_ 0;
}
