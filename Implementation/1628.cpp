#include<iostream>
#include<string>
using namespace std;
int cnt;
int main(){
	string s;cin>>s;int x=s.find("1111111"),y=s.find("0000000");
	
	
	
	if(x>=0 || y>=0)cout<<"YES";
	else cout<<"NO";
	
	
	
	return 0;
}
