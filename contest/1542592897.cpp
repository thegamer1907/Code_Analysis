#include<bits/stdc++.h>

using namespace std;

#define PB push_back
#define MP make_pair
#define FOR( i , n ) for( int i = 0; i < (n); i++ )
#define FORR( i , n ) for( int i = ( n - 1 ); i >= 0 ; i-- )
#define DB( x ) cout << #x << " = " << x << endl;
#define OUT( a , n ) for( int J = 0; J < (n); J++ )cout<< (a)[J] << " \n"[J == (n) - 1 ]
#define WAIT cout << flush , system("PAUSE");
#define CONTAINS(a, x) ((a).find(x) != (a).end())
#define endl '\n'

typedef long long ll;
typedef pair<int, int> pii;

const int N = 1e6+100;


string pass;
string s[N];
int n;

int main()
{
	ios::sync_with_stdio( 0 );
	cin.tie( 0 );


	cin >> pass;
	cin >> n;
	for( int i = 0 ; i < n; i++ ){
		cin >> s[i];
	}


	for( int i = 0 ; i < n; i++ ){

		if(s[i] == pass){
			cout << "YES" << endl;
			exit(0);
		}

		for( int j = 0 ; j < n; j++ ){
//			if(j == i)continue;
			if(s[i][1] == pass[0] && s[j][0] == pass[1]){
				cout << "YES" << endl;
							exit(0);
			}

		}

	}

	cout << "NO" << endl;
	return 0;
}
