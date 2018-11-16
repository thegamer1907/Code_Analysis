#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define all(v) v.begin(),v.end()
#define Max 1000001
using namespace std;
int main(){
	string s;
	cin>>s;
	int cnt =1;
	char ch = s[0];
	for(int i=1; i<s.size();i++){
		if(s[i]!=ch){
			ch=s[i];
			cnt=1;
		}
		else{
			cnt++;
			if(cnt==7){
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;
}