#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	char s[10], a, b;
	bool ma[300] {0}, mb[300] {0};
	int n;
	cin >> s >> n;
	while(n--){
		cin >> a >> b;
		if(s[0]==a && s[1]==b){
			cout << "YES";
			return 0;
		}
		ma[a] = true;
		mb[b] = true;
	}
	if(ma[s[1]] && mb[s[0]])
		cout << "YES";
	else
		cout << "NO";
	
	return 0;
}
