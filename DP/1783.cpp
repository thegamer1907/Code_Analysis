#include<bits/stdc++.h>
using namespace std;
int main (){
	string s;
	cin>>s;
	int x=s.find("AB");
	int y=s.find("BA");
	if((x!=-1&&s.find("BA",x+2)!=-1)||(y!=-1&&s.find("AB",y+2)!=-1))
		puts("YES");
	else puts("NO");
	return 0;
}