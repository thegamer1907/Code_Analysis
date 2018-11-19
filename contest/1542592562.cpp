#include <bits/stdc++.h>
#define mod 1000000007 
#define pb push_back
#define mp make_pair
using namespace std;
#define MAXN 1000010
long long a[MAXN+5];
long long n,m,k,u,v,x,y,q,t;
vector<long long>primes,vec;
long long fastpow(long long base,long long exp)
{
  if(!exp)return 1;
  if(exp==1)return base;
  long long temp = fastpow(base,exp/2);
  if(exp%2){
    return (((temp*temp)%mod)*base)%mod;
  }
  return (temp*temp)%mod;
}
string str[200],s;
int main()
{
  cin>>s;
  cin>>n;
  bool flag=0;
  for(int i=0;i<n;i++)cin>>str[i];
  for(int i=0;i<n;i++)
  {
    if(str[i][0]==s[0] and str[i][1]==s[1])flag=1;
    for(int j=0;j<n;j++)
    {
      if(str[i][1]==s[0] and str[j][0]==s[1]){flag=1;}
    }
  }
  if(flag)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  return 0;
}
