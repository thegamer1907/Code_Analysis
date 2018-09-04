#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#define pi pair<ll, ll>
using namespace std;
typedef long long int ll;
struct lol
{
	ll first, second;
	bool operator<(lol other) const
	{
		if (first == other.first)
			return second < other.second;
		if (first >= 0 or other.first >= 0)
			return first < other.first;
		else 
			return first > other.first;
	}
}; 
ll n, k, c1 = 1, temp, ans = 0, neg = 0;
vector<lol> array1;
map<ll, ll> m;
vector< vector<ll> > index1(200001), sum1(200001);
int main()
{
	ios::sync_with_stdio(false);
	cin>>n>>k;
	for (int i = 0; i < n; i++)
	{
		cin>>temp;
		lol t1 = {0, 0};
		array1.push_back(t1);
		array1[i].first = temp;
		array1[i].second = i;
		if (m.count(temp) < 1)
		{
			m[temp] = c1;
			index1[c1].push_back(i);
			c1++;
		}
		else
		{
			index1[m[temp]].push_back(i);
		}	
	}

	sort(array1.begin(), array1.end());

	for (int i = n-1; i >= 0; i--)
	{
		ll next = k*array1[i].first;
		if (m.count(next) < 1)
			continue;

		ll ind = array1[i].second, ind1 = m[next];

		ll num = index1[ind1].end() - upper_bound(index1[ind1].begin(), index1[ind1].end(), ind);
		if (sum1[ind1].size() != 0 and num != 0)
		{
			ans += sum1[ind1][num-1];
		}

		int ind2 = m[array1[i].first];
		if (sum1[ind2].size() == 0)
		{
			sum1[ind2].push_back(num);
		}
		else
			sum1[ind2].push_back(num+sum1[ind2][sum1[ind2].size()-1]);
	}
	cout<<ans<<"\n";
}