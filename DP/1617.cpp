#include<bits/stdc++.h>
#ifdef NJUDGE
#include "igba.h"
#endif

using namespace std;

int main(){
	ios_base::sync_with_stdio(false),cin.tie(nullptr);
	string s;
	cin >> s;
	s += '?';
	bool mark[s.size()+10];
	memset(mark,false,sizeof mark);
	
	bool ok1 = false,ok2 = false,any = false;
	for(int i = 0;i < s.size()-1;i++){
		if(mark[i]) continue;
		if((s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'A' && !any) || (s[i] == 'B' && s[i+1] == 'A' && s[i+2] == 'B' && !any)){
			any = true,mark[i] = true,mark[i+1] = true,mark[i+2] = true;
			continue;
		}
		if(s[i] == 'A' && s[i+1] == 'B') ok1 = true,mark[i] = mark[i+1] = true;
		if(s[i] == 'B' && s[i+1] == 'A') ok2 = true,mark[i] = mark[i+1] = true;
	}
	cout << ((ok1 && ok2) || (any && ok1) || (any && ok2) ? "YES" : "NO") << endl;
}
