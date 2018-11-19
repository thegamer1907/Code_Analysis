#include<bits/stdc++.h>
using namespace std;

int sl(double l, double r, double a, double b)
{
	
	if(r < l)
	{
		if((a >= l || a <= r)  && (b >= l || b <= r)) return 1;
	}
	else 
	{
		if(a >= l && a <= r && b >= l && b <= r) return 1;
	} 
	return 0;
} 

int main()
{
	double h, m, s, a, b;
	cin >> h >> m >> s >> a >> b;
	if(m != 0 || s != 0)
	h += 0.000001;
	m = m*1.0/60*12;
	if(s!=0) m += 0.000001;
	s = s*1.0/60*12;
	double c[4] = {h,m,s};
	sort(c,c+3);
	int flag = 0;
	for(int i = 0; i < 2; i++)
	{
		if(sl(c[i], c[i+1],a,b))
		{
			flag = 1;
		}
	}
	if(sl(c[2],c[0],a,b))flag = 1;
	cout << (flag==1?"YES":"NO")<<endl;

	return 0;
}
