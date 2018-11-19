/* In The Name Of God */
#include <bits/stdc++.h>

# define xx first
# define yy second
# define pb push_back
# define pp pop_back
# define eps 1e-9
# define err(x) cerr << #x << " ::   " << x << endl;

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vint;
int n,k,a[5],mask[20];
bool check(int cur ,int m){
	for(int i=0 ; i<k ; i++)if( ((1<<i) & m) && a[i] > cur/2)
		return true;
	return false;
}
void del(int m){
	for(int i=0 ; i<k ; i++)if((1<<i) & m)
		a[i]--;
}
int main(){
	ios_base::sync_with_stdio (0);
	cin>>n>>k;
	for(int i=0 ; i<n ; i++){
		int tmp = 0;
		for(int j=0 ; j<k ; j++){
			int x;cin>>x;
			a[j] += x;
			tmp += (x<<j);
		}
		mask[tmp]++;
	}
	for(int i=0 ; i<(1<<k) ; i++)
		for(int j=0 ; j<(1<<k) ; j++)if( !(i&j) && mask[i] && mask[j]){
			cout<<"YES\n";
			return 0;
		}
	cout<<"NO\n";
	return 0;
}

