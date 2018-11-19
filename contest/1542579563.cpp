#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
#define ll long long
#define rg register
#define db double
using namespace std;
int have1[26],have2[26];
int main(void)
{
	char a,b;
	cin>>a>>b;
	int n;
	cin>>n;
	int t=0;
	for(int i=1;i<=n;i++){
		char s,p;
		cin>>s>>p;
		if(s==a&&p==b)t=1;
		if(s==b&&p==a)t=1;
		have2[s-'a']=1,have1[p-'a']=1;
	}
	if(t==1){
		cout<<"YES";return 0;
	}
	if(have1[a-'a']&&have2[b-'a']) cout<<"YES";
	else cout<<"NO";
	return 0;
}
