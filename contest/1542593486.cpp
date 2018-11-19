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
int n;
string s[1001];
int main()
	{
		ios_base::sync_with_stdio(0);
		string z;
		cin >> z;
		cin >> n;
		for(int i = 1; i <= n ; i++)
			cin >> s[i];
		for(int i = 1; i <= n ; i++)
			{
				for(int j = 1; j <= n ; j++)
					{
						
							
								string x = s[i] + s[j];	
								
								if(x[0] == z[0] && x[1] == z[1])
									{
										cout << "YES";
										return 0;
									}
								if(x[1] == z[0] && x[2] == z[1])
									{
										cout << "YES";
										return 0;
									}
								if(x[2] == z[0] && x[3] == z[1])
									{
										cout << "YES";
										return 0;
									}
							
					}
			}
		for(int i = 1; i <= n ; i++)
			{
				if(s[i] == z)
					{
						cout << "YES";
						return 0;
					}
			}
		cout << "NO";
	}
