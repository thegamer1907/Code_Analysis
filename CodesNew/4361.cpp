#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
#define F first
#define S second
#define mk make_pair
#define inf LONG_MAX
#define mini LONG_MIN
#define MOD 1000000007
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
//int arr[100005];
//bool vis[100005];
//vector<int >vec[100005];
vector<string >v,ans;
//set<int >st1,st2,st3;
//set<int >::iterator it1,it2,it3;
//map<int ,int >mp,mp2,mp3;
//map<int ,int >::iterator it,it2,it3;
//priority_queue<int, vector<int >, greater<int > >emp;
//queue<int >q;
int main()
{
  int n;
  inp(n);
  string s,s1,s2,temp;
  for(int i=1;i<=n;i++)
  {
      cin>>s;
      v.pb(s);
  }
  ans.pb(v[v.size()-1]);
  for(int i=v.size()-2;i>=0;i--)
  {
      s1=v[i];s2=ans[ans.size()-1];
      if(s2>s1)
        ans.pb(s1);
      else
      {
          for(int j=0;j<s2.length();j++)
          {
              if(s2[j]<s1[j])
                break;
              else
                temp.pb(s2[j]);
          }
          ans.pb(temp);
          temp.clear();
      }
  }
  reverse(all(ans));
  for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<"\n";
}
