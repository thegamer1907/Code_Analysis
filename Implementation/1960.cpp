#include<bits/stdc++.h>
using namespace std;

main()
{	
int n,x,y,z,anx=0,any=0,anz=0;
	cin>>n;
	for(int i=0 ; i<n ; i++)
	{
		cin>>x>>y>>z;
		anx+=x;
		any+=y;
		anz+=z;
	}
	if(anx==0 && any==0 && anz==0)
		cout<<"YES";
	else
		cout<<"NO";

}
