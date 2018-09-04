#include <iostream>
#include <string>

#define ll long long 

using namespace std;

int a, b, c;
int n_a, n_b, n_c;
int p_a, p_b, p_c;
ll budget;

inline bool chk(ll n)
{
	ll cost = (max(n *a -n_a, 0ll)) *p_a +(max(n *b -n_b, 0ll)) *p_b +(max(n *c -n_c, 0ll)) *p_c;
	return (cost <= budget);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> s;
	
	int len = s.size();	
	for(int i = 0; i < len; i++)
	{
		if(s[i] == 'B')
			a++;
		else if(s[i] == 'S')
			b++;
		else
			c++;
	}
	
	cin >> n_a >> n_b >> n_c;
	cin >> p_a >> p_b >> p_c;
	cin >> budget;
	
	ll l = 0, r = (ll)1e13;
	
	while(l < r)
	{
		ll mid = l +r +1 >> 1;
		
		if(chk(mid))
			l = mid;
			
		else
			r = mid -1;
	}
	
	cout << l << endl;
	return 0;
}