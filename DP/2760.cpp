#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define inf 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define N 1000007 // 10e6 + 7


int main(int argc, char const *argv[]){
	int n;
	cin >> n;
	int ans=0;
	while(n>=100){
		n-=100;
		ans++;
	}
	while(n>=20){
		n-=20;
		ans++;
	}
	while(n>=10){
		n-=10;
		ans++;
	}
	while(n>=5){
		n-=5;
		ans++;
	}
	cout << ans+n << endl;

	return 0;
}