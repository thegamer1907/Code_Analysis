#include<bits/stdc++.h>
using namespace std;
int main(){
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	h%=12;t1%=12;t2%=12;
	double a=t1*30,b=t2*30;
	double c=6*s,d=6*m+(s/60.0)*6;
	double e=30*(h+m/60.0+s/3600.0);
	if(c>d)	swap(c,d);if(c>e) swap(c,e);if(e<d)swap(d,e);
	/* printf("%lf %lf %lf %lf %lf\n",c,d,e,a,b); */
	if(c<a&&c<b&&a<d&&b<d)	cout<<"YES"<<endl;
	else if(d<a&&d<b&&a<e&&b<e)	cout<<"YES"<<endl;
	else if(e<a&&e<b&&a<(360+c)&&b<(360+c))	cout<<"YES"<<endl;
	else if(((a>c&&a>d&&a>e)||(a<c&&a<d&&a<e))&&((b>c&&b>d&&b>e)||(b<c&&b<d&&b<e)))	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
