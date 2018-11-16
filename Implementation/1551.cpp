# include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	char ch = '2';
	int cnt = 0;
	int i;
	for (i = 0; i < s.size(); i ++){
		if(s[i] == ch)
			cnt ++;
		else cnt = 0, ch = s[i];
		if( cnt == 6)
			break;
	}
	if( i < s.size() )
		puts("YES");
	else puts("NO");

	return 0;	
}
