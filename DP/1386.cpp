#include <iostream>
using namespace std;
int n,a,k1,k0,kmax0=-1;
int main()
{
	cin>>n;
	while(n--){
		cin>>a;
		if(a==1)
		{
			k1++;
			if(k0>0)
				k0--;
		}
		else {
			k0++;
			if(k0>kmax0)
				kmax0=k0;
		}
	}
		cout<<k1+kmax0;
		cin>>n;
		return 0;
}