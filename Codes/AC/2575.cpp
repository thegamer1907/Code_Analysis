#include<bits/stdc++.h>
using namespace std;
const int nmax=1e6+42,lim=1e7+42;
int n,a[nmax];
int occ[lim];
int m,tree[4*lim];
void go(int &num,int p)
{
if(num%p==0)
{
occ[p]++;
while(num%p==0)num=num/p;
}
}
void build(int node,int l,int r)
{
if(l==r){tree[node]=occ[l];return;}
int av=(l+r)/2;
build(node*2,l,av);
build(node*2+1,av+1,r);
tree[node]=tree[node*2]+tree[node*2+1];
}
int query(int node,int l,int r,int lq,int rq)
{
if(l==lq&&r==rq)return tree[node];
int av=(l+r)/2,ans=0;
if(lq<=av)ans=ans+query(node*2,l,av,lq,min(rq,av));
if(av<rq)ans=ans+query(node*2+1,av+1,r,max(lq,av+1),rq);
return ans;
}
vector<int> primes;
bool prime(int num)
{
for(int q=2;q*q<=num;q++)
    if(num%q==0)return 0;
return 1;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie();
cin>>n;
for(int i=2;i*i<=lim;i++)if(prime(i))primes.push_back(i);
int sz=primes.size();
for(int i=1;i<=n;i++)
{
cin>>a[i];
int x=a[i];
go(x,2);
for(int p=0;p<sz&&primes[p]*primes[p]<=x;p++)go(x,primes[p]);
if(x!=1)occ[x]++;
}
build(1,1,lim);
cin>>m;
int li,ri;
for(int i=1;i<=m;i++)
{
cin>>li>>ri;
li=min(li,lim+1);
ri=min(ri,lim);
if(li>ri)cout<<0<<endl;
else cout<<query(1,1,lim,li,ri)<<endl;
}
return 0;
}
//O(n*sqrt(lim)+m*log(lim))
