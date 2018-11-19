//Bismillahi-rahmani-rahim

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

typedef long long  ll;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
const int inf=1e9;

#define maxn 1000001
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#include <conio.h>
string s;
int n;
string a[209];
int main(){
	
	cin>>s;
	
	cin>>n;
	
	
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=n;j++){
			
			if( (s[0]==a[i][1] && s[1]==a[j][0]) || (s[0]==a[j][1] && s[1]==a[i][0]) || a[i]==s ) return cout << "YES",0;
		}
		
	}
	
	cout << "NO";
	
	return 0;
}

