#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define LB lower_bound
#define UB upper_bound
#define SP fixed << setprecision(10)

using namespace std;

typedef long long ll;
typedef pair <int , int> pii;
typedef double DB;

ll n , m , k;

ll BS(ll st , ll en){

	if(st + 1 == en)
		return st;
	
	ll mid = (st + en)/2;
	ll a(0) , b(0);

	for(int i = 1 ; i <= m ; i++){
		a += min(n , (mid-1)/i);
		if(mid%i == 0 && mid/i <= n)
			b++;
	}

	if(a >= k)
		return BS(st , mid);
	return BS(mid , en);
}

int main(){

	ios_base::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);

	cin >> n >> m >> k;
	cout << BS(1 , n*m + 1) << endl;

	return 0;
}
