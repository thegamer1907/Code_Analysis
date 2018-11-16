#include <iostream>
#include <cmath>
#include <limits.h>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <set>
#include <iomanip>
#include <map>

using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n,k;
	cin >> n >> k;

	int total = 0;

	for(int i=1; i<=n; i++){

		total += 5*i;

		if(total + k > 240){
			cout << i - 1;
			//cout << total;
			exit(0);
		}

	}

	cout << n;


	return 0;  
} 
