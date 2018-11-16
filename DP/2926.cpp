#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<ll,ll> pp;

#define sz(v) ((v).size())
#define vc(r) vector< r >
#define mk(a,b) make_pair(a,b)
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define tr(v,it) for(typeof((v).begin()) it = (v).begin(); it != (v).end() ; it++)
#define vpresent(v,x) ((v).find(x) != (v).end())
#define present(v,x) (find(all(v),x) != (v).end())

int main(){
	ll n,k;
	cin >> n >> k;

	vl a(n),b(k);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	

	for (int i = 0; i < k; ++i)
	{
		cin >> b[i];
	}
	sort(all(b));
	reverse(all(b));

	ll j = 0;
	for (int i = 0; i < n; ++i)
	{
		if(a[i] == 0){
			a[i] = b[j];
			j++;
		}
	}

	bool flag  =0;
	for (int i = 1; i < n; ++i)
	{
		if(a[i] < a[i-1]){
			flag = 1;
			break;
		}
	}

	if(flag) cout << "Yes\n";
	else cout << "No\n";

	return 0;
}