#include<cstdio>
#include<cstring>
#include<iostream>
#define N 110
using namespace std;
string t,s[N],st;
int n;
bool Find(string st){
	for(int i=0;i<st.size();i++){
		int j=0;
		while(j<t.size()&&i+j<st.size()){
			if(t[j]==st[i+j])j++;
			else break;
			if(j==t.size())return 1;
		}
	}
	return 0;
}
int main(){
	cin>>t;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		cin>>s[i];
		if(Find(s[i])){
			printf("YES\n");
			return 0;
		}
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			st=s[i]+s[j];
//			cout<<st<<'\n';
			if(Find(st)){
				printf("YES\n");
				return 0;
			}
		}
	printf("NO\n");
}