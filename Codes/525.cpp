#include<bits/stdc++.h>
using namespace std;

main()
{
	int k;
	cin >> k;
	
	int sum = 10;
	k--;
	int n = 19;
	
	while(k){
		if(n%10 != 9)
			sum++;
		else{
			int m = n;
			while(m%10 == 9)
				sum -= 9 , m/=10;
			sum++;
		}
		n++;
		if(sum == 10)
			k--;
	}
	cout << n << '\n';
	
}