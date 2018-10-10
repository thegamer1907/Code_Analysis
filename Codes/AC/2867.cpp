#include<bits/stdc++.h>
#define F first
#define S second
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<int , int> pii;
typedef double DB;

const ll H = 31 , MOD = 999913333 , N = 1000*1000 + 100;
string s;
ll a[N];

int main(){

	ios_base::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);
	cin >> s;

	int st(0) , en(s.size());

	while(st+1 != en){
				
		int l = (st + en)/2;
		ll h(0) , tmp(1) , flag(0);
	
		for(int i = 0 ; i < l ; i++){
		   h = (h*H + s[i] - 96) % MOD;
		   tmp = tmp*H % MOD;
		}

		a[0] = h;

		for(int i = l ; i+1 < s.size() ; i++){

			int t = i-l+1;
			
			a[t] = (a[i-l]*H + s[i] - 96) % MOD;
			a[t] -= ((s[i-l] - 96)*tmp) % MOD;

			while(a[t] < 0)
			   a[t] += MOD;
	
			if(a[t] == a[0])
			   flag = 1 , i = s.size();

		}
	
		if(flag)
		   st = l;
		else
		   en = l;
	}

	int t = st;
	ll a(0) , b(0) , tmp(1) , last(0);

	for(int i = 0 ; i < t ; i++){
		
		a = (a*H + s[i] - 96) % MOD;
		b = (b + (s[s.size() - i - 1] - 96)*tmp) % MOD;
		tmp = (tmp*H) % MOD;
		
		if(a == b)
		   last = i+1;
	}

	if(!last)
	   cout << "Just a legend";
	else
	   for(int i = 0 ; i < last ; i++)
		  cout << s[i];
	
	cout << endl;

	return 0;
}
