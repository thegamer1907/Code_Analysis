#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
	int i,j,n;
	string str,s,s1,s2;
	cin>>str;
	cin>>n;
	vector<string> arr(n);
	map<string,int> mp;
	for(i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]=1;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			s1="";
			s1+=arr[i][1];
			s1+=arr[j][0];
			mp[s1]=1;
			s1="";
			s1+=arr[j][1];
			s1+=arr[i][0];
			mp[s1]=1;			
		}
	}
	if(mp[str]){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	return 0;
}
