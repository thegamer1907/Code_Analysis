#include<bits/stdc++.h>
using namespace std;

int main() {
	string a;
	string ww[105];
	string t[105];
	int n;
	cin>>a;
	cin>>n;
	int flag=0;
	for(int i=1;i<=n;i++) {
		cin>>ww[i];
		if(ww[i]==a) {
			flag=1;
		}
	}
	if(flag==1) {
		cout<<"YES"<<endl;
		return 0;
	}
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			if(ww[i][1]==a[0] && ww[j][0]==a[1]) {
				flag=1;
			}
		}
	}
	if(flag==1) {
		cout<<"YES"<<endl;
		return 0;
	}
	cout<<"NO"<<endl;
	return 0;
}