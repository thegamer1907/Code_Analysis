#include <bits/stdc++.h>

using namespace std;
string a[200],s;
int i,n,j;

main(){
cin >> s >> n;
	for ( ; i < n; i++) cin >> a[i];
		for (i = 0; i < n; i++){
				string p = "";
			for (j = 0; j < n; j++){
				p = a[i] + a[j];
					//cout << p << " " << p.find(s) << endl;
					if (p.find(s) >= 0 && p.find(s) < 1000){
						cout << "YES"; return 0;
					}
				p = a[j] + a[i];
					if (p.find(s) >= 0 && p.find(s) < 1000){
						cout << "YES"; return 0;
					}
				//cout << p << " " << p.find(s) << endl;
			}
		}
cout << "NO"; return 0;
}
