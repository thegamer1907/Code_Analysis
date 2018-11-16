#include <iostream>
using namespace std;
int main(){
	int a[100],n,dem=0,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		if(a[i]>=a[k]&&a[i]>0)
		dem++;
	}
	cout<<dem;
}