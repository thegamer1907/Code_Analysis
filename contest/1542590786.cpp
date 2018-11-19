# include <iostream>
# include <vector>
# include <queue>
# include <cstring>
# include <cstdio>
# include <algorithm>
# include <cmath>
# include <cstdlib>
# include <map>
# include <set>
# include <iomanip>
# include <time.h>
# define eps 1e-6
# define inf 2000000000
# define MAXN 200010
# define MOD 1000000007
using namespace std;
inline int mread()
{
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
char str[10];
int n,w[30][3];
int main()
{
	scanf("%s",str);
	n = mread();
	for(int i = 1;i <= n;i++)
	{
		char tmp[4];
		scanf("%s",tmp);
		if(tmp[0] == str[0] && tmp[1]==str[1])
		{
			puts("YES");
			return 0;
		}
		w[tmp[0]-'a'][0] = 1;
		w[tmp[1]-'a'][1] = 1;
	}
	if(w[str[0]-'a'][1] && w[str[1]-'a'][0])
		puts("YES");
	else
		puts("NO");
	return 0;
}