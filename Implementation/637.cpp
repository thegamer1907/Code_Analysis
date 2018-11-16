# include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k, a[101];
	scanf ("%d%d", &n, &k);
	for (int i = 1; i <= n; i ++)
		scanf ("%d" , a + i);
	if( a[1] == 0)
		puts("0");
	else {
		int s = a[k];
		int i;
		if(s)
			for (i = k; i <= n && a[i] == s; i ++);
		else 
			for (i = k; i <= n && a[i] == s; i --);
		if( s )
			i = min(i - 1, n);
	
		cout << i << endl;
	}

	return 0;
}
