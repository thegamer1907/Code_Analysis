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
LL pow(LL a,LL b,LL m){LL x=1,y=a;while(b > 0){if(b%2 == 1){x=(x*y);if(x>m) x%=m;}y = (y*y);if(y>m) y%=m;b /= 2;}return x%m;}
LL gcd(LL a,LL b){if(b==0) return a; else return gcd(b,a%b);}
LL gen(LL start,LL end){LL diff = end-start;LL temp = rand()%start;return temp+diff;}
using namespace std;
int a[1000001];
LL m[10000001];
LL ans[10000001];
int p[10000001];
int main()
	{
		ios_base::sync_with_stdio(0);
		int n;
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			m[a[i]]++;
		}
		for(int i = 2; i <= 10000000; i++)
			{
				if(p[i] == 0)
					{
						for(int j = i ; j <= 10000000; j += i)
							{
								p[j] = 1;
								ans[i] += m[j];				
							}
					}
			}
		for(int i = 1; i <= 10000000; i++)
			{
				ans[i] = ans[i - 1] + ans[i];
			}
		int m;
		cin >> m;
		while(m--)
			{
				int l , r;
				cin >> l >> r;
				cout << ans[min(r , 10000000)]  - ans[min(l - 1 , 10000000)] << endl;
			}
	}
