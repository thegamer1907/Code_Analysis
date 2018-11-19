#include<bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<int,int>ii;
typedef pair<int,ii> iii;

bool can[35][2];

int main(){
	string ans;cin>>ans;
	int n;cin>>n;
	vector<string>ls;
	
	bool can=false;
	
	for(int i = 0;i<n;i++){
		string a;cin>>a;
		for(int j = 0;j<i;j++){
			string nx=a+ls[j];
			if(nx.find(ans)!=-1)can=true;
			nx=ls[j]+a;
			if(nx.find(ans)!=-1)can=true;
		}
		string nx=a+a;
		if(nx.find(ans)!=-1)can=true;
		ls.pb(a);
	}
	
	if(can)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}