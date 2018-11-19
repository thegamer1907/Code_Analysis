#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
int n,mar1,mar2;
string a,b;
int main()
{
	int i,j;
		cin>>a;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			cin>>b;
			if(b[0]==a[1]) mar1=1;
			if(b[1]==a[0]) mar2=1;
			if(a==b){cout<<"YES"<<endl;return 0;}
		}
		if(mar1&&mar2) cout<<"YES"<<endl;
		  else cout<<"NO"<<endl;

	return 0;
}

