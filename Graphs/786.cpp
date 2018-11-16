/*25.09.2018*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	int n,m;
	cin>>n>>m;
	string s;
	cin>>s;
	for(int i=1;i<=m;i++){
		for(int j=0;j<s.size();j++){
			if(s[j]=='B'&&s[j+1]=='G'){
				swap(s[j],s[j+1]);
				j++;
			}
		}
	}
	cout<<s;
	return 0;
}