#include <bits/stdc++.h>

#define INF ((int)(1e9))
#define F first
#define S second
#define endl '\n'
#define mp make_pair
#define pb push_back
#define N 2005

using namespace std;

typedef long long ll; // comments that are mixed in with code
typedef pair<int, int> ii; // are aligned to the right like this
typedef pair<ll, int> li;
typedef vector<ii> vii;
typedef vector<pair<int, ii> > viii;
typedef vector<int> vi;

int main(int argc, char *argv[])
{
	double hh,mm,s,t1,t2;
	cin >> hh >> mm >> s >> t1 >> t2;
	
	double h = (double)hh+(double)(mm*60+s)/(double)3600; 
	double m = (double)mm+(double)(10*s)/(double)600;
	h=(double)(5*h);t1*=5;t2*=5;
	if(t1>t2) {
		double temp = t1;
		t1=t2;
		t2 = temp;
	}
	int res = 0;
	if(h<t1 || h>t2) res++;
	if(m<t1 || m>t2) res++;
	if(s<t1 || s>t2) res++;
	
	if(res == 3 || res == 0) cout << "YES\n";
	else cout <<"NO\n";
	
	//system("pause");
	return 0;
}