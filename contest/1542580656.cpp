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
multiset<int> s , ss;
int main()
	{
		ios_base::sync_with_stdio(0);
		int n , k;
		cin >> n >> k;
		for(int i = 1; i <= n ; i++)
			{
				int v = 0;
				for(int j = 1; j <= k ; j++){
					int x;
					cin >> x;
					v = v + pow(2 , k - j) * x;
				}
				s.insert(v);
				ss.insert(v);
			}
		for(int v: s)
			{	
				if(v == 0)
					{
						cout << "YES";
						return 0;
					}
				//generate all possible
				ss.erase(ss.find(v));
				for(int i = 0 ; (i + 1) <= (1<<k) ; i++)
					{
					
						if((i & v) == 0)
							{
								if(ss.find(i) != ss.end())
									{
										cout << "YES";
										return 0;
									}
							}
					}
				ss.insert(v);
			}
		cout << "NO";
	}
