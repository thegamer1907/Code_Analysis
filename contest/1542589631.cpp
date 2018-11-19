#include <bits/stdc++.h>
using namespace std;

int main(){
	int a=0,b=0,a1,b1,n;
	string s1,s;
	cin>>s1;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>s;
		if(s[1]==s1[0])	
			a=1;
		
		if(s1[1]==s[0])
			b=1;	
		if(s==s1 || s[0]==s1[1] && s[1]==s1[0]){
			cout<<"YES"<<endl;
			return 0;
		}
			
	}
	if(a*b==0  )
		cout<<"NO";
		else
		cout<<"YES";
}