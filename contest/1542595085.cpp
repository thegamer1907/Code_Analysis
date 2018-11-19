/* In The Name Of God */
#include <bits/stdc++.h>

# define xx first
# define yy second
# define pb push_back
# define pp pop_back
# define eps 1e-9
# define err(x) cerr << #x << " ::   " << x << endl;

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vint;
string t[200];
int main(){
	ios_base::sync_with_stdio (0);
	string s;cin>>s;
	int n;cin>>n;
	for(int i=0 ; i<n ; i++){
		cin>>t[i];
		if(t[i]==s){
			cout<<"YES\n";
			return 0;
		}
	}
	for(int i=0 ; i<n ; i++)
		for(int j=0 ; j<n ; j++)if(t[i][1]==s[0] && t[j][0]==s[1]){
			cout<<"YES\n";
			return 0;
		}
	cout<<"NO\n";
	return 0;
}

