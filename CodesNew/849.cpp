#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	string a[n], b[m];
	set <string> s;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s.insert(a[i]);
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
		s.insert(b[i]);
	}
	if(n>m)cout<<"YES"<<endl;
	else
	if(n<m)cout<<"NO"<<endl;
	else{
		if(s.size()%2 == 0){
			cout<<"NO"<<endl;
		}else cout<<"YES"<<endl;
	}
	return 0;
}