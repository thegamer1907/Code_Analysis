#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second

typedef long long int ll;
typedef vector< pair<int, int> > vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<long long int> vll;
typedef pair<int, int> pii;

const ll INF = 1e18;
const int inf = 1e9;
const int MOD = 1e9 + 7;
const int nax = 1000000 + 10;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	ll  n;
	cin>>n;
	ll i,j,k;
	ll a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	j=0;
	k=0;
	for(i=n/2;i<n;i++)
	{  
	 while(j<i&&a[j]==0)
	  j++;
	   if(a[i]<(2*a[j])||j==i)
	   continue;
	   else
	   {
	   	a[j]=-1;
	   	a[i]=0;
	   	j++;
	   	k++;
	   }
	}
	cout<<n-k;
}