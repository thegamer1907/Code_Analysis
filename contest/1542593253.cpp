#include<bits/stdc++.h>
#define int long long
using namespace std;
char c1,c2,s1,s2;
bool f1,f2;
int n;
signed main(){
	cin>>c1>>c2>>n;
	for (int i=1;i<=n;i++){
		cin>>s1>>s2;if (s1==c1&&s2==c2){cout<<"YES"<<endl;return 0;}
		if (s1==c2)f1=true;if (s2==c1)f2=true;
	}if (f1&&f2)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
}