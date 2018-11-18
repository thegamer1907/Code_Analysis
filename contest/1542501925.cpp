#include<bits/stdc++.h>
using namespace std;
#define N 101
int n,m,a,b;
struct rua
{
	string st,ed;
	set<int>has[10];
	bool check(int k)
	  {
	  for(int i=0;i<(1<<k);i++)
	    if(!has[k].count(i))return false;
	  return true;
	  }
	int ans()
	  {
	  for(int k=9;k>0;k--)
	    if(check(k))return k;
	  return 0;
	  }
	rua connect(rua nxt)
	  {
	  rua res=nxt;
	  res.st=st;
	  if(st.size()<9)
	    res.st=st+nxt.st.substr(0,min(nxt.st.size(),9-st.size()));
	  int cpy_len=min(ed.size(),9-nxt.ed.size());
	  if(nxt.ed.size()<9)
	    res.ed=ed.substr(ed.size()-cpy_len,cpy_len)+nxt.ed;
	  for(int k=1;k<=9;k++)
	    for(auto i:has[k])res.has[k].insert(i);
	  string tmp=ed+nxt.st;
	  int len=tmp.size();
	  for(int i=0;i<len;i++)
	    {
	    int value=0;
	    for(int d=0;d<9 && i+d<len;d++)
	      value=value*2+tmp[i+d]-'0',
	      res.has[d+1].insert(value);
		}
	  return res;
	  }
}f[2*N];
string s;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	  {
	  cin>>s;
	  int len=s.size();
	  for(int j=0;j<len;j++)
	    {
	    int value=0;
	    for(int d=0;d<9 && j+d<len;d++)
	      value=value*2+s[j+d]-'0',
	      f[i].has[d+1].insert(value);
		}
	  int cpy_len=min(9,len);
	  f[i].st=s.substr(0,cpy_len);
	  f[i].ed=s.substr(len-cpy_len,cpy_len);
	  }
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	  {
	  scanf("%d%d",&a,&b);
	  f[n+i]=f[a].connect(f[b]);
	  printf("%d\n",f[n+i].ans());
	  }
}
