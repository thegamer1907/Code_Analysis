#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>
#include <stack>
#include <queue>
#include <set>
#include <list>

using namespace std;

int n;
int arr[200003], tree[800003];
bool erased[200003];
string s, t;

bool benar(int k)
{
	memset(erased, 0, sizeof erased);
	string temp = "";
	for(int i = 1; i <= k; i++)
		erased[arr[i]] = 1;
	for(int i = 1; i <= n; i++)
	{
		if(!erased[i])
			temp += s[i-1];
	}

	int idx = 0;
	for(char c : temp)
	{
		if(c == t[idx]) idx++;
		if(idx == t.size()) return 1;
	}
	return 0;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("input.in", "r", stdin);
	cin >> s >> t;
	n = s.size();
	for(int i = 1; i <= n; i++) cin >> arr[i];
	int kir = 0, kan = n-1;
	while(kir < kan)
	{
		// cout << kir << " " << kan << "\n";
		// cout << benar((kir+kan+1)/2) << "\n";
		int mid = (kir+kan+1)/2;
		if(!benar(mid)) kan = mid-1;
		else kir = mid;
	}
	cout << kir << "\n";
}




