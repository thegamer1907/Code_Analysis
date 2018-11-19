#include<bits/stdc++.h>
using namespace std;

int main()
{
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	
	double posm,posh;
	posm=(double)m/60*12.0+(double)s/3600.0*12;
	posh=(double)h+(double)m/60.0+(double )s/3600.00;
	double poss=(double)s/5.00;
	int mi,ma;
	mi=min(t1,t2);
	ma=max(t1,t2);
	
	
	if((posh>mi&&posh<ma)||(posm>mi&&posm<ma)||(poss>mi&&poss<ma))
	{
		int mii=mi+12;
		if(poss<mi&&poss>=0)
		{
		poss=poss+12;
		}
		if(posm<mi&&posm>=0)
			posm=posm+12;
		if(posh<mi&&posh>=0)
			posh=posh+12;

		if((posh>ma&&posh<mii)||(posm>ma&&posm<mii)||(poss>ma&&poss<mii))
		{
			cout<<"NO"<<endl;
		}
		else cout<<"YES"<<endl;
	}
	else cout<<"YES"<<endl;
	
	return 0;
}
