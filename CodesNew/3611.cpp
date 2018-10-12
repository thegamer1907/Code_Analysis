#include <iostream>
#include <cmath>

using namespace std;

int a[55];

int main() {
	int n,m;
	cin >> n;
	cin >> m;
	int maxt=0;
	for(int i=0;i<n;i++)
	    {
	    	int t;
	    	cin >> t;
	    	a[i]=t;
	    	maxt=max(t,maxt);
		}
		//cout << mint <<endl;
	//int ans1=max(mint+(m%n==0?m/n:m/n+1),maxt+m/n) ;
	int sum=0;
	for(int i=0;i<n;i++) {
		sum+=maxt-a[i];
	}
	int ans1;
	if(m<=sum)ans1=maxt;
	else ans1=maxt+((m-sum)%n==0?(m-sum)/n:(m-sum)/n+1);
	int ans2=maxt+=m;
	cout << ans1 <<" " << ans2 << endl;
	return 0;
}