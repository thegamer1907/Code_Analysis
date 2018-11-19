#include <bits/stdc++.h>
using namespace std;
set<string>m;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	string a;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		string s="";
		for(int j=1;j<=k;j++){
			cin>>a;
			s+=a;
		}
		m.insert(s);
	}
	for(set<string>::iterator i=m.begin();i!=m.end();i++){
		for(set<string>::iterator j=m.begin();j!=m.end();j++){
			bool b=0;
			string x=*i,y=*j;
	//		cout<<x<<" "<<y<<endl;
			for(int q=0;q<k;q++){
				if(x[q]=='1' && y[q]=='1'){
					b=1;
					break;
				}
			}
			if(!b){
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
	return 0;
}