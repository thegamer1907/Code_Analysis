/*input
5
1 0 0 1 0
*/
#include <bits/stdc++.h>
using namespace std;

#define pl(a,n) for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pl2(a,n,m) for(int i=0; i<n; i++){for(int j=0; j<m; j++)cout<<a[i][j]<<" ";cout<<endl;}
#define pc1(x) cout<<x<<" ";
#define pc2(x,y) cout<<x<<" "<<y<<" "<<endl;
#define pc3(x,y,z) cout<<x<<" "<<y<<" "<<z<<" "<<endl;
#define pc4(w,x,y,z) cout<<w<<" "<<x<<" "<<y<<" "<<z<<" "<<endl;
#define pce(x) cout<<x<<endl;
#define ps0() cout<<endl;
#define ps1(x) cout<<#x<<" ";
#define ps2(x,y) cout<<#x<<" "<<y<<" "<<endl;
#define ps3(x,y,z) cout<<#x<<" "<<y<<" "<<z<<" "<<endl;
#define ps4(w,x,y,z) cout<<#w<<" "<<x<<" "#y<<" "<<z<<" "<<endl;
#define pse(x) cout<<#x<<endl;
#define GET_MACRO(_0, _1, _2, _3, _4, NAME, ...) NAME
#define GET_MACRO1(_1, _2, _3, _4, NAME, ...) NAME
#define ps(...) \
		do{if (DEBUG) GET_MACRO(_0, ##__VA_ARGS__, ps4, ps3, ps2, ps1, ps0)(__VA_ARGS__)} while(0);
#define pc(...) \
 		do{if (DEBUG) GET_MACRO1(__VA_ARGS__, pc4, pc3, pc2, pc1)(__VA_ARGS__)} while(0);

#define pb push_back
#define mp make_pair
#define sd(x) scanf("%d",&x);
#define sll(x) scanf("%I64d",&x);
#define F first
#define S second
 		

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;		

#define MOD 1000000007
#define e 2.7183

#define DEBUG 1

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	int t;

	for(int i=0; i<n; i++)
	{
		scanf("%d", &t);
		if(t==0)
			a[i] = 1;
		else
			a[i] = -1;
	}

	int max_sum=INT_MIN;
	int cur_sum=0;
	int s=0;
	int start=0, end=-1;


	for(int i=0; i<n; i++)
	{
		if(cur_sum+a[i] > a[i])
		{
			cur_sum+=a[i];
		}
		else
		{
			cur_sum = a[i];
			s = i;
		}
		if(cur_sum >= max_sum)
		{
			max_sum = cur_sum;
			start=s;
			end = i;
		}
	}

	// cout<<start<<" ";
	// cout<<end<<" ";

	int cnt=0;
	for(int i=0; i<start; i++)
		if(a[i]==-1)
			cnt++;

	for(int i=start; i<=end; i++)
		if(a[i]==1)
			cnt++;

	for(int i=end+1; i<n; i++)
		if(a[i]==-1)
			cnt++;

	printf("%d", cnt);
}
