#include<iostream>    
#include<string>    
#include<algorithm>    
#include<cstdio>    
#include<cstring>    
#include<cstdlib>
#include<cmath>
#include<queue>
using namespace std;  
typedef long long s64;

const int ONE = 2e6 + 5;
const int INF = 214748340;

int n, S;
int a[ONE];
s64 b[ONE];


int get()
{
		int res=1,Q=1;char c;
		while( (c=getchar())<48 || c>57 )
		if(c=='-')Q=-1;
		res=c-48;
		while( (c=getchar())>=48 && c<=57 )
		res=res*10+c-48;
		return res*Q;
}

int Check(int num)
{
		for(int i = 1; i <= n; i++)
			b[i] = a[i] + (s64)i * num;
		sort(b + 1, b + n + 1);

		s64 total = 0;
		for(int i = 1; i <= num; i++)
		{
			total += b[i];
			if(total > S) return S + 1;
		}

		return total;
}

int main()
{
		n = get();	S = get();

		for(int i = 1; i <= n; i++)
			a[i] = get();

		int l = 0, r = n;
		while(l < r - 1)
		{
			int mid = l + r >> 1;
			if(Check(mid) <= S) l = mid;
			else r = mid;
		}

		int x = Check(r);
		if(x <= S) printf("%d %d", r, x);
		else printf("%d %d", l, Check(l));
}