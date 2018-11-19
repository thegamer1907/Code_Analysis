#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define N 100005

double an[3];

int main(){
	ios::sync_with_stdio(false);
	//freopen("input.txt", "r", stdin);
	double h, m, s, t1, t2;
	int yes = 0;
	cin>>h>>m>>s>>t1>>t2;
	if(h == 12) h = 0;
	t1 = (30.0)*t1;
	t2 = (30.0)*t2;
	an[0] = (30.0)*h + (1.0/2.0)*m + (1.0/120.0)*s;
	an[1] = (6.0)*m + (1.0/10.0)*s;
	an[2] = (6.0)*s;
	sort(an, an+3);
	//cout<<an[0]<<" "<<an[1]<<" "<<an[2]<<"\n";
	if(t1 < an[0] && t2 < an[0]) 
		yes = 1;
	else if(t1 < an[1] && t2 < an[1] && t1 > an[0] && t2 > an[0]) 
		yes = 1;
	else if(t1 < an[2] && t2 < an[2] && t1 > an[1] && t2 > an[1])
		yes = 1;
	else if(t1 > an[2] && t2 > an[2])
		yes = 1;
	else if(t1 > an[2] && t2 < an[0] || t2 > an[2] && t1 < an[0])
		yes = 1;
	if(yes) cout<<"YES";
	else cout<<"NO";
	return 0;
}