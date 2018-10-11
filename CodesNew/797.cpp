#include<bits/stdc++.h>
#define maxx 1010
using namespace std;

int n,m,tot;
string a[maxx],b[maxx],c[maxx];

string judge()
{
	int turn=1;
	while(n&&m&&tot)
	{
	  turn++;
	  tot--;
	  n--;
	  m--;
	}
	if(turn%2)
	  if(n>m)
	    return "YES";
	  else
	    return "NO";
	else
	  if(n>=m)
	    return "YES";
	  else
	    return "NO";
}

int main()
{
	//freopen("std.in","r",stdin);
	//freopen("std.out","w",stdout);
	
	scanf("%d%d\n",&n,&m);
	for(int i=1;i<=n;i++)
	  cin>>a[i];
	for(int i=1;i<=m;i++)
	{
	  cin>>b[i];
	  for(int j=1;j<=n;j++)
	    if(a[j]==b[i])
	    {
	      c[++tot]=a[j];
	      break;
	    }
	}
	cout<<judge();
	return 0;
}
