#include<bits/stdc++.h> //Ithea Myse Valgulious
namespace chtholly{
typedef long long ll;
#define re0 register int
#define rel register ll
#define rec register char
#define gc getchar
//#define gc() (p1==p2&&(p2=(p1=buf)+fread(buf,1,1<<23,stdin),p1==p2)?-1:*p1++)
#define pc putchar
#define p32 pc(' ')
#define pl puts("")
/*By Citrus*/
char buf[1<<23],*p1=buf,*p2=buf;
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
  if (x<0) pc('-'),x=-x;
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
const int yuzu=1e5;
typedef int fuko[yuzu|10];
vector<int> lj[yuzu|10];
fuko a;
int n,m,les,ans;
void dfs(int u,int fa,int cnt,int da,int irt) {
  if (cnt>da) da=cnt; 
  if (lj[u].size()==1&&!irt) ++les;
  if (da>m&&lj[u].size()==1&&!irt) ++ans;
  for (int i:lj[u]) if (i^fa) dfs(i,u,a[i]?cnt+1:0,da,0);
}
int main() {
  int i,u,v; 
  read(n),read(m);
  for (i=1;i<=n;++i) a[i]=read();
  for (i=1;i<n;++i) {
    read(u),read(v);
    lj[u].push_back(v);
    lj[v].push_back(u);
  }
  dfs(1,0,a[1],0,1);
  write(les-ans);
}