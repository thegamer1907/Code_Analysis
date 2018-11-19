#include <bits/stdc++.h>

using namespace std;
#define ll long long
template<class T> void p(vector<T>& a){ for(int i = 0;i < a.size();i++) cout << a[i] << " "; cout << endl; }
#define mp make_pair
#define pb push_back
#define pii pair< int,int>
#define pll pair< ll,ll >
#define vi vector<int>
#define ss second
#define ff first
#define vii vector<pii>
#define vll vector<pll>
#define vl vector<ll>
#define vb vector<bool>
#define f(i,a,b) for(i = a;i < b;i++)
#define rf(i,a,b) for(i = a;i >= b;i--)

int main(){
	string s;
	int n,i;
	cin >> s >> n;
	bool f1 = false,f2 = false;
	f(i,0,n){
		string s1;
		cin >> s1;
		if(s1 == s){
			f1 = true;
			f2 = true;
		}
		else{
			if(s1[1] == s[0]) f1 = true;
			if(s1[0] == s[1]) f2 = true;
		}
	}
	if(f1&&f2) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
