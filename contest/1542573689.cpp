#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[22];
	char b[111];
	while(cin>>a)
	{
		int n;
		cin>>n;
		int i,j;
		int f1=0,f2=0;
		for(i=1;i<=n;i++)
		{
			cin>>b;
			if(b[1]==a[0])f1=1;
			if(b[0]==a[1])f2=1;
			if(!strcmp(b,a))f1=1,f2=1;
		}
		if(f1==1&&f2==1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
} 