#include <cstdlib>
#include <iostream>

using namespace std;
int x,y,z;
int main()
{
	int n,i,t1,t2,t3;
	cin>>n;
	for (i=0;i<n;i++){
		cin>>t1>>t2>>t3;
		x=x+t1;
		y=y+t2;
		z=z+t3;
		}
	if (x==0 && y==0 && z==0){
		cout<<"YES";
		
		}
	else{
		cout<<"NO";
		}
}