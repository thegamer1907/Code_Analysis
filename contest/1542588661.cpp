#include<iostream>
#include<cstring>
using namespace std;

string s[105];
string cnt;

int main(){
	cin>>cnt;
	int n;	cin>>n;
	for(int i=0;i<n;i++)	cin>>s[i];
	for(int i=0;i<n;i++)	if(cnt==s[i]){
		cout<<"YES\n";
		return 0;
	}
	int a,b;
	a=b=0;
	for(int i=0;i<n;i++){
		if(cnt[1]==s[i][0])	a=1;
		if(cnt[0]==s[i][1])	b=1;
	}
	if(a==b&&a==1)	printf("YES\n");
	else	printf("NO\n");
	return 0;
}
