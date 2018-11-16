#include <iostream>
using namespace std;

int main() {
	int n,x;
	string a;
	cin >> x >> n >> a;
	while (n--)
	{
		for ( int i = 1; i < x; ++i){
			if (a[i] == 'G' && a[i-1] == 'B' ){	
				a[i]= 'B';
				a[i-1]= 'G';
				++i;
				}
		}
	}
	cout << a;
	//Jely
	return 0;
}