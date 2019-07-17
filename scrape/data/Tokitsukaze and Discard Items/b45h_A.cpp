#include <bits/stdc++.h>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vll vector <ll>
#define vii vector <int>
#define vpii vector <pii>
#define vpll vector <pll>
#define ff first
#define ss second
#define matrix vector <vll>
#define all(v) v.begin(),v.end()
#define PQ priority_queue
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, m, k;
	cin >> n >> m >> k;
	ll special[m];
	for(int i = 0; i < m; i++) cin >> special[i];
	ll page = 1, op = 0,cnt = 0, diff = 0; 
	for(int i = 0; i < m; i++){
		if(special[i] - diff <= k*page){
			cnt++;
		}
		else{
			if(cnt > 0){
				op++;
				diff+=cnt;
				cnt = 0;
			}
			else{
			       	page++;
				ll lo = 1, hi = n/k + 1;
				while(lo <= hi){
					ll mid = (lo+hi)/2;
					if(special[i] - diff <= mid*k){
						page = mid;
						hi = mid - 1;
					}
					else lo = mid + 1;
				}
			}
			i--;
		}
	}
	if(cnt) op++;
	cout << op << "\n";
	return 0;
}