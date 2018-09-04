#include<bits/stdc++.h>
#define LL long long int
#define M 1000000007
#define reset(a) memset(a,0,sizeof(a))
#define rep(i,j,k) for(i=j;i<=k;++i)
#define per(i,j,k) for(i=j;i>=k;--i)
#define print(a,start,end) for(i=start;i<=end;++i) cout<<a[i];
#define endl "\n"
#define inf 100000000000000
LL pow(LL a,LL b,LL m){LL x=1,y=a;while(b > 0){if(b%2 == 1){x=(x*y);if(x>m) x%=m;}y = (y*y);if(y>m) y%=m;b /= 2;}return x%m;}
LL gcd(LL a,LL b){if(b==0) return a; else return gcd(b,a%b);}
LL gen(LL start,LL end){LL diff = end-start;LL temp = rand()%start;return temp+diff;}
using namespace std;
LL na , nb , nc , pa , pb, pc;
LL r;
LL a = 0 , b = 0 , c = 0;
bool check(LL val)
	{
		LL ra = max(0LL,(val * a - na)) * pa;
		LL rb = max(0LL,(val * b - nb)) * pb;
		LL rc = max(0LL,(val * c - nc)) * pc;
		if(ra + rb + rc <= r)
			return 1;
		return 0;
	}
int main()
	{
		ios_base::sync_with_stdio(0);
		string s;
		
		cin >> s;
		cin >> na >> nb >> nc;
		cin >> pa >> pb >> pc;
		cin >> r;
		for(int i = 0 ; s[i] != '\0' ; i++)
			{
				if(s[i] == 'B') ++a;
				else if(s[i] == 'S') ++b;
				else ++c;
			}
		LL ans = 0;

		//ans = min(na / a , min(nb / b , nc / c) );
		LL temp  = 0;
		LL l = 1 , r = 2000000000000;//now how mutch i can accumulate more
		while(l <= r)
			{
				LL mid  = (r + l) / 2;
				if(check(mid) == 1)
					{
						temp = max(temp , mid);
						l = mid + 1;
					}
				else
						r = mid - 1;
			}
		cout << temp;
	}
