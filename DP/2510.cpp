//#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
/*
 *STL headers
 */
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <string>

using namespace std;
	
#define LLI				long long int
#define PN 				cout<<'\n'

#define SZ(a) 			int((a).size()) 
#define PB 				push_back 
#define ALL(c) 			(c).begin(),(c).end() 
#define FORITER(i,c)	for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++) 
#define CFIND(x,c) 		((c).find(x) != (c).end()) 
#define FIND(x,c) 		(find(ALL(c),x) != (c).end())

#define PI 			    3.1415926535
#define MOD				1000000007

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin>>n;
	int i= 0;
	vector<int> v(n);
	while(i < n)
		cin>>v[i++];
	i = 1;
	int j = 0;
	int ans = 1;
	while(i < n){
		if(v[i] > v[i-1]){
			ans = max(i - j + 1, ans);
		}
		else{
			j = i;
		}
		i++;
	}
	cout<<ans;
	
	return 0;
}