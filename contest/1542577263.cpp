#include<bits/stdc++.h>
using namespace std;
#define N 100005
#define BOOST() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
typedef long long int ll;
int main()
{
	double i,h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	
	h=h*30;
	h=h+(m*30/360)+(s*6*30/(360*360));
	
	m=m*6;
	m=m + (s*6/360);
	s=s*6;
	t1=t1*30;
	t2=t2*30;
	if(h>=360)h-=360;
	if(m>=360)m-=360;
	if(s>=360)s-=360;
	if(t1>=360)t1-=360;
	if(t2>=360)t2-=360;
	
//	cout<<h<<" "<<m<<" "<<s<<"\n";
//	cout<<t1<<" "<<t2<<"\n";

	double mn,mx;
	mn=min(t1,t2);
	mx=max(t1,t2);
//	cout<<mn<<":"<<mx<<"\n";
	//mn to mx
	int f1=0,f2=0;
	if((h>=mn && h<=mx) || (m>=mn && m<=mx) || (s>=mn && s<=mx))
		f1=1;
	
	//mn to mx other
	if(((h>=0 && h<=mn) || (h>=mx && h<360)) || ((m>=0 && m<=mn) || (m>=mx && m<360)) || ((s>=0 && s<=mn) || (s>mx && s<360)))
		f2=1;
		
		
//	cout<<f1<<":"<<f2<<"\n";
	if(f1&&f2)
		cout<<"NO\n";
	else	
		cout<<"YES\n";
	
}

