#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int z=0;
	int y=s.size();
	for(int i=0;i<y-6;i++){
		int ans=0;
		for(int j=i+1;j<=i+6;j++){
			if(s[i]==s[j]){
				ans++;
			}
		}
		if(ans==6){
			cout<<"YES";
			exit(0);
		}
	}
	cout<<"NO";
}
