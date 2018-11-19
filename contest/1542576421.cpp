#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include<iostream>
#include<algorithm>
#include<string>
#define rep(i,x,y) for(register int i = x;i <= y;++i)
#define repd(i,x,y) for(register int i = x;i >= y;--i)
using namespace std;
typedef long long ll;
template<typename T>void read(T&x)
{
	x = 0;char c;int sign = 1;
	do { c = getchar();if(c == '-') sign = -1; }while(c < '0' || c > '9');
	do { x = x * 10 + c - '0'; c = getchar();	}while(c <= '9' && c >= '0');
	x *= sign;
}

string s,a[103];
int n;

int main()
{
	cin>>s;
	read(n);
	rep(i,1,n)
	    cin>>a[i];
	rep(i,1,n)
		if(s == a[i]) return puts("YES"),0;
	rep(i,1,n)
		rep(j,1,n)
			if(a[i][1] == s[0] && a[j][0] == s[1]) return puts("YES"),0;
	return puts("NO"),0;
}