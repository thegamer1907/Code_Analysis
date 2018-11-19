#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define forn(i,n) for(i=0;i<n;i++)
#define elif else if
using namespace std;
ll i,j;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll  h,m,s,s1,s2;
	cin>>h>>m>>s>>s1>>s2;
	double sa=((s*1.0/60)*360.0);
	double ma=((m*1.0/60)*360.0 + s*1.0/10);
	double ha=((h*30)%360+(m+s*1.0/60)*1.0/2);
	//cout<<sa<<" "<<ma<<" "<<ha<<endl;
	ll t1=max(s1,s2);
	ll t2=min(s1,s2);
	ll m1=t2*30;
	ll m2=t1*30;
	//cout<<m1<<" "<<m2<<endl;
	if ((ha>m1 && ha<m2 && ma>m1 && ma<m2 && sa>m1 && sa<m2) || ((ha<m1 || ha>m2) && (ma<m1 || ma>m2) && (sa<m1 || sa>m2)))
	cout<<"YES";
	else 
	cout<<"NO";
	return 0;
}

