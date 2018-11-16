#include "bits/stdc++.h"
 
using namespace std;
 
#define TEST(T) int T; sci(T) ; while(T--)
#define ll long long
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define ins insert
#define pii pair<int,int>
#define all(V) V.begin(),V.end()
#define clr(V,val) memset(V,val,sizeof(V))
#define rep(X,A,N,C) for(X=A;X<=N;X+=C)
#define rept(X,A,N,C) for(X=A;X>=N;X-=C)
#define sci(X) scanf("%d",&X)
#define scl(X) scanf("%lld",&X)
#define scs(X) scanf("%s",&X)
#define pfi(X) printf("%d",X)
#define pfl(X) printf("%lld",X)
#define pfs(X) printf("%s",X)
#define sp printf(" ")
#define nxt printf("\n")
#define endl "\n";
 
const int MX=1e6 + 5;
 
const int INF=1e9;
 
const int M=1000000007;

string toBin(ll a) {
 string res = "";
 while (a) {
  res += char((a & 1) + '0');
  a >>= 1;
 }
 reverse(res.begin(), res.end());
 return res;
}

int binarySearch(int arr[], int l, int r, int x)
{
  while (l <= r)
  {
    int m = l + (r-l)/2;
    if (arr[m] == x) 
        return m;  
    if (arr[m] < x) 
        l = m + 1; 
    else
         r = m - 1; 
  }
  return -1; 
}

bool IsPrime(int number){

    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;

}

int GCD(int A, int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}

int modInverse(int a, int m)
{
    int m0 = m, t, q;
    int x0 = 0, x1 = 1;
 
    if (m == 1)
      return 0;
 
    while (a > 1)
    {
        // q is quotient
        q = a / m;
 
        t = m;
 
        // m is remainder now, process same as
        // Euclid's algo
        m = a % m, a = t;
 
        t = x0;
 
        x0 = x1 - q * x0;
 
        x1 = t;
    }
 
    // Make x1 positive
    if (x1 < 0)
       x1 += m0;
 
    return x1;
}
int ncr(int n, int k)
{
  // Base Cases
  if (k==0 || k==n)
    return 1;
 
  // Recur
  return  ncr(n-1, k-1) + ncr(n-1, k);
}

vector <int> tree(1000000,0);
vector <int> lazy(1000000,0);


int getsum(int start,int end,int l,int r,int node)
{
	if(lazy[node]!=0)
	{
		tree[node]+=(end-start+1)*lazy[node];
		if(start!=end)
		{
			lazy[2*node+1]+=lazy[node];
			lazy[2*node+2]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(l>end||r<start)
	{
		return 0;
	}
	if(l<=start&&end<=r)
	{
		return tree[node];
	}
	int mid=start+(end-start)/2;
	return (getsum(start,mid,l,r,2*node+1)+getsum(mid+1,end,l,r,2*node+2));
	
}

void updated(int start,int end,int l,int r,int node,int dif)
{
	if(lazy[node]!=0)
	{
		tree[node]+=(end-start+1)*lazy[node];
		if(start!=end)
		{
			lazy[2*node+1]+=lazy[node];
			lazy[2*node+2]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(l>end||r<start)
	{
		return ;
	}
	if(l<=start&&end<=r)
	{
		tree[node]+=(end-start+1)*dif;
		if(start!=end)
		{
			lazy[2*node+1]+=dif;
			lazy[2*node+2]+=dif;
		}
		return ;
	}
	if(start!=end)
	{
	int mid=start+(end-start)/2;
	updated(start,mid,l,r,2*node+1,dif);
	updated(mid+1,end,l,r,2*node+2,dif);
	tree[node]=tree[2*node+1]+tree[2*node+2];
	}
	return ;
	
}

int buildtree(int ar[],int start,int end,int n,int node)
{
	if(start==end)
	{
		tree[node]=ar[start];
		return tree[node];
	}
	int mid=start+(end-start)/2;
	tree[node]=buildtree(ar,start,mid,n,2*node+1)+buildtree(ar,mid+1,end,n,2*node+2);
	return tree[node];
}

void printarray(int start,int end,int node)
{
	if(lazy[node]!=0)
	{
		tree[node]+=(end-start+1)*lazy[node];
		if(start!=end)
		{
			lazy[2*node+1]+=lazy[node];
			lazy[2*node+2]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(start==end)
	{
		cout<<tree[node]<<' ';
		return ;
	}
	int mid=start+(end-start)/2;
	printarray(start,mid,2*node+1);
	printarray(mid+1,end,2*node+2);
}
vector <int> adj[100005];
vector <int> flag(20000,0);
vector <int> vis(100005,0);
int mx;

void dfs(int s)
{
	mx++;
	vis[s]=1;
	for(int i=0;i<adj[s].size();i++)
	{
		flag[adj[s][i]]=flag[s]+1;
		if(vis[adj[s][i]]==0)
		{
			dfs(adj[s][i]);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector <int> br(n+1);
	for(int i=1;i<=n;i++)
	{
		int v;
		cin>>v;
		br[i]=v;
		if(v==-1)
			continue;
		adj[v].pb(i);
	}
	int m=0;
	for(int i=1;i<=n;i++)
	{
		if(br[i]!=-1)
			continue;
		flag[i]=1;
		mx=0;
		dfs(i);
		m=max(m,mx);
		fill(vis.begin(),vis.begin()+n+5,0);
	}
	cout<<(*max_element(flag.begin(),flag.begin()+n+5));
	return 0;
}
