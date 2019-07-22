#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
ll mod=1e9+7;
#define PI 3.1415926535897932385
#define INF 100000000000000000ll
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include <string>
string char_to_str(char c){string tem(1,c);return tem;}
 
typedef pair<long long, long long> ii;
#define S second
#define F first
ll max(ll a,ll b){if(a>b){return a;}return b;}
ll min(ll a,ll b){if(a<b){return a;}return b;}
// string to integer stoi() Remember: it takes string not character
// string to long long stoll()
// string.substr(position,length);
// integer to string to_string();
 
// To compile--> g++ -std=c++0x -o output one.cpp
// To run--> ./output
int main() 
{
	fastio;
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	ll n, m, k;
	cin>>n>>m>>k;
	ll a[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>a[i];
		a[i]--;
	}

	ll page=0;
	ll shift=0;
	ll ans=0;
	ll tot_shift=0;
	int i, j;
	for (i = 0; i < m; ++i)
	{
		page = (a[i]-tot_shift)/k;
		if(i==m-1){
			ans++;
			break;
		}
		for (j = i; j < m; ++j)
		{
			ll t1 = (a[j]-tot_shift)/k;
			if(page==t1){
				shift++;
			}
			else{
				ans++;
				i=j-1;
				tot_shift=shift;
				break;
			}
		}
	}
	cout<<ans;

    return 0;
}