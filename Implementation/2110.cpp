#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("i.txt","r",stdin);
	//freopen("o.txt","w",stdout);
	int i,x=0,y=0,z=0,t;
	cin>>i;
	while(i--){
		cin>>t;
		x+=t;
		cin>>t;
		y+=t;
		cin>>t;
		z+=t;
	}
	if(x==0 && y==0 && z==0)cout<<"YES\n"<<endl;
	else printf("NO\n");
	return 0;
}