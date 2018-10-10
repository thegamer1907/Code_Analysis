//dont try to understand my code i really dont understand it 
#include<iostream>
#include<fstream>
#include<cmath>
#include<string>
#include<set>
#include<iomanip>
#include <map>
#include<vector>
#include <queue>
#include <stack>
#include<algorithm>
#include<memory.h>
using namespace std;
typedef long long ll;
#define f( i , x , n ) for(int i = x; i < (int)(n); ++i)
#define pb push_back
#define mp make_pair
#define mt make_tuple
typedef pair<int, int> ii;
const double PI = acos(-1.0);
//const ll oo = 1000000000000030200;
//const ll F = LLONG_MIN;	
//const int A = 1234567;
typedef long long ll;
// write what you need here : ... 

int need[3];
int main()
{
	string s;
	cin >> s;
	f(i, 0, s.length())
	{
		if (s[i] == 'B')
			need[0]++;
		else
			if (s[i] == 'S')
				need[1] ++;
			else
				need[2]++;
	}

	int have[3];
	f(i, 0, 3)cin >> have[i];
	ll a = 100e9, b = 100e9, c = 100e9;
	if (need[0] != 0)
		a = have[0] / need[0];
	if (need[1] != 0)
		b = have[1] / need[1];
	if (need[2] != 0)
		c = have[2] / need[2];

	ll can = min(a, min(b, c));
	f(i, 0, 3)
	{
		have[i] -= (ll)need[i] * can;
	}
	int buy[3];
	f(i, 0, 3)cin >> buy[i];
	ll mon;cin >> mon;
	ll bought;
	ll start = 0 , end = 10000000000000;
	while (start <= end)
	{
		ll mid = (start + end) / 2;
		ll want = 0;
		f(i, 0, 3)
			if(need[i]!=0 && need[i] * mid > have[i])
			want += buy[i] * (need[i] * mid-have[i]);
		if (want <= mon)
		{
			bought = mid;
			start = mid + 1;
		}
		else
			end = mid - 1;
	}


	cout << can + bought;

	return 0;
}