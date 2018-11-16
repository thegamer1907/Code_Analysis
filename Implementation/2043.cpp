#include <bits/stdc++.h>
#define loop(a,b,c) for(int a=b;a<=c;a++)

using namespace std;

int main(){
	int n,x,y,z,xe=0,ye=0,ze=0;
	cin >> n;
	loop(i,1,n){
		cin >> x >> y >> z;
		xe+=x;ye+=y;ze+=z;
	}
	if(xe==0&&ye==0&&ze==0) cout << "YES\n"; else cout << "NO\n";
}
