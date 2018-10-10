#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
#define pii pair< int,int >
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define lint long long int
lint b=0,s=0,c=0;
lint nb,ns,nc,pb,ps,pc;
lint p;
bool check(lint n)
{
lint aaa=0;
if(n*b<=nb)
aaa+=0;
else
aaa+=(n*b-nb)*pb;
if(n*s<=ns)
aaa+=0;
else
aaa+=(n*s-ns)*ps;
if(n*c<=nc)
aaa+=0;
else
aaa+=(n*c-nc)*pc;
return (aaa<=p);
}
int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int t=1;
  //cin>>t;
  while(t--)
  {
    string a;
    cin>>a;
    int i;
    for(i=0;i<a.size();i++)
    {
      if(a[i]=='B')
        b++;
      else if (a[i]=='C')
        c++;
      else
        s++;
    }
     lint lo=0,hi=1e14;
     cin>>nb>>ns>>nc>>pb>>ps>>pc>>p;
     while(hi-lo>1)
     {
      lint m=(hi+lo)/2;
      if(check(m))
        lo=m;
      else
        hi=m;
      }
     cout<<lo;
  }
  return 0;
}