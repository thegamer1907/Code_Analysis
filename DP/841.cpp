#include<bits/stdc++.h>
using namespace std;
using std::string;
#define FOR(i,n) for(int (i)=0;(i)<(n);++(i))
#define FORI(i,n) for(int (i)=1;(i)<=(n);++(i))
#define FORR(i,l,r) for(int (i)=l;(i)<(r);++(i))
#define mod 1000000007
#define pb push_back
#define pf push_front
#define ins insert
#define mp make_pair
#define bitcount __builtin_popcount
#define all(v) v.begin(),v.end()
#define mem(n,m) memset(n,m,sizeof(n))
#define pii pair<int,int>
#define pll pair<long long,long long>
#define sii set<int>
#define sll set<long long>
#define vii vector<int>
#define vll vector<long long>
#define mii map<int,int>
#define mll map<long long, long long>
#define lob lower_bound
#define upb upper_bound
#define EPSILON 1e-9
#define MAX 100002
#define PI 3.1415926535897932384626433832795028841971693993751
typedef long long  ll;
typedef unsigned long long llu;
typedef long double  ldb;
typedef double  db ;
int s[102],ans=0;
int main()
{
 // freopen("in.txt","r",stdin);
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      int x;
      cin>>x;
      s[i]=s[i-1]+x;
  }
  for(int i=1;i<=n;i++)
  {
     for(int j=i;j<=n;j++)
     {
        int temp=s[i-1]+j-i+1-(s[j]-s[i-1])+s[n]-s[j];
        ans=max(ans,temp);
     }
  }
  cout<<ans;
}






