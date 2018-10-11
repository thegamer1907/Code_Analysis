/*
Nahid Hossain
Jahangirnagar University
Roll:54
*/
#include<bits/stdc++.h>
#define ll          long long int
#define db          double
#define pf          printf
#define sf          scanf
#define ff          first
#define ss          second
#define clr         clear()
#define sz          size()
#define pb          push_back
#define mk          make_pair
#define pi          acos(-1)
#define inf         1000000000000000005
#define mod          998244353

#define q(n)        q.push(n)
#define ull         unsigned long long int
#define f(i,k,n)    for(ll i=k;i<n;i++)
#define fr(i,n,k)   for(ll i=n;i>=k;i--)
#define ent(a)      scanf("%lld",&a)
#define ent2(a,b)   scanf("%lld%lld",&a,&b)
#define ent3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define mem(a)      memset(a,0,sizeof(a))
#define mem1(a)     memset(a,-1,sizeof(a))
#define vec(v,s)    vector<ll>v[s]
#define arr(a,s)    ll a[s]
//#define check(n,pos) (n&(1<<pos))
//#define set(n,pos)  (n|(1<<pos))
//knight and king//
int dr[]={2,2,-2,-2,1,-1,1,-1};
int dc[]={1,-1,1,-1,2,2,-2,-2};
int dr1[]={0,0,1,1,1,-1,-1,-1};
int dc1[]={1,-1,1,0,-1,0,1,-1};
int dr2[]={0,0,1,-1};
int dc2[]={1,-1,0,0};
////////////////////////////
using namespace std;
#define ma 10000010
ll mark[ma],cnt[ma],pre[ma];
int main()
{
 ll n,x,i,j,q;
 ent(n);
 f(i,1,ma)
 {
  mark[i]=i;
  cnt[i]=0;
  pre[i]=0;
 }
 f(i,1,n+1)
 {
  ent(x);
  pre[2]+=(x%2==0);
  cnt[x]++;
 }

 for(i=3;i<ma;i+=2)
 {
  if(mark[i]==0)continue;
  for(j=i;j<ma;j+=i)
  {
   mark[j]=0;
   pre[i]+=cnt[j];
  }
 }

 //cout<<pre[2]<<endl;
 for(i=1;i<ma;i++)pre[i]+=pre[i-1];
 ent(q);
 while(q--)
 {
  ll l,r;
  ent2(l,r);
  if(l>10000000)
  {
   cout<<"0"<<endl;
   continue;
  }
  if(r>10000000)r=10000000;
  pf("%lld\n",pre[r]-pre[l-1]);
 }



}
