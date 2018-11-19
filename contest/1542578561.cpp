#include<bits/stdc++.h>
using namespace std;
bool vis[5000];
int n,k;
char str[5];
int main(){
	cin>>n>>k;
	bool flag=0;
	for(int i=1;i<=n;++i){
		int tmp=0;
		for(int j=1;j<=k;++j){
			tmp*=2;
			scanf("%s",str);
			tmp+=str[0]-'0';
		}

		vis[tmp]=1;
		for(int j=0;j<16;++j){
			if(!vis[j])continue;
			bool t=0;
			for(int a=0;a<=3;++a){
				if(((1<<a)&tmp)&& ((1<<a)&j) )t=1;
			}
			if(!t)flag=1;
		
		}
	
	}
	if(flag)cout<<"yes";
	else cout<<"NO";
}
