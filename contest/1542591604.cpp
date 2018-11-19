#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
	map<string,int>mp;
	string tar ;cin>>tar;
	int n;cin>>n;
	vector<string> v(n);
	for(auto &x:v)cin>>x;
	for(int i=0;i<n;i++){
		mp[v[i]]=1;
		// cerr<<v[i]<<"******"<<endl;
		for(int j=0;j<n;j++){
			// cerr<<v[j]<<"-"<<endl;
			mp[v[j]]=1;
			string n1 ="";
			n1+=v[i][1];
			n1+=v[j][0];
			// cerr<<n1<<" ";
			mp[n1]=1;
			n1 ="";
			n1 +=v[j][1];
			n1 +=v[i][0];
			mp[n1]=1;
			// cerr<<n1<<endl;
			if(mp[tar])return cout<<"YES",0;
		}
	}
	cout<<"NO";
	return 0;
}