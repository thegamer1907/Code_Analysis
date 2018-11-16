#include <bits/stdc++.h>
#define loop(a,b,c) for(int a=b;a<=c;a++)

using namespace std;

int main(){
	int n,k,w,ans=0;
	cin >> k >> n >> w;
	int x=n;

	loop(i,1,w){
		n = n - (i*k);
		ans += (i*k);
	}
	
	if(n<0){
		cout << abs(x-ans) << endl;
	}else{
		cout << 0 << endl;
	}
	
	
}
