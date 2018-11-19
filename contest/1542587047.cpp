/*input
3 47 0 4 9
*/
#include <bits/stdc++.h>
using namespace std;
const long long md=1e9+7;
long long a[1000005],n;

int main(){
	#ifdef ONLINE_JUDGE
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	#endif
	long long q,m,k,h,ans=0,s,t1,t2,sum=0,p,x=0,y;
	cin>>h>>m>>s>>t1>>t2;
	if(h==12) h=0;
	if(t1==12) t1=0;
	if(t2==12) t2=0;
	h=h*5*60+m*5;
	m=m*60+45;
	s*=60;
	t1*=5*60,t2*=5*60;
	if(t1>t2) swap(t1,t2);
	if(h>=t1 && h<t2) ++x;
	if(m>=t1 && m<t2) ++x;
	if(s>=t1 && s<t2) ++x;
	// for(int i=t1;i<t2;++i){
	// 	if(h==i || m==i || s==i) {
	// 		x++;
	// 		break;
	// 		//return cout<<"NO",0;
	// 	}
	// } 
	// for(int i=t2;i!=t1;++i){
	// 	if(i==3600) i=0;
	// 	if(h==i || m==i || s==i) {
	// 		x++;
	// 		break;
	// 		//return cout<<"NO",0;
	// 	}
	// } 
	cout<<(x==3 || x==0?"YES":"NO");
	//cout<<'\n'<<x<<"   "<<h<<' '<<m<<' '<<s<<' '<<t1<<' '<<t2<<'\n';

}