#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> new_data_set; 
#define int long long
#define MOD 1000000007
#define loop(i,a,n) for(int i=a;i<n;i++)

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef pair<int, int> pt;
/*

//************FAST READ/WRITE*************
template<typename T = int>
inline T read() {
	T val = 0, sign = 1; char ch;
	for (ch = getchar(); ch < '0' || ch > '9'; ch = getchar())
		if (ch == '-') sign = -1;
	for (; ch >= '0' && ch <= '9'; ch = getchar())
		val = val * 10 + ch - '0';
	return sign * val;
}
*/
/*
***************************DSU PART*******************************
#define MAX 100010
int link[MAX], sz[MAX];


int findLink(int x) {
    while(x != link[x]) x = link[x];
    return x;
}
int isSameLink(int a, int b) {
    return findLink(a) == findLink(b);
}
void unite(int a, int b) {
    a = findLink(a);
    b = findLink(b);
    if(a == b) return;
    if(sz[a] < sz[b]) swap(a,b);
    sz[a] += sz[b];
    link[b] = a;
}
*/
/*
//************************Number theory**************************************
int power(int x, int y) {
  int ans = 1;

  while (y) {
    if (y & 1)
      ans = (ans * x) % MOD;

    y >>= 1;
    x = (x * x) % MOD;
  }

  return ans % MOD;
}

int mod_inverse(int a) {
  return power(a, MOD - 2);
}
*/

signed main() {
	fastio();	
	int n,k;
	cin>>n>>k;
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n,greater<int>());
	
	int temp=arr[k-1];
	int ans=k;
	if(temp==0)
	{
		for(int i=k-1;i>=0;i--)
		{
			if(arr[i]==0)
				ans--;
		}
		cout<<ans<<endl;
		return 0;
	}
	
	for(int i=k;i<n;i++)
	{
		if(arr[i]==temp)
			ans++;
		else 
			break;	
	}
	cout<<ans<<endl;
	return 0;
    
}
