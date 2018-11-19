#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a[3], x, y;
	for (int i=0; i<3; i++)
		cin>>a[i];
	cin>>x>>y;
	a[0]*=5, x*=5, y*=5;
	if(x>y) swap(x,y);
	bool p=false, q=false;
	for (int i=0; i<3; i++)
		if(x<=a[i]&&a[i]<y) p=true;
		else q=true;
	if(p&&q) cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}
   					 	 			  		  			 	  	 	