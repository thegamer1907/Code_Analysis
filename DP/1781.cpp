#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastio(){
	 ios_base::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int main() {
	fastio();
	ll flag=0,flag1=0;
	string s;
	cin>>s;
	ll l=s.length();
	for(int i=0;i<l-1;i++)
	{
	if(s[i]=='A'&&s[i+1]=='B'&&flag==0){
	flag=1;
	i++;
	continue;}
	
	if(s[i]=='B'&&s[i+1]=='A'&&flag1==0){
           i++;
	flag1=1;
	continue;}
	}
	if(!flag&&!flag1)
	cout<<"NO";
	else if(flag&&flag1)
	cout<<"YES";
	else
	{
		flag=0;flag1=0;
	for(int i=l-1;i>0;i--)
	{
	if(s[i]=='A'&&s[i-1]=='B'&&flag==0){
	flag=1;
	i--;
	continue;}
	
	if(s[i]=='B'&&s[i-1]=='A'&&flag1==0){
           i--;
	flag1=1;
	continue;}
	}
	if(flag&&flag1)
	cout<<"YES";
	else
	cout<<"NO";
	}
	
	
	return 0;
}