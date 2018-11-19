#include <iostream>
#include <string>
using namespace std;
main() {
	string s;
	cin>>s;
	int n;
	cin>>n;
	cin.ignore();
	string a[n+1];
	for (int i=1; i<=n; i++){
		cin>>a[i];
	}
	int kt=0;
	for (int i=1; i<=n; i++){
			for (int j=1; j<=n; j++){
				string kt1="";
				kt1=kt1+a[i];
				kt1=kt1+a[j];
				if ((int)kt1.find(s)!=-1) {
					kt=1;
					break;
				}
			}
			if (kt) break;
	}
	if (kt) cout<<"YES";
	else cout<<"NO";
}
