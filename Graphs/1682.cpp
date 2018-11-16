#include <iostream>
#include <vector>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n,t,i=1;
	vector<int> A;
	cin >> n >> t;
	A.resize(n,0);
	while( i<n){
		cin >> A[i++];
	}
	i=1;
	while( i!=t and i<n ){
		i = i + A[i];
	}
	cout << (i==t?"YES\n":"NO\n");
	return 0;
}