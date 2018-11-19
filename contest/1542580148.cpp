#include <bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false);cout.tie(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define MP make_pair
#define inf INT_MAX
#define minf INT_MIN

typedef long long int lli;

ofstream outfile;
ifstream infile;

int n, k, check[4];
int power(int i){
	int multi = 1;
	for(int j = 1; j <= i; ++j)
		multi *= 2;
	return multi;
}
bool checker(){
	bitset <4> mybitset;
	int wut[4]= {0};
	for(int i= 0; i <4;++i){
		mybitset = check[i];
		for(int j= 0; j < 4; ++j){
			wut[j] += mybitset[j];
		}
	}
	for(int i= 0; i < 4; ++i){
		if(wut[i] > 2)
			return 0;
	}
	return 1;
}
int main()
{
	infile.open("input.txt");
	outfile.open("output.txt");

	fastIO;
	int i, j, t, k, l;
	cin >> n >> k;
	
	vector <int> arr;
	set <int> myset;
	for(i = 1; i <= n; ++i){
		int sum = 0;
		for(j = 0; j < k; ++j){
			cin>> t;
			sum += (int)(power(j))*t;
		}
		if(!sum){
			cout << "YES\n";
			return 0;
		}
		myset.insert(sum);
	}
	for(auto it:myset)
		arr.pb(it);
	t = arr.size();
	for(i = 0; i < t; ++i){
		check[0] = arr[i];
		for(j = 0; j < t; ++j){
			check[1] = arr[j];
			for(k = 0; k < t; ++k){
				check[2] = arr[k];
				for(l = 0; l < t; ++l){
					check[3] = arr[l];
					if(checker()){
						cout << "YES\n";
						return 0;
					}
				}
			}
		}
	}
	cout << "NO\n";
}