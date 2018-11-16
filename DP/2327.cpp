#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pub push_back
#define pob pop_back
#define ss second
#define ff first
ll i,a[111111],ans,q,j,k;
string s;
main (){
	cin>>s;
	for(i=0;i<s.size();i++){
		ans=s[i]-48;
		if(ans%8==0){
			cout<<"YES\n"<<ans;
			exit(0);
		}
	}
	for(i=0;i<s.size();i++){
		for(j=i+1;j<s.size();j++){
			ans=(s[i]-48)*10+s[j]-48;
			if(ans%8==0){
				cout<<"YES\n"<<ans;
				exit(0);
			}
		}
	}
	for(i=0;i<s.size();i++){
		for(j=i+1;j<s.size();j++){
			for(k=j+1;k<s.size();k++){
				ans=(s[i]-48)*100+(s[j]-48)*10+s[k]-48;
				if(ans%8==0) {
					cout<<"YES\n"<<ans;
					exit(0);
				}
			}
		}
	}
	cout<<"NO";
}