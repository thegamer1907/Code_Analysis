#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
	cin >> n;
	int x,y,z;
	int X=0,Y=0,Z=0;

	for(int i=0;i<n;i++){
		cin >> x >> y >> z;
		X+=x;
		Y+=y;
		Z+=y;
	}

	if(X==0 && Y==0 && Z==0)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}