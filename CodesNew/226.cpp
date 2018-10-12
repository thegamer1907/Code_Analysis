#include <iostream>
using namespace std;
int main(){
int n, t;
int a[100000];
cin >> n >> t;
int p1 = 0, max = 0, p2 = 0, sum = 0;
for (int i = 0; i < n; i++){
cin >> a[i];
}
while(p1 != n){
	int c = 0;
	
	bool f = true;
	while (sum <= t && p2 != n){
		sum += a[p2];
		// cout << "sum  " << sum << endl;
		 if (sum <= t) {p2++;}

		 if (sum <= t && p2 != n + 1) c++;
		 if (p2 - p1 > max) max = p2 - p1;
	}
	sum -= a[p2];
	//cout << p1 << "  "<< p2  << " c:  " << c<< endl;
	
	sum -= a[p1];
	p1++;
}
cout << max;
//system("pause");
}			