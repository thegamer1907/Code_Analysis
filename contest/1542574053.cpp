#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
	string a;
	cin>>a;
	int n;
	cin>>n;
	vector<string> v(n);
	for(int i = 0; i < n; ++i){
		cin>>v[i];
	}
	
	bool esta = false;
	for(int i = 0; i < n; ++i){
		string c = v[i];
		if(c == a){
			cout<<"YES\n";
			return 0;
		}
		if(c[1] == a[0]){
			for(int j = 0; j < n; ++j){
				string d = v[j];
				if(d[0] == a[1]){
					cout<<"YES\n";
					return 0;
				}
			}
		}
	}
	cout<<"NO\n";
	//system("pause");
}