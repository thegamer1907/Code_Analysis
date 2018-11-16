#include <iostream>
#include <vector>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n,t,i=1,a,j=1;
	cin >> n >> t;
	while( i<n and j!=t and j<n ){
		cin >> a;
		if(j==i){ j += a; }
		++i;
	}
	cout << (j==t?"YES\n":"NO\n");
	return 0;
}