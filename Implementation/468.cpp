/*input
8 5
10 9 8 7 7 7 5 5
*/

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector< vi > vvi;
typedef pair< int, int > ii;
typedef long long int lli;

#define rep(i,n) \
	for(int i = 0; i < n; i++)
#define tr(container, it) \
	for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define all(c) \
	(c).begin(), (c).end()
#define cprint(container)\
	for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) cout << *it << " ";
#define present(container, element) \
	(container.find(element) != container.end()) // retruns 0 or 1, for set or map
#define cpresent(container, element) \
	(find(all(container), element) != container.end()) // for vectors, returns 0 or 1






int main(int argc, char const *argv[])
{

	int n, k;

	cin >> n >> k;

	int a[n];
	rep(i,n){
		cin >> a[i];
	}


	int val = a[k-1];


	if(val == 0){

		while(a[k-1] == 0 && k > 0){
			k--;
		}

	}else{

		while(k < n && a[k] == val){
			k++;
		}


	}


	cout << k;



}