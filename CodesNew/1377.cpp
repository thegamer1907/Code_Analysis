#include<bits/stdc++.h> //Ithea Myse Valgulious
namespace chtholly{
typedef long long ll;
#define re0 register int
#define rec register char
#define rel register ll
#define gc getchar
#define pc putchar
#define p32 pc(' ')
#define pl puts("")
/*By Citrus*/
inline int read(){
  int x=0,f=1;char c=gc();
  for (;!isdigit(c);c=gc()) f^=c=='-';
  for (;isdigit(c);c=gc()) x=(x<<3)+(x<<1)+(c^'0');
  return f?x:-x;
  }
template <typename mitsuha>
inline bool read(mitsuha &x){
  x=0;int f=1;char c=gc();
  for (;!isdigit(c)&&~c;c=gc()) f^=c=='-';
  if (!~c) return 0;
  for (;isdigit(c);c=gc()) x=(x<<3)+(x<<1)+(c^'0');
  return x=f?x:-x,1;
  }
template <typename mitsuha>
inline int write(mitsuha x){
  if (!x) return 0&pc(48);
  if (x<0) x=-x,pc('-');
  int bit[20],i,p=0;
  for (;x;x/=10) bit[++p]=x%10;
  for (i=p;i;--i) pc(bit[i]+48);
  return 0;
  }
inline char fuhao(){
  char c=gc();
  for (;isspace(c);c=gc());
  return c;
  }
}using namespace chtholly;
using namespace std;
int nb,ns,nc,pb,ps,Pc,kb,ks,kc;
string s;
ll now;

bool judge(ll x){
ll rb=max((kb*x-nb)*pb,0ll);
ll rs=max((ks*x-ns)*ps,0ll);
ll rc=max((kc*x-nc)*Pc,0ll);
return rb+rs+rc<=now;
}

int main(){
cin>>s>>nb>>ns>>nc>>pb>>ps>>Pc;
for (char c:s){
  if (c=='B') kb++;
  if (c=='S') ks++;
  if (c=='C') kc++;
  }
read(now);
ll l=0,r=1e15;
for (;l<=r;){
  ll mid=l+r>>1;
  judge(mid)?l=mid+1:r=mid-1;
  }write(l-1);
}