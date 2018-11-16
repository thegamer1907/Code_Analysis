#include<bits/stdc++.h>

using namespace std;

#define endl '\n'

typedef long long ll;
typedef pair<int, int> pii;

int s[5] = {1, 5 , 10 , 20 , 100};
int main()
{
	ios::sync_with_stdio( 0 );
	cin.tie( 0 );
	int n;
	cin >> n;
	int tot = 0;
	for( int i = 4; i >= 0; i--){
		int aux = n / s[i];
		tot += aux;
		n -= s[i] * aux;
	}

	cout << tot << endl;


	return 0;
}
