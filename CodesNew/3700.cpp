#include <iostream>
using namespace std;
int main()
{
	long long n,m,a,max=0,sum=0;
	cin>>n;
	cin>>m;
	sum+=m;
	for(int i=0;i<n;i++)
	{
	    cin>>a;
	    sum+=a;
	    if(a>max) max=a;
	}
	if((sum)/n+ 1*(sum%n!=0)<max) cout<< max <<" "<<max+m;
	else cout<< (sum)/n+ 1*(sum%n!=0) <<" "<<max+m;
	return 0;
}