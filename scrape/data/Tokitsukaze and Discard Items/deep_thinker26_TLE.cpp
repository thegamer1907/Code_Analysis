// Deep_thinker26
// Love _ Osho _ Fuck it....

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define go(i,s,n) for (int i=s;i<n;++i)
#define mod 1000000007
#define INF 10000000000000
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


int main(int argc, char const *argv[])
{
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> A(m);
    go(i,0,m) {
    	cin>>A[i];
    }
    ll max_ = k;
    ll count = 0;
    ll oper = 0;
    ll subtract = 0;
    go(i,0,m) {
    	if(A[i] - subtract <= max_) {
    		count++;
    	}
    	else {
    		if(count)
    			oper++;   		
    		subtract+=count;
    		count = 0;
			if(A[i] - subtract > max_) {
				max_ += k;
			}
			i--;       
    		
    	}
    }
    if(count)
    	oper++;
    cout<<oper<<endl;
}