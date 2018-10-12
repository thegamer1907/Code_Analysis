/* ****shreyansh26**** */
#include <bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define	endl		'\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define ios         ios_base::sync_with_stdio(false);  cin.tie(0);	cout.tie(0);
#define N  100005

using namespace std;

bool isSubsequence(string b, string a) {
	int m = b.size();
	int n = a.size();

	int j = 0;
	for(int i=0; i<n&&j<m; i++)
		if(a[i] == b[j])
			j++;

	return (j==m);

}

int main() {
	ios
	
	string a, b;
	cin>>a>>b;
	int n = a.size();
	int arr[n];

	for(int i=0; i<n; i++)
		cin>>arr[i];
	int low=0, high=n;
	int mid = (low+high)/2;
	// cout<<n;
	if(!isSubsequence(b,a)) {
		cout<<"0\n";
		exit(0);
	}
	int ans = 0;
	while(high>=low) {
		string a2;
		a2 = a;
		for(int i=0; i<mid; i++) {
			a2[arr[i]-1] = '1';
		}
		if(isSubsequence(b, a2)) {
			low = mid+1;
			ans = mid;
		}
		else
			high = mid-1;
		mid = (low+high)/2;
	}
	cout<<ans<<"\n";
	return 0;
}