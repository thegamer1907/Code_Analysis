//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n>>m;
	vector<string> a,b;
	vector<string> c(n+m);
	for(i=0;i<n;i++){
		string p;
		cin>>p;
		a.push_back(p);
	}
	
	for(i=0;i<m;i++){
		string s;
		cin>>s;
		b.push_back(s);
	}
	
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
	vector<string>::iterator it = set_intersection(a.begin(),a.end(),b.begin(),b.end(),c.begin());
	c.resize(it-c.begin());
	
	//cout<<c.size();
	
	if(c.size() %2==0){
		if(a.size() - c.size() > b.size() - c.size()) cout<<"YES\n";
		else cout<<"NO\n";
	}
	else{
		if(a.size() - c.size() < b.size() - c.size()) cout<<"NO\n";
		else cout<<"YES\n";
	}
	
    return 0;
}
