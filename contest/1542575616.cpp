#include <bits/stdc++.h> 

using namespace std;

int main()
{
	double h = 0,m = 0,s = 0,t1 = 0,t2 = 0;
	int book = 0,c = 0;
	cin>>h>>m>>s>>t1>>t2;
	
	if(t1 > t2)
	{
		double r = 0;
		r = t2;
		t2 = t1;
		t1 = r;
	}
	
	m += (s / 60);
	h += (m / 60);
	s = s * 12 / 60;
	m = m * 12 / 60;
	
	if(h >= t1 && h <= t2)
		book += 1;
	if(m >= t1 && m <= t2)
		book += 1;
	if(s >= t1 && s <= t2)
		book += 1;
	
	if(book == 3 || book == 0)
	{
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}