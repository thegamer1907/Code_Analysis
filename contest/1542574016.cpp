#include <bits/stdc++.h>
using namespace std;
string q[100001];
map<string,bool>m;
vector<int>v;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	string b;
	cin>>n>>k;
	string p="",o="";
	for(int i=1;i<=k;i++){
		p+="0";
		o+="1";
	}
	for(int i=1;i<=n;i++){
		string s="";
		for(int j=1;j<=k;j++){
			cin>>b;
			s+=b;
		}
		if(s==p){
			cout<<"YES";
			return 0;
		}
		m[s]=1;
		q[i]=s;
	}
	for(int i=1;i<=n;i++){
		string z=p;
		for(int j=0;j<k;j++){
			if(q[i][j]=='1'){
				v.push_back(j);
			}
		}
		while(z!=o){
			//cout<<z<<endl;
			int u=k-1;
			while(z[u]=='1'){
				z[u]='0';
				u--;
			}
			z[u]='1';
			bool y=0;
			for(int x=0;x<v.size();x++){
				if(z[v[x]]=='1'){
					y=1;
					break;
				}
			}
			if(!y){
				if(m[z]){
					cout<<"YES";
					return 0;
				}
			}
		}
		v.clear();
	}
	cout<<"NO";
	return 0;
}