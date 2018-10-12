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
#define inf 200000000000000
LL pow(LL a,LL b,LL m){LL x=1,y=a;while(b > 0){if(b%2 == 1){x=(x*y);if(x>m) x%=m;}y = (y*y);if(y>m) y%=m;b /= 2;}return x%m;}
LL gcd(LL a,LL b){if(b==0) return a; else return gcd(b,a%b);}
LL gen(LL start,LL end){LL diff = end-start;LL temp = rand()%start;return temp+diff;}
using namespace std;
LL a[1000001];
LL pref[1000001];
int main()
    {
        ios_base::sync_with_stdio(0);
		LL n , q;
		cin >> n >> q;
		for(int i = 1; i <= n; i++)
			{
				cin >> a[i];
				pref[i] = pref[i - 1] + a[i];
			}
		LL buffer = 0;
		while(q--)
			{
				LL val;
				cin >> val;
				buffer = buffer + val;
				if(buffer >= inf)
					buffer = inf;
				if(buffer >= pref[n])
					{
						buffer = 0;
						cout << n << endl;
					}
				else
					{
						int ans = 0;
						int l = 1 , r = n;
						while(l <= r)
							{
								int mid = (l + r) / 2;
								if(pref[mid] <= buffer)
									{
										ans = max(ans , mid);
										l = mid + 1;
									}
								else
										r = mid - 1;

							}
						cout << n - ans << endl;
					}
			}
	}

