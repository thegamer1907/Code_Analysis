#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	set<string> polland, enemy;
	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		polland.insert(s);
	}
	for(int i=0; i<m; i++){
		string s;
		cin >> s;
		enemy.insert(s);
	}
	int common = 0;
	set<string> :: iterator it, it1;
	for(it = polland.begin(); it!=polland.end(); it++){
		it1 = enemy.find(*it);
		if(it1!=enemy.end())
			common++;
	}
	int p = polland.size() - common, e = enemy.size() - common;
	if(p>e)
		cout << "YES";
	else if(p<e)
		cout << "NO";
	else{
		if(common%2==0){
			cout << "NO";
		}
		else
			cout << "YES";
	}
	return 0;
}
