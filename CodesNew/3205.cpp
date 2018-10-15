#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;

const int INF = 2e9+5;

/*
    filippos
    Contest : 660
    Task : C
*/

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n, k;
    cin >> n >> k;
    vi v(n);
    for(int &i : v)
    	cin >> i, i = i == 0 ? 1 : 0;
    for(int i = 1; i < n; i++)
    	v[i] += v[i-1];
    int best = 0, index;
    for(int i = 0, j = 0; j < n; j++){
    	if(v[j] - (i ? v[i-1] : 0) <= k)
    		best = j-i+1, index = i;
    	else
    		i++;
    }
    cout << best << '\n';
    for(int i = n-1; i >= 1; i--)
    	v[i] -= v[i-1];
    for(int &i : v)
    	i = i ? 0 : 1;
    for(int i = 0; i < best; i++)
    	v[index + i] = 1;
    for(int i : v)
    	cout << i << ' ';
}