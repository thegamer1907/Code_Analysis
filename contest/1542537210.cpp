#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
#define F first
#define S second
#define mk make_pair
#define inf 1e18
#define mini -5e18+5
#define MOD 2000000033
#define all(v) (v).begin(),(v).end()
#define pii pair<int ,int >
#define pll pair<long long int ,long long int>
#define mset(v,x) memset(v,x,sizeof(v))
#define MODSET(d) if ((d) >= MOD) d %= MOD;
#define inp(x) (scanf("%d",&x))
#define inp2(x,y) (scanf("%d%d",&x,&y))
#define inp3(x,y,z) (scanf("%d%d%d",&x,&y,&z))
#define inp4(x,y,z,w) (scanf("%d%d%d%d",&x,&y,&z,&w))
#define inpl(d) scanf("%lld",&d)
#define inpl2(a,b) scanf("%lld%lld",&a,&b)
#define inpl3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define inpl4(a,b,c,d) scanf("%lld%lld%lld%lld",&a,&b,&c,&d)
using namespace std;
//ll arr[100005];
//bool vis[100005];
vector<string >v,v2;
//vector<ll >v[1005];
//vector< pair <int ,pii > >vpp;
//set<int >sides;
//set<ll >::iterator it;
//map<int ,int >mp;
//map<int ,int >::iterator it;
//priority_queue<int, vector<int >, greater<int > >pq;
/********************************************* YOUR CODE GOES FROM HERE ************************************************/
int main()
{
  string pass,str,s,snew;
  cin>>pass;
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    cin>>str;
    v.pb(str);
  }
  for(int i=0;i<v.size();i++)
  {
     s=v[i];
     v2.pb(s);
     for(int j=0;j<v.size();j++)
     {
         snew=s+v[j];
         v2.pb(snew);
         snew.clear();
     }
  }
  for(int i=0;i<v2.size();i++)
   {
       if(v2[i].find(pass)!=-1)
       {
           cout<<"YES";
           return 0;
       }
   }
   cout<<"NO";
}
