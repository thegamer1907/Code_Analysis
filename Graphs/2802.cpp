#include<bits/stdc++.h>
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pair pair<int,int>
#define F first
#define S second
using namespace std;

int main()
{
  	ios_base::sync_with_stdio(false);
  	cin.tie(NULL);
  	int n,m;
  	cin>>n>>m;
  	int c[n+1];

    int flag[100001];
    memset(flag,0,sizeof(flag));

  	for(int i=1;i<=n;i++)
  		cin>>c[i],flag[c[i]]=1;
    


  	set <pair > s;
  	for(int i=0;i<m;i++)
  	{
  		int a,b;
  		cin>>a>>b;
  		if(c[a]==c[b])
  			continue;
  		else if(c[a] < c[b])
  		{
  			s.insert(mp(c[a],c[b]));
  		}
  		else
  		{
  			s.insert(mp(c[b],c[a]));
  		}

  	}

  	int count[100001];
  	memset(count,0,sizeof(count));
  	set <pair > :: iterator it;
  	for(it = s.begin();it!= s.end();it++)
  	{
  		pair p = *it;
  		count[p.F]++;
  		count[p.S]++;
  	}
  	int ans = c[1];
  	int max = count[c[1]];
    //cout<<ans<<" "<<max<<" ";
  	for(int i=1;i<=100000;i++)
  	{
      if(flag[i]==0)
        continue;
  		if(count[i] >max)
        ans = i,max = count[i];
      else if(count[i]==max)
        ans = min(ans,i);
  	}
  	cout<<ans;


  return 0;
}