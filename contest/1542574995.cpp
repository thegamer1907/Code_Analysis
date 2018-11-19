#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
#define ms(x,y) memset(x,y,sizeof(x))
using namespace std;

typedef long long ll;

const double pi = acos(-1.0);
const int mod = 1e9 + 7;
const int maxn = 1e5 + 5;

int main()
{
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	char a,b;
	scanf("%c%c",&a,&b);
	//cout<<"***"<<a<<" "<<b<<endl;
	int n;
	scanf("%d",&n);
	char f[maxn],l[maxn];
	for(int i=0;i<n;i++)
	{
		scanf(" %c %c",f+i,l+i);

		//cout<<"f = "<<f[i]<<" l = "<<l[i];
	}
	bool ok=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(f[i]==a&&l[i]==b)
				ok=1;
			if(f[i]==b&&l[j]==a)
				ok=1;
			if(ok) break;
		}
		if(ok) break;
	}
	if(ok) printf("YES\n");
	else printf("NO\n");
	return 0;
}