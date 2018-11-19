#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define f first
#define s second

typedef long long int ll;

int main(){
	float h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;

	h += m/60.0 + s/3600.0;

	m += s/60.0;
	m/=5.0;
	s/=5.0;

	float a,b;

	if(t1<t2){
		a = t1;
		b = t2;
	}
	else{
		a = t2;
		b = t1;
	}
	int p1,p2;
	p1=p2=1;

	if(a<h && h<b)	p1=0;
	if(h<a || h>b) p2=0;

	if(m<a || m>b) p2=0;
	if(a<m && m<b) p1=0;

	if(s<a || s>b) p2=0;
	if(a<s && s<b) p1=0; 

	if(p1==1 || p2==1) cout<<"YES";
	else cout<<"NO";
	return 0;
}