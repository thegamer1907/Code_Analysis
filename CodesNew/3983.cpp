#include <iostream>
using namespace std;
typedef long long int ll;

int n;		//The number of warriors
int q;		//The number of minutes in the battle
ll a[200002];		//The warriors' strengths
ll k[200002];

int binary_search(int s, int e, ll goal)
{
	if(e-s <= 2)
	{
		if(goal <= a[s])
		{
			return s;
		}
		else
		{
			return s+1;
		}
	}
	int mid = (s+e)/2;
	if(goal <= a[mid])
	{
		binary_search(s, mid+1, goal);
	}
	else
	{
		binary_search(mid+1, e, goal);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	
	a[0] = k[0] = 0;
	
	cin >> n >> q;
	
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		a[i] += a[i-1];
	}
	
	for(int i = 1; i <= q; i++)
	{
		cin >> k[i];
		if(k[i-1] < a[n])
		{
			k[i] += k[i-1];
		}
	}
	
	int attacker;
	
	for(int i = 1; i <= q; i++)
	{
		if(k[i] >= a[n])
		{
			cout << n << endl;
		}
		else
		{	
			attacker = binary_search(1, n+1, k[i]);
			if(a[attacker] == k[i])
			{
				cout << n - attacker << endl;
			}
			else
			{
				cout << n - attacker + 1 << endl;
			}
		}
	}


	return 0;
}
