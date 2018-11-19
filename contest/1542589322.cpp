#include<bits/stdc++.h>
using namespace std;

int main()
{
	char a[1][3];
	cin>>a[0];
	int n;
	cin>>n;
	char b[n][3];
	for(int i=0; i<n; ++i) cin >> b[i];
	int i=0;
	int j=0;
	for(i=0; i<n; ++i) {
		if(b[i][1] == a[0][0]) {
			for(j=0; j<n; ++j) {
//				if(i==j) continue;
				if(a[0][1]==b[j][0]) {
					cout<<"YES\n";
					return 0;
				}
			}
		}
		else if(b[i][0]==a[0][0]){
			if(b[i][1]==a[0][1]) {
				cout<<"YES\n";
				return 0;
			}
		}
	}
	cout<<"NO\n";

	return 0;
}

