//    >File Name: 438A.cpp
//    > Author: Webwei

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string ss;
	cin >> ss;
	int n;
	cin >> n;
	string s;
	int flag1=0,flag2 =0;
	for(int i=0;i<n;i++){
		cin >> s;
		if(s==ss){
			cout<<"YES\n";
			return 0;
		}	
		if(s[0]==ss[1])	flag1=1;
		if(s[1]==ss[0])	flag2=1;
	}
	if(flag1==1&&flag2==1)	cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}
