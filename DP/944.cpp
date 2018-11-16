#include<bits/stdc++.h>
#define ll unsigned long long
#define F first
#define S second
#define pb push_back
#define maxn 100009
#define mod 1000000007
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define INF 10000000000000000ll
#define INM -INF
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()

using namespace std;

int a[4005];

int main(){
	
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int x;
		cin >> x;
		a[i] = a[i - 1];
		if(x == 1)
			a[i]++;
	}
	int mx = -1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			mx = max(mx, a[n] - a[i] + a[j - 1] + (i - j + 1 - a[i] + a[j - 1]));
		}
	}
	cout << mx;
}












































