#include <iostream>

#define ll long long
#define db(x) cout << "> " << #x << ": " << x << endl;

using namespace std;

int getSumOfDigits(ll n)
{
	int sum = 0;
	
	while(n != 0)
	{
		sum += (n % 10);
		n /= 10;
	}
	
	return sum;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int k;
	cin >> k;
	
	for(int st = 1; ; st++)
	{
		int sum = getSumOfDigits(st);
		
		if(sum > 10)
			continue;
		
		k--;
		
		if(k == 0)
		{
			cout << st << (10 -sum) << '\n';
			return 0;
		}
	}
		
	return 0;
}