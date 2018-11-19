#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair < int , pair < int , int > >
#define pi pair < int , int >
#define pp pair < ll , ll >
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define sf(a) scanf("%d",&a)

int main()
{
    cin.sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	float h,m,s,t1,t2;
	cin >> h >> m >> s >> t1 >> t2;
	if((m >= 1 || s >= 1) && (t1 == h || t2 == h)) h++;
	if(s >= 1 && (t1 == (m/5) || t2 == (m/5))) m++;
	m = float(m/5);
	s = float(s/5);
	if(h == 12) h = 0;
	int lg = t1 , sm = t2;
	if(t2 > t1){
        lg = t2;
        sm = t1;
	}
	bool flag = false;
	//cout << h << m << s << lg << sm;
	if((h > lg || h < sm) && (m > lg || m < sm) && (s > lg || s < sm)) flag = true;
	if(flag) cout << "YES";
	else
	{
	    	if(((h <= lg && h >= sm) || (h == 0 && sm == 11)) && (m <= lg && m >= sm) && (s <= lg && s >= sm)) cout << "YES";
	    	else cout << "NO";
	}
	return 0;
}
