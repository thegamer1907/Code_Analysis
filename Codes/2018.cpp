// IAWT

# include <iostream>
# include <unordered_map>
# define LL long long int

using namespace std;

int n, k;
int a[200005];

LL ans = 0;

unordered_map <LL, LL> mp1;
unordered_map <LL, LL> mp2;
unordered_map <LL, LL> mp3;

LL B;

int main(){
	cin >> n >> k;
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	if (k == 1){
		for (int i=0; i<n; i++) mp1[a[i]] ++;
		for (auto x:mp1){
			//cout << x.second << endl;
			B  = x.second;
			B *= x.second - 1;
			B *= x.second - 2;
			B /= 6;
			ans += B;
		}
		cout << ans;
		return 0;
	}
	for (int i=n-1; i>=0; i--){
		mp1[a[i]] ++;
		if (a[i] == 0) continue;
		B = a[i];
		if (abs(B * k) > 1000000000) continue;
		mp2[a[i]] += mp1[a[i] * k];
		if (abs(B * k * k) > 1000000000) continue;
		mp3[a[i]] += mp2[a[i] * k];
		/*cout << a[i] << ":\n";
		cout << a[i] << ", " << a[i] * k << ", " << a[i]*k*k<<endl;
		cout << mp1[a[i]] << ", " << mp2[a[i]] << ", " << mp3[a[i]] << endl;*/
	}
	for (auto x:mp3){
		//cout << x.first << ", " << x.second << endl;
		ans += x.second;
	}
	B = mp1[0];
	B *= mp1[0] - 1;
	B *= mp1[0] - 2;
	B /= 6;
	ans += B;
	cout << ans;
	return 0;
}

