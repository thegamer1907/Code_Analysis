/*input
5
1 1 1 1 1
3
1 2 3
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
	int n,m;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);

	scanf("%d", &m);
	int b[m];
	for(int i=0; i<m; i++)
		scanf("%d", &b[i]);

	sort(a, a+n);
	sort(b, b+m);
	int cnt=0;

	int i=0, j=0;
	while(i<n && j<m)
	{
		if(a[i]==b[j] || abs(a[i]-b[j])==1)
		{
			i++;
			j++;
			cnt++;
		}
		else if(a[i]>b[j])
			j++;
		else
			i++;
	}
	printf("%d", cnt);

}
