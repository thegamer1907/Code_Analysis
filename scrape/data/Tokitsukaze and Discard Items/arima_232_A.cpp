#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define ios std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fill(x,v) memset(x,v,sizeof(x))
const ll mod =1000000007;

//--------dsu---------- 
vector<int> volume(1000000);
vector<int> parent(1000000);

void initialise_dsu() 
{
	for (int i=0; i<volume.size(); i++)volume[i]=1;
	for (int i=0; i<parent.size(); i++)parent[i]=i;
}

int find_par(int v) 
{
    return (v==parent[v]?v:parent[v]=find_par(parent[v]));
}

void union_sets(int a,int b) 
{
	a=find_par(a);
	b=find_par(b);
	if (a!=b) 
	{
		if (volume[a]<volume[b])swap(a,b);
		parent[b]=a;
		volume[a]+=volume[b];
	}
}

int power(int x, unsigned int y, int p)
{
    int res = 1;      
 
    x = x % p;   
               
 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
 
        y = y>>1; 
        x = (x*x) % p;  
    }
    return res;
}
//---------hack__D__code----------
//11 7 3
//2 3 4 5 6 7 11


int main()
{
   ios;
   unsigned long long n, m, k, kk=0;cin>>n>>m>>k;
   vector<unsigned long long>arr(m);
   for(unsigned long long i=0; i<m; i++)cin>>arr[i];
   unsigned long long i=0,save=0,count=0;
   sort(arr.begin(), arr.end());
   kk=k;
   while(i<m)
   {
   	if(arr[i]<=k)
   	{
   	 count++;i++;
    }
	else if(arr[i]>k&&arr[i]<=k+count)
	{
	  k=k+count;count=0;save++;	
	}
	else
	{
		if(count)save++;
		k=k+kk+count;
		if(arr[i]>k)
		k=k+((arr[i]-k)/kk)*kk;
		count=0;
	}
   }
   if(count)save++;
   cout<<save<<endl;
}