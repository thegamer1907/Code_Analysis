#include<bits/stdc++.h>
using namespace std;

int main()
{
    double h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
	h += m/60 + s/3600;
	if(h>12) h-=12;
	m += s/60;
	if(m>60) m-=60;
	m/=5;
	s/=5;
	double hms[3] = {h,m,s};
	sort(hms, hms+3);
	//for(int i=0; i<3; ++i) cout<<hms[i]<<" "; cout<<endl;
	//cout<<t1<<" "<<t2<<endl;
	if( (hms[0]<t1 && t1<hms[1]) && (hms[0]<t2 && t2<hms[1]) ) {cout<<"YES\n"; return 0;}
    if( (hms[1]<t1 && t1<hms[2]) && (hms[1]<t2 && t2<hms[2]) ) {cout<<"YES\n"; return 0;}
    if(t1<hms[2] && t1<hms[1] && t1<hms[0]) t1+=12;
    if(t2<hms[2] && t2<hms[1] && t2<hms[0]) t2+=12;
    if( (hms[2]<t1 && t1<hms[0]+12) && (hms[2]<t2 && t2<hms[0]+12) ) {cout<<"YES\n"; return 0;}

    cout<<"NO\n";

	return 0;
}
