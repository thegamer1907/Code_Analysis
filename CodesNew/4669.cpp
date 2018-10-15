#include<bits/stdc++.h>
using namespace std;



const int N = 5e5 + 100;
int n, a[N], ans;

int main(){

	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];

	sort(a, a+n);

	int i = 0;
	int j = (n+1)/2;
	while(i < (n+1)/2 && j < n){
		if(a[i]*2 <= a[j])
			ans++, i++, j++;
		else
			j++, ans++;
	}
	while(i < (n+1)/2)
		i++, ans++;
	while(j < n)
		j++, ans++;

	cout << ans << endl;
}
