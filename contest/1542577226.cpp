#include <bits/stdc++.h>
#define ll long long
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
using namespace std;
inline int read()
{int x=0;
char c=getchar();
while (c<'0'||c>'9') c=getchar();
while (c>='0'&&c<='9') x=x*10+c-'0',c=getchar();
return x;
}
struct node
{set <string> s[12];
string sf,sb;
bool ok;
}s[205];
string tp;
set <string>::iterator it;
int main (){
	int i,j,l,n,m;
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{cin>>tp;
	int sz=tp.size();
	for (j=0;j<sz;j++)
	{string rp="";
	for (l=j;l<sz;l++)
	{if (l-j+1>11) {break;}
	rp+=tp[l];
	s[i].s[l-j+1].insert(rp);
	}
	}
	if (sz<=11) {s[i].ok=1;}
	else {s[i].ok=0;}
	int f1=(sz>11?11:sz);
	s[i].sf=tp.substr(0,f1);
	s[i].sb=tp.substr(sz-f1,f1);
	}
	int a,b;
	scanf ("%d",&m);
	for (i=1;i<=m;i++)
	{scanf ("%d%d",&a,&b);
	if (s[a].ok&&s[b].ok)
	{string tp=s[a].sf+s[b].sf;
	int sz=tp.size();
	for (j=0;j<sz;j++)
	{string rp="";
	for (l=j;l<sz;l++)
	{if (l-j+1>=11) {break;}
	rp+=tp[l];
	s[n+i].s[l-j+1].insert(rp);
	}
	}
	if (sz<=11) {s[n+i].ok=1;}
	else {s[n+i].ok=0;}
	int f1=(sz>11?11:sz);
	s[n+i].sf=tp.substr(0,f1);
	s[n+i].sb=tp.substr(sz-f1,f1);
	}
	else
	{for (j=1;j<=11;j++)
	{if (s[a].s[j].size()>s[b].s[j].size())
	{s[n+i].s[j]=s[a].s[j];
	for (it=s[b].s[j].begin();it!=s[b].s[j].end();it++)
	{s[n+i].s[j].insert((*it));}
	}
	else
	{s[n+i].s[j]=s[b].s[j];
	for (it=s[a].s[j].begin();it!=s[a].s[j].end();it++)
	{s[n+i].s[j].insert((*it));}
	}
	}
	if (s[a].ok&&(!s[b].ok))
	{s[n+i].ok=0;
	string tp=s[a].sf+s[b].sf;
	int sz=tp.size();
	int f1=(sz>11?11:sz);
	s[n+i].sf=tp.substr(0,f1);
	s[n+i].sb=s[b].sb;
	}
	if ((!s[a].ok)&&s[b].ok)
	{s[n+i].ok=0;
	string tp=s[a].sb+s[b].sb;
	int sz=tp.size();
	int f1=(sz>11?11:sz);
	s[n+i].sf=s[a].sf;
	s[n+i].sb=tp.substr(sz-f1,f1);
	}
	if ((!s[a].ok)&&(!s[b].ok))
	{s[n+i].ok=0;
	s[n+i].sf=s[a].sf;
	s[n+i].sb=s[b].sb;
	}
	int sa=s[a].sb.size(),sb=s[b].sf.size();
	for (j=1;j<=sa;j++)
	{for (l=1;l<=sb&&j+l<=11;l++)
	{string tp=s[a].sb.substr(sa-j,j)+s[b].sf.substr(0,l);
	s[n+i].s[j+l].insert(tp);
	}
	}
	}
	for (j=1;j<=11;j++)
	{if (s[n+i].s[j].size()!=(1<<j))
	{printf ("%d\n",j-1);break;}
	if (j==11) {printf ("%d\n",j);}
	}
	}
	return 0;
}
	
	