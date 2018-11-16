#include<bits/stdc++.h>

using namespace std;


int main(){

	int n,t;
	string s;
	cin>>n>>t>>s;
	int cnt = 0;
	while(t--){
		int cnt = 0;
		for(int i = 0; i < n-1; i++){
			if(s[i]=='B' && s[i+1]=='G'){
				swap(s[i],s[i+1]);
				cnt++;
				i++;
			}
		}
		if(cnt == 0)break;
	}
	cout<<s;



	return 0;
}