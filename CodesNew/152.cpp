#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int M=2e5+7;
const ll q=7057594037927903;
const ll prime=2137;
#define pb push_back
#define mp make_pair
#define f first
#define s second

ll n,k,potega=1,l;

int main()
{
    scanf("%lld%lld",&n,&k);
    while(1)
    {
    	l++;
    	if((k-potega)%(potega*2)==0)
    	{
    		printf("%lld",l);
    		return 0;
		}
		potega=potega*2;
	}
	
	return 0;
}