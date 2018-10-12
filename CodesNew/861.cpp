#include<bits/stdc++.h>
using namespace std;
int main(){
	int p,e;
	cin>>p>>e;
	set<string>ws;
	int cs=0;
	for(int i=0;i<p+e;i++){
		string s;
		cin>>s;
		if(ws.insert(s).second==false){
			cs++;	
		}
	}p-=cs;e-=cs;
	int temp=0;
	if(cs%2==0){
		if(p>e)
			temp=1;
	}
	else{
		p++;
		if(p>e)
			temp=1;
	}
	if(temp==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
	
}
