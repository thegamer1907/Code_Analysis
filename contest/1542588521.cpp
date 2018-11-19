#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100000 + 10;
const int M = 1000000007;
const double PI = atan(1) * 4;
const int oo = 1000000000;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
#define pb push_back 
#define all(c) (c).begin(),(c).end()

double cl(double x, double y){
	if(x<y)
		return y-x;
	else
		return 60-(x-y);
}
double ctr(double x, double y){
	if(x>y)
		return x-y;
	else
		return 60-(y-x);
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif
	double h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	if(h==12)
		h=0;
	if(t1==12)
		t1=0;
	if(t2==12)
		t2=0;
	//h%=12;t1%=12;t2%=12;
	h*=5;t1*=5;t2*=5;
	m+=s/60;
	h+=m/60;
	double x1=cl(t1,t2);
	if(x1<cl(t1,h) && x1<cl(t1,m) && x1<cl(t1,s))
		return cout<<"YES",0;
	x1=ctr(t1,t2);
	if(x1<ctr(t1,h) && x1<ctr(t1,m) && x1<ctr(t1,s))
		return cout<<"YES",0;
	cout<<"NO";
	
}


