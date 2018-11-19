#include<string> 
#include<algorithm> 
#include <iostream> 
#include<cmath>
#include<vector>
#include<limits.h>
#include<list>
#define fl(n) for(int i=0;i<n;i++)
#define ll long long
#define co(out) cout<<out
using namespace std;
//luck and pluck!

int main() {
	string a;
	cin >> a;
	int n;
	cin >> n;
	int f1 = 0;
	int f2 = 0;

	fl(n) {
		string t;
		cin >> t;
		if (t == a) {
			f1 = 1;
			f2 = 1;
			
		}

		if (t[1] == a[0] )f1 = 1;
		if (t[0] == a[1])f2 = 1;
		//12
		//1 2
		//
	}
	if (f1 == 1 && f2 == 1) {
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}


	return 0;
}
