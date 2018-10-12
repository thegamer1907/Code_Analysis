#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <iterator>
#include <utility>
#include <iomanip>
#include <stack>
#include<bitset>
#include <cmath>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
int main(int argc, char const *argv[])
{	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
 	ll n,k;
 	cin>>n>>k;
 	bitset<51>t(k);
 	int i;
 	for (i = 0; i < 51; ++i)
 	{
 		if (t[i])
 		{
 			break;
 		}
 	}
 	cout<<i+1<<"\n";

	return 0;
}