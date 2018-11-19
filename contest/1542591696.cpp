#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
const ll mod = 1e9+7;
const ll sz = 2000004;
string s, a[102];
int n;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>s>>n;
	bool one=0, two=0;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		if(s==a[i]){
			cout<<"YES";
			exit(0);
			}
		if(a[i][1]==s[0]) one = 1;
		if(a[i][0]==s[1]) two = 1;
		}
	if(one and two) cout<<"YES";
	else cout<<"NO";
}
