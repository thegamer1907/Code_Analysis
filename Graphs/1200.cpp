#include <iostream>
using namespace std;
int sum=1;
bool flag[30030];
int main() {
	int n,k,z,smth;
	cin>>n>>k;
	flag[1]=true;
	for(int i=0;i<n;i++)
	{	
		cin>>z;
		{
			sum+=z;
		}
		if(sum<=n)
		flag[sum]=true;
		for(int j=0;j<z-1;j++)
		{
			cin>>smth;
		}
		
	}
	if(flag[k])
	{
		cout<<"YES";
	}else
	{
		cout<<"NO";
	}
	return 0;
}