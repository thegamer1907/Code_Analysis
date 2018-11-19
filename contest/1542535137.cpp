#include<bits/stdc++.h>
using namespace std;
#define ll long long
char c1,c2,x1,x2;
bool vis1[27],vis2[27];
int n; 
int main(){
	memset(vis1,0,sizeof(vis1));
	memset(vis2,0,sizeof(vis2));
	cin>>x1>>x2;
	cin>>n;
	bool p=0;
	for(int i=1; i<=n; i++){
		cin>>c1>>c2;
		if(c1==x1 && c2==x2) p=1;
		vis1[c1-'a']=1;
		vis2[c2-'a']=1;
	}
	if(vis2[x1-'a'] && vis1[x2-'a']) p=1;
	if(p) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
} 