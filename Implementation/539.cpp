#include<iostream>
using namespace std;
int a[101];
int main()
{
	//freopen("input1.txt","r",stdin);
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;++i)
	cin>>a[i];
	int i;
	for(i=0;i<k;++i)
	{
		if(a[i]<=0)
		break;
	}
	if(i<k)
	cout<<i<<endl;
	else {
		while(i<n && a[i] == a[i-1])
		i++;
		cout<<i<<endl;
	}
	return 0;
}