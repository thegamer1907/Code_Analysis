//Gulani
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int n,k,ca=0,cb=0;
	cin>>n>>k;
	string s;
	cin>>s;
	int ans=0;
	int left=0;
	for(int i=0; i<n; i++){
		if(s[i]=='a')ca++;
		else cb++;
		if(min(ca,cb)>k){
			if(s[left++]=='a') ca--;
			else cb--;
		} else ans=max(ans,ca+cb);
	}
	cout<<ans<<endl;



}