#include <bits/stdc++.h>

using namespace std;

int main(){
	char s1[3],s2[3];
	int i,j,n,t=0,f=0;
	cin>>s1>>n;
	while(n--){
		cin>>s2;
		if(!t&&s1[1]==s2[0])
			t = 1;
		if(!f&&s1[0]==s2[1])
			f = 1;
		if(s1[0]==s2[0]&&s1[1]==s2[1])
			t = 1, f = 1;
		
	}
	if(t&&f) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;	
}
	     		  		  						  	 	  			