# include <bits/stdc++.h>
using namespace std;


int main(){
	int n, t;
	char a[51];
	int i;
	cin >> n >> t >> a;
	for (i = 0; i < t ; i ++){
		for (int j = 0; j < n - 1; j ++){
			if( a[j] - a[j + 1] < 0 )
				swap(a[j], a[j + 1]) ,j ++;
		}	
	}
	puts(a);
	return 0;
}
