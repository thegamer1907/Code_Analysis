#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define inf 1e9
#define pb push_back
#define mp make_pair
#define Int long long
#define fs first
#define sc second
#define pll pair<Int,Int>
#define pii pair<int,int>
#define piiii pair<pii, pii>
#define MAX 100005
#define LOGN 20
#define gcd __gcd
#define optimise_stuff ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
Int modpow(Int a,Int b,Int m){Int c=1;while(b){if(b&1)c=(c*a)%m;b/=2;a=(a*a)%m;}return c;}



int main(){

	optimise_stuff;

	string P, X[105];int n, i, j;

	cin>>P;

	cin>>n;

	for(i = 0; i < n; i++)
		cin>>X[i];

	for(i = 0; i < n ; i++){
		if(X[i][0] == P[0] && X[i][1] == P[1]){
			cout<<"YES\n";
			return 0;
		}
	}
	
	for(i = 0; i < n; i++){

		if(X[i][1] == P[0]){
			for(j = 0; j < n; j++){
				if(X[j][0] == P[1]){
					cout<<"YES\n";
					return 0;
				}
			}
		}

	}

	cout<<"NO\n";
	return 0;
}