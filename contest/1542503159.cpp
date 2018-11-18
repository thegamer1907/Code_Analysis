#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define mp make_pair
#define bp push_back
const int mx=1e5+10;
using namespace std;
string s[1001];
main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
string a;
int n;
cin>>a>>n;
for(int i=0;i<n;i++){
	cin>>s[i];
}
if(n==1){
	if(s[0][0]==a[0]&&s[0][1]==a[1]){
		cout<<"YES"<<endl;
	}
	else if(s[0][0]==a[1]&&s[0][1]==a[0]){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
bool f1=0,f2=0;
for(int i=0;i<n;i++){
	if(s[i]==a){
		cout<<"YES"<<endl;
		return 0;
	}
}
for(int i=0;i<n;i++){
	if(s[i][1]==a[0]){
		f1=1;
		break;
	}
}
for(int i=0;i<n;i++){
	if(s[i][0]==a[1]){
		f2=1;
		break;
	}
}
if(f1&&f2){
	cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;
}
