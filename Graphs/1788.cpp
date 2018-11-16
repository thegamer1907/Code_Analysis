#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(lli i  = (lli)(a); i < (lli)(b); i++)
#define pb push_back
#define mp make_pair
#define fst first
#define snd second
#define INF 1LL<<62
#define sz(x) (x).size()
#define all(x) (x).begin() , (x).end()
#define trace(x) cerr << #x << ": " << x << endl;

typedef long long int lli;
typedef vector<lli>  vi;

vi arr, arr2;

template<typename T>
ostream &operator <<(ostream& out, vector<T> arr){
	lli n =  sz(arr);

	rep(i, 0, n){
		if(i)out << " ";
		out << arr[i] ;
	}
	out << endl;
	return out;

}

int main(){
	lli n, m;
	cin >> n;
	rep(i, 0, n){
		cin >> m ;
		arr.pb(m);
	}
	cin >> n;
	rep(i, 0, n){
		cin >> m;
		arr2.pb(m);
	}

	sort(arr.begin(), arr.end());

	sort(arr2.begin(), arr2.end());

	lli i = 0, j = 0;
	n = sz(arr);
	m = sz(arr2);
	lli cant = 0;

	//cout << arr << endl << arr2 << endl;
	while(1){
		if(i >= n || j >= m) break;
		if(abs(arr[i] - arr2[j]) <= 1){
			cant++;
			i++;
			j++;
		}
		else{
			if(arr[i] <= arr2[j]){
				i++;
			}
			else{
				j++;
			}
		}
		
	}

	cout << cant  << endl;

	return 0;
}