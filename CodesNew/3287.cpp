/*     !ya khoda!     */
#include<bits/stdc++.h>

#define ll long long
#define ld long double

#define pp push
#define po pop()
#define pb push_back
#define pf push_front
#define pob pop_back()
#define pof pop_front()

#define F first
#define S second
#define mkp make_pair
#define pll pair<ll,ll>

#define poow(x) (1LL<<(x))

#define coutashar(x,d)   cerr<<fixed<<setprecision(x)<<(ld)d
#define coutghat(x)      cout<<tolower(x);
/*==========================================================================*/
using namespace std;
/*==========================================================================*/
const int N=4e5+100;
ll n,m,x,s;
/*==========================================================================*/
int main()
{
    ios_base::sync_with_stdio(false) , cin.tie(0) , cout.tie(0);

	cin>>n;

	for(int i=0;i<n;i++)
		cin>>x , m=max(m,x) , s+=x;

	while(m*(n-1)<s)   m++;

	cout<<m;
	return 0;
}
