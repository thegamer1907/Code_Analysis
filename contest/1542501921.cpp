#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void fast(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
int main(){
	fast();
	bool k = false, k1 = false, k2 = false;
	string g("",2),b("",2);
	cin >> g;
	int o;
	cin >> o;
	for (int i = 0; i < o; i++){
		cin >> b;
		if (b == g){ k = true; }
		if (b[0] == g[1]){ k1 = true; }
		if (b[1] == g[0]){ k2 = true; }

	}
	if (k || (k1&&k2)){ cout << "YES"; }
	else
	{
		cout << "NO";
	}

	
	return 0;
}