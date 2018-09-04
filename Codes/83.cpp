#include <iostream>
using namespace std;

#define N 500005
int main() 
{
	#define int long long
	int i,n,ar[N],ps[N];
	
	cin>>n;
	ps[0]=0;
	for(i=1;i<=n;i++)  cin>>ar[i],ps[i]=ps[i-1]+ar[i];
	if(ps[n]%3) return cout<<'0',0;
	
	int a,b,ans=0; 
	a=b=0;
	
	for(i=1;i<=n;i++)
	{
		if(ps[i]==(ps[n]/3)) a++;
		if(ps[i]==(2*ps[n]/3)) { ans +=a; } 
	}
	if(ps[n]==0) 
	{
		cout<<((a-1)*(a-2))/2;
	}
	else
	cout<<ans<<endl;
	return 0;
}