/*input
5
3 10 8 6 11
4
1
10
3
11

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef pair<int,int> pii;
typedef pair<ll,ll>   pll;
#define pb push_back
#define mp make_pair
#define fs first
#define mems(m,b) memset(m,b,sizeof(m));
#define all(v) v.begin(),v.end()
#define ss second
#define rep(i,a,b) for(int i = a;i<b;i++)
#define repr(i,a,b) for(int i = a;i>=b;--i)
#define mod 1000000007
#define maxn 100050
#define allin(a,st,last) for(int i=st;i<last;i++)cin>>a[i];
#define allout(a,st,last) for(int i=st;i<last;i++)cout<<a[i]<<" ";
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
fast
int n,num;
cin>>n;
vector<int> v;
for(int i=0;i<n;i++)
{
  
  cin>>num;
  v.pb(num);
}
sort(v.begin(),v.end());
int t;
cin>>t;
while(t--)
{
     cin>>num;
     cout<<upper_bound(v.begin(),v.end(),num)-v.begin()<<"\n";
}
return 0;
}