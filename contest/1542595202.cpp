#include<bits/stdc++.h>
#define int long long
using namespace std;
typedef long long ll;
typedef pair<int,int> PI;
string wd[110];
main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string str;
	int n;
	cin>>str>>n;
	bool ok=false;
	for(int i=0;i<n;i++){
		cin>>wd[i];
		if(wd[i]==str) ok=true;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(wd[i][1]==str[0] && wd[j][0]==str[1]) ok=true;
		}
	}
	if(ok) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}