#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define mod 1000000007
#define mod2 998244353
#define MAXN 1000000000
#define v32 vector<int>
#define v64 vector<lli>
#define v1024 vector <vector <int>>
#define v4096 vector <vector <lli>>
#define vt vector
#define f(x, y, z) for (lli x = y; x < z; x++)
#define fd(x, y, z) for (lli x = y; x > z; x--)
#define lb lower_bound
#define ld long double
#define m64 map<lli,lli>
#define m32 map<int,int>
#define m64it map<lli,lli>::iterator
#define m32it map<int,int>::iterator
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ist insert
#define p_q priority_queue 
#define min_p_q priority_queue <int,vt <int>,greater <int>>
using namespace std;
lli tmod(lli x,lli m){return (x%m+m)%m;}//USE AT YOUR OWN RISK
int intersectiontype1(int l,int r,int ll,int rr)
{
    if(r<ll || rr<l)
       return 0;
    return 1;
}
struct node
{
    lli l,r,lazy=0,lazyval=0;
    lli sum=0;
};
void cst(int l,int r,int k,std::vector<node> &st,std::vector<lli> &h)
{
    st[k].l=l,st[k].r=r;
    if(l==r)
        { st[k].sum=h[l];   
         return;
        }
    cst(l,(l+r)/2,2*k+1,st,h);
    cst((l+r)/2+1,r,2*k+2,st,h);
    st[k].sum=st[2*k+1].sum+st[2*k+2].sum;    
}
void shift(int k,std::vector<node> &st)
{
   st[k].sum+=(st[k].r-st[k].l+1)*st[k].lazyval;
   if(st[k].l!=st[k].r)
   {st[2*k+1].lazyval+=st[k].lazyval;
   st[2*k+2].lazyval+=st[k].lazyval;
   st[2*k+1].lazy=st[2*k+1].lazy=1;
   st[2*k+2].lazy=st[2*k+2].lazy=1;}
   st[k].lazyval=0;
   st[k].lazy=0;      
}
lli query(int l,int r,int k,std::vector<node> &st)
{   
    if(st[k].lazy!=0)
       shift(k,st);
   int ll=st[k].l,rr=st[k].r,mid=(ll+rr)/2;
   if(ll>=l && rr<=r)
       return st[k].sum;
       lli ans=0;   
       if(intersectiontype1(ll,mid,l,r)==1)
          ans=query(l,r,2*k+1,st);
       if(intersectiontype1(1+mid,rr,l,r)==1)
          ans+=query(l,r,2*k+2,st);
          return ans;     
}

void update(int l,int r,lli x,int k,std::vector<node> &st)
{
    if(l>r)
        return;
   int ll=st[k].l,rr=st[k].r,mid=(ll+rr)/2;
   if(ll>=l && rr<=r)
         {st[k].lazyval+=x;
          st[k].lazy=1;      
             //shift(k,st);
         return;}
         if(st[k].lazy!=0)
           shift(k,st);
           if(st[k].l==st[k].r) return;
   if(intersectiontype1(ll,mid,l,r)==1)
      update(l,r,x,2*k+1,st);
   if(intersectiontype1(mid+1,rr,l,r)==1)
      update(l,r,x,2*k+2,st);
      if(st[2*k+1].lazy!=0)
       shift(2*k+1,st);
       if(st[2*k+2].lazy!=0)
       shift(2*k+2,st);
    st[k].sum=st[2*k+1].sum+st[2*k+2].sum;           
}
int main() 
{ 
  fastio;   
  lli n,m,k;cin>>n>>m>>k;
  v64 x(m);f(i,0,m){cin>>x[i];x[i]--;}
  vt <node> st(4*m);
  int ans=0;
  lli prev_page=x[0]/k,curr_page=0;
  cst(0,m-1,0,st,x);
  f(i,0,m)
  {
  	int initial=i,pos=i;
  	while(query(i,i,0,st)/k==query(initial,initial,0,st)/k)i++;
  	i--;
  	if(i<m)
    update(i,m-1,-(i-pos+1),0,st);
        ans++;
  }
  cout<<ans;
  return 0; 
}