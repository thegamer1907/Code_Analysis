#include<iostream>
#include<string>
using namespace std;


int main()
{
	int t, sum1 = 0,sum2=0,sum3=0, x,y,z;
	cin >> t;
	for (int i = 0; i < t ; i++) {
		cin >> x>>y>>z;
		sum1 += x;
		sum2 += y;
		sum3 += z;
	}
	if (sum1 == 0 && sum2 == 0 && sum3 ==0) {
		cout << "YES";
	}
	else
		cout << "NO";
	return 0;
}