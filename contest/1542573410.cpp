#include<bits/stdc++.h>
using namespace std;

#define N 100010
#define fe first
#define se second



int main(){
	string s,x;
	int n;
	cin>>s;
	bool a=0,b=0;
	cin>>n;

	while(n--){
		cin>>x;
		if(s[0]==x[1]) a=1;
		if(s[1]==x[0]) b=1;
		if(s==x) a=1,b=1;
	}
	if(a&b) cout<<"YES";
	else cout<<"NO";
	return 0;
}
