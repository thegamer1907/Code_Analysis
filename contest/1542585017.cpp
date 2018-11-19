#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod 1000000007
#define pb push_back
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector< pi > 
int main()
{
	double h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	if(t1>t2)
		swap(t1,t2);
	int f=1,g=1;
	double add=0;
	add=h+m/60.0+s/3600.0;
	if(add>t1&&add<t2)
		f=0;
	add=m/5.0+s/300.0;
	if(add>t1&&add<t2)
		f=0;
	add=s/5.0;
	if(add>t1&&add<t2)
		f=0;

	add=h+m/60.0+s/3600.0;
	if(add<t1||add>t2)
		g=0;
	add=m/5.0+s/300.0;
	if(add<t1||add>t2)
		g=0;
	add=s/5.0;
	if(add<t1||add>t2)
		g=0;
	//cout<<f<<g;
 if(f||g)
 	cout<<"YES";
 else
 	cout<<"NO";

	return 0;
}