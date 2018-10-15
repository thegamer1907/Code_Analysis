//#include "/Users/dimazhylko/CPPProjects/bits/stdc++.h"
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[103];

bool comp(int a, int b){
	return a<b;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    ll l,r;

    int n,m;
	cin>>n>>m;
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}

	sort(a, a+n, comp);
	ll resm = a[n-1]+m;
	ll c = 0;

	int i = n-1;

	while(c < m && i>=0){
		c+=abs(a[i]-a[n-1]);
		i--;
	}

	if(c >= m && i!=-1){
		cout<<a[n-1]<<" "<<resm<<"\n";
	} else if(c>= m && i==-1){
		cout<<a[n-1]<<" "<<resm<<"\n";
	} else {
		m -= c;
		ll r = m/n;
		ll t = 0;
		if(m%n != 0)t++;

		cout<<a[n-1]+r+t<<" "<<resm<<"\n";
	}

	return 0;
}