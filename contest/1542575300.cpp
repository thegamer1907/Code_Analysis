#include <bits/stdc++.h>
using namespace std;
/**************TEMPLATE***************************************************************************************************/
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)



/*************************************************************************************************************************/


int main()
{
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	double mh=(double)m/5,ms=(double)s/5;
	int m1=t1,m2=t2;
	t1=min(m1,m2);
	t2=max(m1,m2);
	
		if((h<t2 && h>t1) && (mh<t2 && mh>t1) && (ms<t2 && ms>t1) )
		{
			cout<<"YES"<<endl; return 0;
		}
		else if(!(h<=t2 && h>=t1) && !(mh<=t2 && mh>=t1) && !(ms<=t2 && ms>=t1))
		{
			//cout<<mh<<" "<<ms<<endl;
			//cout<<1<<endl;
			cout<<"YES"<<endl; return 0;
		}
		else if(ms==t1 || ms==t2)
		{
			cout<<"NO"<<endl; return 0;
		}
		else if(h==t2 && (m>0 || s>0) && !(mh<=t2 && mh>=t1) && !(ms<=t2 && ms>=t1))
		{
			//cout<<1<<endl;
			cout<<"YES"<<endl; return 0;
			
		}
		else if(h==t1  && (mh>0 || ms>0) && (mh<t2 && mh>t1) && (ms<t2 && ms>t1))
		{
			//cout<<1<<endl;
			cout<<"YES"<<endl; return 0;
		}
		
		else if(mh==t2  && ms>0 && !(h<t2 && h>=t1) && !(ms<=t2 && ms>=t1))
		{

			cout<<"YES"<<endl; return 0;
		}
		else if(mh==t1  && ms>0 && (h<t2 && h>=t1) && (ms<t2 && ms>t1))
		{
			//cout<<1<<endl;
			cout<<"YES"<<endl; return 0;
		}


	cout<<"NO"<<endl; return 0;
}