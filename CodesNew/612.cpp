#include <bits/stdc++.h>
using namespace std;

set<string> s1,s2;
int n,m,repe;
string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n>> m;
	for(int i = 0; i < n; i++){
		cin >> s;
		s1.insert(s);
	}
	for(int i = 0; i < m; i++){
		cin >> s;
		s2.insert(s);
		if(s1.find(s) != s1.end())repe++;
	}
	int count1 = repe - repe/2;
	int count2  = repe/2;
	//cout << s1.size()-count2 << " " << s2.size()-count1 << "\n";
	if(s1.size()-count2 > s2.size()-count1){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
	return 0;
}

