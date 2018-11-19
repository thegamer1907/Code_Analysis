#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define fastcin ios_base::sync_with_stdio(false)

typedef long long ll;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);

int main (void) {
  	fastcin;
  	int h,m,s;
  	cin >> h >> m >> s;
  	int t1, t2;
  	cin >> t1 >> t2;
  	if(t1 == 12)
  		t1 = 0;
  	if(t2 == 12)
  		t2 = 0;
  	if(h == 12)
  		h = 0;

  	h *= 5;
  	t1 *= 5;
  	t2 *= 5;

  	if(t1 > t2)
  		swap(t1, t2);

  	int cnt = 0;

	if(h >= t1 && h < t2)
		cnt++; //está entre

    if(m >= t1 && m < t2)
		cnt++; //está entre

	if(s >= t1 && s < t2)
		cnt++; //está entre

	if(cnt==0 || cnt==3)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}

