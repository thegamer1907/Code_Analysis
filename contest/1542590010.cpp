#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define PI 3.1415926535897932384626
#define boost ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define MOD 1000000007
#define N 100101
int main() 
{
	boost;
	string ans;
	cin >> ans;
	ll n;
	cin >> n;
	vector<string> a;
	for(ll i=0;i<n;i++){
	    string x;
	    cin >> x;
	    a.pb(x);
	}
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        if(a[i][1]==ans[0] && a[j][0]==ans[1]){
	            cout <<"YES";
	            return 0;
	        }
	    }
	}
	
	for(int i=0;i<n;i++){
	    if(a[i]==ans){
	        cout << "YES";
	        return 0;
	    }
	}
	
	cout << "NO";
	return 0;
}
