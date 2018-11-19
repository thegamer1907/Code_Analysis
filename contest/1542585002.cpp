/*
Saurabh Joshi
IIIT Jabalpur
*/
#include<bits/stdc++.h>
#define LL long long int
#define M 1000000007
#define reset(a) memset(a,0,sizeof(a))
#define rep(i,j,k) for(i=j;i<=k;++i)
#define per(i,j,k) for(i=j;i>=k;--i)
#define print(a,start,end) for(i=start;i<=end;++i) cout<<a[i];
#define endl "\n"
#define eps 0.00000001
LL pow(LL a,LL b,LL m){LL x=1,y=a;while(b > 0){if(b%2 == 1){x=(x*y);if(x>m) x%=m;}y = (y*y);if(y>m) y%=m;b /= 2;}return x%m;}
LL gcd(LL a,LL b){if(b==0) return a; else return gcd(b,a%b);}
LL gen(LL start,LL end){LL diff = end-start;LL temp = rand()%start;return temp+diff;}
using namespace std;
int main()
	{
		ios_base::sync_with_stdio(0);
		double h , m , s , t1 ,t2;
		cin >> h >> m >> s >> t1 >> t2;
		double as = s * 6;
		if(as >=360)
			as -= 360;
		double am = m * 6 + 6 * (as / 360.0);
		if(am >= 360)
			am -= 360;
		double ah = h * 30 + 30 * (am / 360.0);
		if(ah >= 360)
			ah -= 360;
		//try to move from t1 to t2
		t1 = t1 * 30;
		t2 = t2 * 30;
		bool flag = 1;
		if(t1 >= 360) t1 -= 360;
		if(t2 >= 360) t2 -= 360;
		//cout << ah << " " << am << " " << as << " " << t1 << " " << t2;
		if(t1 > t2)
			swap(t1 , t2);

			
				//go from t1 to t2;
				if(as >= t1 && as <= t2)
					{
						flag = 0;
					}
				if(am >= t1 && am <= t2)
					{
						flag = 0;
					
					}
				if(ah >= t1 && ah <= t2)
					{
						flag = 0;
					}
		if(flag == 1)
			{
				cout << "YES";
				return 0;
			}
		flag = 1;
		if(as >= 0 && as <= t1)
			{
				flag = 0;
			}
		if(am >= 0 && am <= t1)
			{
				flag = 0;
			}

		if(ah >= 0 && ah <= t1)
			{
				flag = 0;
			}
		
		if(as >= t2 && as <= 360 - eps)
			{
				flag = 0;
			}
		if(am >= t2 && am <= 360 - eps)
			{
				flag = 0;
			}

		if(ah >= t2 && ah <= 360 - eps)
			{
				flag = 0;
			}
		if(flag == 0)
			cout << "NO";
		else
			cout << "YES";
	}
