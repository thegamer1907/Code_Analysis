#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
	string p;
	cin >> p;
	
	int n;
	
	cin >> n;
	
	vector<int> com(30, 0);
	vector<int> fin(30, 0);
	
	bool ja = false;
	
	for(int i = 0; i < n; ++i){
		string a;
		cin >> a;
		if(a == p)ja = true;
		com[a[0] - 'a']++;
		fin[a[1] - 'a']++;
	}
	
	if(ja)cout << "YES\n";
	
	else if(com[p[1] - 'a'] != 0 && fin[p[0] - 'a'] != 0){
		cout << "YES\n";
	}
	else cout << "NO\n";	
	
	//system("pause");
	return 0;
}