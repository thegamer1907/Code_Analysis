#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t=0;
	string s;
	cin>>s;
	
	for(int k=0;k<s.size();){
       char o=s[k];t=0;
	   while(o==s[k] && k<s.size()){
	   	   t++;k++;
	   	   if(t==7){cout<<"YES";return 0;}
	   }
	}
	
	cout<<"NO";

return 0;	
}
