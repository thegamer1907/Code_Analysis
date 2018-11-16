#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,c=1;
	string s;
	cin>>s;
	
for(i=1;i<s.length();++i){
	
	if(s[i]==s[i-1]){
		
		c++;
		
		if(c==7){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	else{
	c=1;	
	}
	
}

cout<<"NO";	
return 0;
	
	
}
