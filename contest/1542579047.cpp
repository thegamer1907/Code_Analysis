#include <bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false);cout.tie(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define MP make_pair
#define inf INT_MAX
#define minf INT_MIN

typedef long long int lli;

ofstream outfile;
ifstream infile;

double t1, t2;
int checker(double x){
	if(x > t1 && x < t2)
		return 1;
	return 2;
}
int main()
{
	infile.open("input.txt");
	outfile.open("output.txt");

	double h, m, s;
	cin >> h >> m >> s >> t1 >> t2;

	if(t1 > t2){
		double t = t1;
		t1 = t2;
		t2 = t;
	}
	m += (s/60);
	h += (m/60);
	m /= 5;
	s /= 5;
	//cout << h << " "<< m << " "<< s << "\n";
	int a = checker(h), b = checker(m), c = checker(s);

	if(a == b && b == c){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
}