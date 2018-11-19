#include <bits/stdc++.h>
#define loop(i,a,b) for(ll i=a;i<=b;i++)
#define mod 1000000007
#define  F first
#define  S second
#define mp make_pair
#define pb push_back
#define fast_io std::ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

using namespace std;

int main(){
	fast_io;
	double h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	double a = min(t1,t2);
	double b = t1+t2-a;

	double S = s;
	double M = m + s/60;
	double H = h + m/60 + s/3600;

	bool f1=false;
	bool f2=false;
	bool f3 =false;	
	if(H==a || H==b || M==5*a || M==5*b || S==5*a || S==5*b)
	{
		cout<<"NO\n";
		return 0;
	}
	if(H>a && H<b)
		f1=true;
	if(M>5*a && M<5*b)
		f2=true;
	if(S>5*a && S<5*b)
		f3=true;

	if(f1&&f2&&f3)
		cout<<"YES\n";
	else if(!f1&&!f2&&!f3)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	
	return 0;
}
