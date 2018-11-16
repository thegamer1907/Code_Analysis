#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>

using namespace std; 
int main()
{
	long long n,m,a[10000],b[10000];
	int i,j;	
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> a[i];
	}
	cin >> m;	
	for (j = 0; j < m;  j++){
		cin >> b[j];
	}
      

	sort (a,a + n);	
	sort (b,b + m);
   int ans = 0;
    for (int i = 0, j = 0; i < n && j < m; ) {
        if (a[i] + 1 < b[j]) {
            ++i;
        } else
        if (b[j] + 1 < a[i]) {
            ++j;
        } else {
            ++i, ++j;
            ++ans;
        }
    }
    cout << ans;       
}                           
