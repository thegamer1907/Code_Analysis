#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define int long long
#define ieps (int) 1e6
#define eps (int) 1e9
#define pii pair<int,int>

int n;

string s;

int32_t main(){
	cin>>s;
	cin>>n;
	vector<string> v(n);
	for(int i = 0;i<n;i++){
		cin>>v[i];
	}
	bool iscoint = false;
	for(int i = 0;i<n;i++)
		for(int j = 0;j<n;j++){
			string  p = v[i];
			p+=v[j];
			for(int i = 0;i<p.size() - 1;i++){
				if(p[i] == s[0] && p[i+1] == s[1]){
					iscoint  = true;
					break;
				}
			}
		}
		if(iscoint) cout<<"YES";
		else cout<<"NO"<<endl;
}