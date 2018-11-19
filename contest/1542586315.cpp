#include<iostream>
using namespace std;
int main()
{string s,d;
   int p;
   bool ok=false,ok1=false,ok2=false;
     cin>>s>>p;  
	for(int i=0;i<p;i++){
		cin>>d;
		if(d[0]==s[0] && d[1]==s[1]){
			ok=true;}
		if(d[0]==s[1] && d[1]==s[0]){
			ok=true;}
	    else if(d[0]==s[1]){
			ok1=true;}
		else if(d[1]==s[0]){
			ok2=true;}
		
		
		
	}
	if (ok || (ok1 && ok2)){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	
	return 0;
}