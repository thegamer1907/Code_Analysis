// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <algorithm>
#include <set>
#include <vector>
#include <climits>
#include <sstream>
#include <ostream>
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
int matrix[50][50];
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repby2(i,a,n) for(int i=a;i<n;i+=2)
#define reprev(i,n) for(int i=n;i>=0;i--)
#define ultra true
#define inultra false
#define Sort(list) sort(list.begin(),list.end())
#define repsets(itr,bgn,nd) for(itr=bgn;iter!=nd;itr++)
#define Findset(list,element) find(list.begin(),list.end(),element)
#define Find(vec,element) find(vec.begin(),vec.end(),element)
using namespace std;
enum status { path = 0, cycle = 1 };
bool equiv(string a, string b)
{
	if (a == b)
		return true;
	int L = a.length();
	if (L % 2 != 0)
		return false;
	string a1 = a.substr(0, L / 2);
	string a2 = a.substr(L / 2, L / 2);
	string b1 = b.substr(0, L / 2);
	string b2 = b.substr(L / 2, L / 2);
	bool check = equiv(a1, b1) && equiv(a2, b2);
	if (check)
		return true;
	else
		check = equiv(a1, b2) && equiv(a2, b1);
	return check;
}
bool is_prime(int n)
{
	int count_primes = 0;
	rep(i, 1, n + 1)
	{
		if (n%i == 0)
			count_primes++;
	}
	if (count_primes == 2)
		return true;
	return false;
}
bool valid_or_not(int num1, int num2, int num3, int num4, int r1, int r2, int c1, int c2,int d1,int d2)
{
	bool validity = ((num1 + num2) == r1) && ((num1 + num3) == c1) && ((num1 + num4) == d1) && ((num2 + num4) == c2) && ((num2 + num3) == d2) && ((num3 + num4) == r2);
	return validity;
}
ll sum(ll n)
{
	return (n*(n + 1) / 2);
}
ll sum_interval(ll st, ll en)
{
	if (st <= 1)
		return sum(en);
	return (sum(en) - sum(st - 1));
}
ll find_min_possible(ll n, ll k)
{
	ll s = 1, e = k;
	while (s < e)
	{
		ll mid = (s + e) / 2;
		ll su = sum_interval(mid, k);
		if (su == n)
			return (k - mid + 1);
		else if (su > n)
			s = mid + 1;
		else
			e = mid;
	}
	return k - s + 2;
}
int min_steps(int x)
{
	int steps[5] = { 1,2,3,4,5 };
	int total_steps = 0, indx = 4;
	while (indx >= 0 && x>0)
	{
		if (x >= steps[indx])
		{
			total_steps += (x / steps[indx]);
			x %= steps[indx];
		}
		else
			indx--;
	}
	return total_steps;
}
bool check_digits(int N)
{
	set<int> dist;
	while (N)
	{
		dist.insert(N % 10);
		N /= 10;
	}
	return (dist.size() == 4);
}
int sum(int n)
{
	return (n*(n + 1) / 2);
}
bool is_even(int n)
{
	return !(n % 2);
}
int calc_dist(int i, int j, vector<int> distances)
{
	int dist = 0;
	rep(k, i, j )
		dist += distances[k];
	return dist;
}
bool count_ind_clmn(int i, int c)
{
	int c_valid = 0;
	rep(j, 0, c)
	{
		if (matrix[i][j] != -1)
			c_valid++;
	}
	return (c_valid == c);
}
bool count_ind_row(int j, int r)
{
	int r_valid = 0;
	rep(i, 0, r)
	{
		if (matrix[i][j] != -1)
			r_valid++;
	}
	return (r_valid == r);
}
void swap_two(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}
int sum_except(vector<int> cookies, int indx)
{
	int bagsl = cookies.size(), sum_all = 0;
	rep(i, 0, bagsl)
	{
		if (i != indx)
			sum_all += cookies[i];
	}
	return sum_all;
}
bool is_palindromic(string s)
{
	string orgstr = s;
	reverse(s.begin(), s.end());
	string revstr = s;
	return (orgstr == revstr);
}
int find_index(vector<string> digs, string sma)
{
	int digsl = digs.size(), requiered_index;
	rep(i, 0, digsl)
	{
		if (sma == digs[i])
		{
			requiered_index = i;
			return requiered_index;
		}
	}
}
int max_distances(vector<int> holds, int indx)
{
	int max_distance = INT32_MIN, n = holds.size();
	rep(i, 1, n - 1)
	{
		if (i == indx)
			max_distance = max(max_distance, (holds[i + 1] - holds[i - 1]));
		else
			max_distance = max(max_distance, (holds[i + 1] - holds[i]));
	}
	return max_distance;
}
ll fib(int n)
{
	ll res, first = 1, second = 1;
	if (n == 1 || n == 2)
		return 1;
	rep(i, 3, n )
	{
		res = first + second;
		first = second;
		second = res;
	}
	return res;
}
ull min_shots(ull N)
{
	int bottle_shots[3] = { 5,10,15 };
	ull min_nshots = 0;
	int indx = 2;
	while (N > 0 && indx >= 0)
	{
		if (N >= bottle_shots[indx])
		{
			min_nshots += (N / bottle_shots[indx]);
			N %= bottle_shots[indx];
		}
		else
			indx--;
	}
	return min_nshots;
}
void finpout()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
}
ll nCr(int n, int r)
{
	if (r>(n/2)) r=n-r;
	ll ans = 1;
	rep(i, 1, r + 1)
	{
		ans *= (n - r + i);
		ans /= i;
	}
	return ans;
}
ll gcd(ll a, ll b)
{
	return b == 0 ? a : gcd(b, a%b);
}
ll count_bin_digits(ll n)
{
	ll digits = 0;
	while (n)
	{
		digits++;
		n /= 2;
	}
	return digits;
}
int just_findfs(vector<pair<int,int>> all,int element,bool swtch)
{
	int lln = all.size();
	if (swtch)
	{
		rep(i, 0, lln)
		{
			if (all[i].first)
				return i;
		}
	}
	else
	{
		rep(i, 0, lln)
		{
			if (all[i].second)
				return i;
		}
	}
}
status dfs(int current_node, int parent_node, int &nodes,vector<vector<int>> graph,vector<int> &visted)
{
	if (visted[current_node])
		return cycle;
	visted[current_node] = 1;
	for (auto child_node : graph[current_node]) if (child_node != parent_node)
	{
		nodes++;
		if (dfs(child_node, parent_node, nodes, graph, visted) == cycle)
			return cycle;
	}
	return path;
}
ll sum_arr(vector<int> vec)
{
	int sum = 0, vecs = vec.size();
	rep(i, 0, vecs)
		sum += vec[i];
	return sum;
}
bool isSubSequence(string str1, string str2, int m, int n)
{
	if (m == 0) return true;
	if (n == 0) return false;

	if (str1[m - 1] == str2[n - 1])
		return isSubSequence(str1, str2, m - 1, n - 1);

	return isSubSequence(str1, str2, m, n - 1);
}
bool check_sub(string s1, string s2)
{
	int c, d, s1ln = s1.length(), s2ln = s2.length();
	c = d = 0;
	while (s1[c] != '\0') 
	{
		while ((s1[c] != s2[d]) && s2[d] != '\0') 
		{
			d++;
		}
		if (s2[d] == '\0')
			break;
		d++;
		c++;
	}
	if (s1[c] == '\0')
		return 1;
	else
		return 0;
}
pair<int,int> max_element(vector<int> nums)
{
	pair<int, int> mx_indx;
	int vln = nums.size();
	mx_indx.first = INT32_MIN;
	rep(i, 0, vln)
	{
		if (nums[i] > mx_indx.first)
		{
			mx_indx.first = nums[i];
			mx_indx.second = i;
		}
	}
	return mx_indx;
}
int max_element1(vector<int> nums)
{
	int vln = nums.size(), mx_indx, mx = INT32_MIN;
	rep(i, 0, vln)
	{
		if (nums[i] > mx)
		{
			mx = nums[i];
			mx_indx = i;
		}
	}
	return mx_indx;
}
int find_index(vector<pair<ll, string>> vec, string word)
{
	ll s = vec.size();
	rep(i, 0, s)
	{
		if (vec[i].second == word)
			return i;
	}
	return -1;
}
int find_index1(vector<string> vec, string word)
{
	ll s = vec.size();
	rep(i, 0, s)
	{
		if (vec[i]== word)
			return i;
	}
	return 0;
}
int main()
{
	finpout();
	int n, t, movement = 0;
	cin >> n >> t;
	bool can = inultra;
	vector<int> cells(n-1);
	rep(i, 0, n - 1)
		cin >> cells[i];
	while(movement <= (n-2))
	{
		movement += cells[movement];
		if (movement == (t - 1))
		{
			can ^= ultra;
			break;
		}
	}
	if (can)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}