#include <bits/stdc++.h>
using namespace std;

bool ch[26][2];
int main() {
	
	string s;
	cin>>s;
	int n;
	cin>>n;
	string x;
	for(int i=0;i<n;++i){
		cin>>x;
		if (x==s)
			return !printf("YES");			
		ch[x[0]-'a'][0]=true;
		ch[x[1]-'a'][1]=true;
	}
	if (ch[s[0]-'a'][1]&&ch[s[1]-'a'][0])
		puts("YES");
	else 
		puts("NO");
	return 0;
}