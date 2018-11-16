#include <bits/stdc++.h>
using namespace std;
int main()
{
	std::vector<int> a,b;
	int m,n,c = 0, d = 0,count = 0;
	cin >> m;
	for(int i=0;i<m;i++){
		cin >> c;
		a.push_back(c);
	}
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> c;
		b.push_back(c);
	}
	c = 0;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	while(c<m && d<n){
		if(abs(a[c]-b[d])<=1){
			count++;
			c++;
			d++;
		}
		else{
			if(a[c]<b[d])
				c++;
			else 
				d++;
		}
	}
	cout << count << endl;
	return 0;
}