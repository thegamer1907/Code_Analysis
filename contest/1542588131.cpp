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

int n;
char k[2], s[666][2];

int main()
{
	int i, j, a=0;
	scanf("%s", k);
	for(io &n, i=0; i<n; ++i) scanf("%s", s[i]);
	for(i=0; i<n; ++i)
	{
		if(k[0]==s[i][0] && k[1]==s[i][1]) a=1;
		inc(0, j, n)
			if(k[0]==s[i][1] && k[1]==s[j][0])
				a=1;
	}
	io ^(a? "YES\n": "NO\n");
	re_ 0;
}
