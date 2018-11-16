#include <iostream>

using namespace std;

int main(){
	bool moze=false;
	int n , t , a[40000];
	cin>>n>>t;
	t--;
	for (int i=0;i<n-1;i++) cin>>a[i];
a[n-1]=1;
	int i=0;
	while (i<n)
	{
		if (i==t)
		{
			moze=true;
			break;
		}
		i+=a[i];
	}
	if (moze) cout<<"YES";
	else cout<<"NO";
	return 0;
}