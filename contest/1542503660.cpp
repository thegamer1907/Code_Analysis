#include <bits/stdc++.h>

#define ll long long 
#define mod 1000000007
using namespace std;


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string s;
	cin>>s;
	int n; cin>>n; 
	string a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++){
		
		bool ok=false;
		for(int j=0; j<n; j++){
			string t=a[i]+a[j];
			if (t.find(s)!=string::npos){
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
}