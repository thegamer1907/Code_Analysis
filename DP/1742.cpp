#include <bits/stdc++.h>

using namespace std;

string get_answer(string s){
	int i,l=s.length();
	for(i=0;i<l-1;i++){
		if(s[i]=='A' and s[i+1]=='B'){
			i=i+2;
			while(i<l-1){
				if(s[i]=='B' and s[i+1]=='A')
					return "YES";
				i++;
			}
		}
	}
	
	for(i=0;i<l-1;i++){
		if(s[i]=='B' and s[i+1]=='A'){
			i=i+2;
			while(i<l-1){
				if(s[i]=='A' and s[i+1]=='B')
					return "YES";
				i++;
			}
		}
	}
return "NO";
}

int main()
{
	string s;
	cin >> s;
	cout << get_answer(s) << endl;
}