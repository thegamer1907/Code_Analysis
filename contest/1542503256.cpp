#include <bits/stdc++.h>
#define rep(i,s,t) for(int i=(s),_t=(t);i<_t;++i)
using namespace std;
// EOT


const int N=105;

int n;
char str[5],sub[N][5];

bool solve()
{
	rep(i,0,n)if(sub[i][0]==str[0]&&sub[i][1]==str[1])return 1;
	rep(i,0,n)rep(j,0,n)if(sub[i][1]==str[0]&&sub[j][0]==str[1])return 1;
	return 0;
}

int main()
{
	scanf("%s",str);
	cin>>n;
	rep(i,0,n)scanf("%s",sub[i]);
	return puts(solve()?"YES":"NO"),0;
}

