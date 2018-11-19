#include <bits/stdc++.h>
using namespace std;
int main()
{
	double h, m, s, t1, t2;
	cin>>h>>m>>s>>t1>>t2;
	m = m + s/(double)60;
	h = h + m/(double)60;
	s = s*12/60;
	m = m*12/60;
	int cnt = 0;
	if(t1 > t2)	swap(t1, t2);
	if(h >=t1 && h <= t2)	cnt++;
	if(m >=t1 && m <= t2)	cnt++;
	if(s >=t1 && s <= t2)	cnt++;
	if(cnt == 0 || cnt == 3)	cout<<"YES";
	else	cout<<"NO";

}