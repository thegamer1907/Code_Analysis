#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define LB lower_bound
#define UB upper_bound
#define SP fixed << setprecision(10)

using namespace std;

typedef long long ll;
typedef pair <int, int> pii;
typedef double DB;

const int N = 1000*1000*10 + 10 , K = 1000*1000 + 10;
int num[N] , ans[N] , ps[K] , a[K];
bool mark[N];

int main(){

	ios_base::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);
	
	int n , m , l , r;
	cin >> n;
	
	for(int i = 0 ; i < n ; i++){
	   cin >> a[i];
	   num[a[i]]++;
	}

	for(int i = 2 ; i < N-5 ; i++){
		if(!mark[i])
			for(ll j = i ; j < N-5 ; j+= i){
				mark[j] = 1;
				ans[i] += num[j];
			}

		ans[i] += ans[i-1];	
	}	
	
	cin >> m;

	for(int i = 0 ; i < m ; i++){
	   cin >> l >> r;
	   if(l > N-5){
		  cout << 0 << endl;
		  continue;
	   }

	   r = min(r , N-6);	   
	   cout << ans[r] - ans[l-1] << endl;
	}
	

	return 0;
}
