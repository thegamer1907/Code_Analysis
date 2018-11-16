#include <bits/stdc++.h>
#define f(n) for(int i=0;i<n;i++)
using namespace std;

int main() {
	// your code goes here
	int z=0,o=0,flag=0;
	string s;
	cin >> s;
	int len = s.length();
	f(len)
	{
		if((s[i]-'0')==0){
			z++;o=0;
		}
		else{
			o++;z=0;
		}
		if(z==7 || o==7){
			flag=1;
			break;
		}
	}
	
	(flag==1)?cout << "YES" :cout << "NO";
	return 0;
}