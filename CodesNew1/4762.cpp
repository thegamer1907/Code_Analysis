#include<bits/stdc++.h>
using namespace std;
vector <int> v;
int n,k,p,ans;
int main(){
  int n;

	cin >> n;

	for(int i = 0;i < n;i++){
		cin >> k;
		v.push_back(k);
	}
	sort(v.begin(),v.end());

	p = n/2;

	ans = n;

	for(int i = 0;i < n/2; i++){
		while(1){
			if(v[i]*2 <= v[p]){
				ans--;
				p++;
				break;
			}
			else
				p++;

			if(p == n)
				break;
		}
		if(p == n)
			break;
	}

	cout << ans << endl;
}