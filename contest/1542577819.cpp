#include <bits/stdc++.h>
using namespace std;

#define MEM(arr,val)memset((arr),(val), sizeof (arr))
#define PI (acos(0)*2.0)
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ALL(v)v.begin(),v.end()
#define PB(v)push_back(v)

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

ll gcd(ll a,ll b){return b == 0 ? a : gcd(b,a%b);}
ll lcm(ll a,ll b){return a*(b/gcd(a,b));}

/**
 * __builtin_popcount(int d) // count bits
 * __builtin_popcountll(long long d)
 * strtol(s, &end, base); // convert base number
 */
//----------------------------------------------------------------------//

int main(){
	FASTER;

	int h, m,s,t1,t2;
	cin >> h >> m >> s >> t1 >> t2;

//	double ha = (h%12)/12.0 * 360 - 180;
//	double ma = (m)/60.0 * 360- 180;
//	double sa = (s)/60.0* 360- 180;
//	double t1_a = (t1%12)/12.0* 360- 180;
//	double t2_a = (t2%12)/12.0* 360- 180;


	double ha = (h%12)/12.0 * 360;
	double ma = (m)/60.0 * 360;
	double sa = (s)/60.0* 360;
	double t1_a = (t1%12)/12.0* 360 - 1e-6;
	double t2_a = (t2%12)/12.0* 360- 1e-6;


//	printf("ha = %lf\n",ha);
//	printf("hm = %lf\n",ma);
//	printf("hs = %lf\n",sa);
//	printf("t1 = %lf\n",t1_a);
//	printf("t2 = %lf\n",t2_a);

	if(t2_a < t1_a){
		double tmp = t1_a;
		t1_a = t2_a;
		t2_a = tmp;
	}

//	printf("%lf %lf\n",t1_a, t2_a);

//	printf("ha = %lf t1 = %lf %d\n", ha, t1_a, (int)(ha> t1));

	bool ok = true;
	int cnt = 0;
	if(ha > t1_a && ha < t2_a){
//		printf("debug hour\n");
		cnt++;
		ok = false;
	}
	if(ma >= t1_a && ma < t2_a){

//		printf("debug minute\n");
		cnt++;
		ok = false;
	}
	if(sa >= t1_a && sa < t2_a){
//		printf("debug second\n");
		cnt++;
		ok = false;
	}
	if(cnt == 0 || cnt == 3){
		cout << "YES\n";
		return 0;
	}
	cout << "NO\n";


	return 0;
}
