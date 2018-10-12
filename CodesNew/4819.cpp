#include <bits/stdc++.h>
#define ll long long
#define lld long long double
#define ull unsigned long long 
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define pii pair<int,int>
#define vi vector<int>
#define vpii vector<pii>
#define vs vector<string>
#define vll vector<ll>
#define si set<int>
#define sll set<ll>
#define ss set<string>
#define sc set<char>
#define mii map<int,int>
#define mpiii map<pii,int>
#define msi map<string,int>
#define mci map<char,int>
#define mk make_pair
using namespace std;
const int N = 1e6+5;
int main()
{	
	int n,st=0;
	cin>>n;
	vi v(n);
	for (int i = 0; i < n; i++)
		cin>>v[i];

	sort(all(v));
	for (int i = 0; i < v.size(); i++)
		if(v[i] >= 2*v[st])
			st++;
	cout<<n-min(n/2,st)<<endl;
	return 0;
}