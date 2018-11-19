#include <bits/stdc++.h>

using namespace std;

int n,k;
set<string> ss;

bool ok;

void DFS(int cur,string s1,string s2)
{
	if(cur==k || ok)
	{
		if(ss.find(s2)!=ss.end()) ok=true;
		return;
	}

	if(s1[cur]=='1')
		DFS(cur+1,s1,s2+'0');
	else
	{
		DFS(cur+1,s1,s2+'0');
		DFS(cur+1,s1,s2+'1');
	}
}

int main()
{
	scanf("%d%d",&n,&k);

	for(int i=1;i<=n;i++)
	{
		string s1,s2;

		s1=s2="";
		for(int j=1;j<=k;j++)
		{
			int val;

			scanf("%d",&val);
			s1+='0'+val;
		}

		ok=false;

		DFS(0,s1,s2);

		if(ok)
		{
			puts("YES");
			return 0;
		}

		ok=false;
		for(int i=0;i<s1.length();i++)
			if(s1[i]!='0')
			{
				ok=true;
				break;
			}

		if(!ok)
		{
			puts("YES");
			return 0;
		}
		ss.insert(s1);
	}

	puts("NO");

        return 0;
}
