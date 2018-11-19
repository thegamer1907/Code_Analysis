/*input
ah
1
ha
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,p,q;
	cin>>s;
	int n,f1=0,f2=0,f3=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p;
		if(f1==0 && s==p)f1=1;
		if(f2==0 && s[0]==p[1])f2=1;
		if(f3==0 && s[1]==p[0])f3=1;
	}
	if(f1==1 || f2+f3==2)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}