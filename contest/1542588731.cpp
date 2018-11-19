#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<queue>
#include<vector>
#include<map>
#include<stack>
#define RG register
#define MAXN 1000010
#define LL long long int
using namespace std;
const int INF=1e9;
char id[3];
char s[3];
int n;
int vis[2000][2];
int main()
{
  //freopen("1.in","r",stdin);
  //freopen("1.out","w",stdout);
	scanf("%s",id);scanf("%d",&n);
	char ch;
	int flag=0;
	for(int i=1;i<=n;i++)
		{
			scanf("%s",s);
			vis[s[0]-'a'][1]=1;vis[s[1]-'a'][2]=1;
			if(s[0]==id[0]&&s[1]==id[1]) flag=1;
		}
	if((vis[id[0]-'a'][2]&&vis[id[1]-'a'][1])||flag) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
  return 0;
}
