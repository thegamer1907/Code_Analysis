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

	int h, s, m, t1, t2, t;
	cin>>h>>m>>s>>t1>>t2;
	t1 = (t1*5)%60;
	t2 = (t2*5)%60;
	h = (h*5)%60;

	h = (h + (m != 0 || s != 0));

	if(t1 == t2){
		cout<<"YES\n";
		return 0;
	}

	if(t1 > t2){
		t1 ^= t2;
		t2 ^= t1;
		t1 ^= t2;
	}

	t = t1;
	while(1){

		t1++;
		t1%=60;
		
		if(t1 == h || t1 == s)
			break;

		if(((((t1 + 59)%60) == m) && (s != 0)) || (t1 == m && (s == 0)))
			break;

		if(t1 == t2){
			cout<<"YES\n";
			return 0;
		}

	}

	t1 = t;

	while(1){

		t1--;
		t1= (t1 + 60)%60;
		if(t1 == h || t1 == m || t1 == s)
			break;

		if(t1 == t2){
			cout<<"YES\n";
			return 0;
		}

	}

	cout<<"NO\n";
	return 0;
}