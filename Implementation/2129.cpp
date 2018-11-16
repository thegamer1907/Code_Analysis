#include <iostream>
using namespace std;
int a[101];
int main (){
	
	long long i,n,x1,y1,z1,x=0,y=0,z=0;
	
	cin>>n;
	
	for(i=1; i<=n; i++)
	{
		cin>>x1>>y1>>z1;
		x+=x1;
		y+=y1; 
		z+=z1;
	}
	if(x==0 && y==0 && z==0)
	{cout<<"YES"<<endl;
	
	}
	else{cout<<"NO"<<endl;
	}
	return 0;
}
