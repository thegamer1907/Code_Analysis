#include<iostream>
using namespace std;

int main ()
{
	float h,m,s,f,e,bj=0;
	cin>>h>>m>>s>>f>>e;
	s=s/5.0; m=(m+s/60.0)/5.0; h=(h+m/60.0)*1.0; f=f*1.0; e=e*1.0;
	if(f>e)
	{
		float tmp;
		tmp=f; f=e; e=tmp;
	}
	if(h>f&&h<e)
		bj++;
	if(m>f&&m<e)
		bj++;
	if(s>f&&s<e)
		bj++;
	if(bj==0||bj==3)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
