#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef long double ldb;

#define forw1(n) for(ll i=0; i<n; i++)
#define forw2(n) for(ll j=0; j<n; j++)
#define forw3(n) for(ll k=0; k<n; k++)
#define forn1(n) for(ll i=1; i<=n; i++)
#define forn2(n) for(ll j=1; j<=n; j++)
#define forn3(n) for(ll k=1; k<=n; k++)

#define PI 3.14159265359
#define dec(n) cout<<fixed<<setprecision(n)

int gcd (int a, int b){
	if (b == 0) return(a);
	a%= b;
	return(gcd(b, a));
}

/* My standard solution template  */

/*---------------------------------------------------------------------------------*/





int main(){

	int n,m ;
	cin >> n >> m;
	vector<int > v(n);
	int max = 0;

	forw1(n){
		cin >> v[i];
		if (v[i] > max){
			max = v[i];
		}
	}
	max = max + m;
	forw1(m){
		sort(v.begin(), v.end());
		v[0]++;
	}
	sort(v.begin(), v.end());


	cout << v[n-1] << " " << max;




}





