#include<bits/stdc++.h>
 
typedef long long int ll;
typedef unsigned long long int ull;
 
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define full(a) a.begin(),a.end()
#define mem(a,x) memset(a,x,sizeof(a))
 
const int MAXN = 1e5+5;
const int MOD = 1e9+7;
 
using namespace std;

int main() {
	string s;
	cin >> s;
	ll arr[3]={0,0,0};
	for(int i=0;i<s.length();i++) {
		if(s[i]=='B') arr[0]++;
		else if(s[i]=='S') arr[1]++;
		else if(s[i]=='C') arr[2]++; 
	}
	vector<ll> a,available,price;
	for(int i=0;i<3;i++) if(arr[i]>0) a.pb(arr[i]);
	ll availableInput[3];
	for(int i=0;i<3;i++) cin >>availableInput[i];
	for(int i=0;i<3;++i) if(arr[i]>0) available.pb(availableInput[i]);

	ll ans = 0;
	ll mini = INT_MAX;
	for(int i=0;i<a.size();i++) {
		mini = min(mini , available[i]/a[i]);
	}
	ans+=mini;
	for(int i=0;i<a.size();i++) {
		available[i]-=(mini*a[i]);
	}
	ll priceInput[3];
	for(int i=0;i<3;i++) {
		cin >> priceInput[i];
		if(arr[i]>0) price.pb(priceInput[i]);
	}
	ll money;
	cin>>money;
	bool over = false;
	while(true) {
		bool allZero = true;
		for(int i=0;i<available.size();i++) {
			if(available[i]>0) allZero = false;
		}
		if(allZero) break;
		ll requiredSum = 0;
		for(int i=0;i<available.size();i++) {
			if(available[i]<=a[i]) {
				requiredSum+=((a[i]-available[i])*price[i]);
			}
		}
		if(requiredSum<=money) {
			money-=requiredSum;
			ans++;
		}
		else {
			over = true;
			break;
		}
		for(int i=0;i<available.size();i++) {
			if(available[i]<=a[i]) {
				available[i]+=(a[i]-available[i]);
			}
			available[i]-=a[i];
		}
	}
	if(over) {
		cout << ans << endl;
		return 0;
	}
	ll requiredSum = 0;
	for(int i=0;i<available.size();i++) {
		requiredSum+=(a[i]*price[i]);
	}
	ans+=(money/requiredSum);
	cout << ans << endl;
	return 0;
}