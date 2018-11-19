#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	long double h,m,s;
	long long t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	t1=t1%12;
	t2=t2%12;
	t1*=5;
	t2*=5;
	m+=s/60;
	h=(long long)h%12;
	h+=m/60;
	h*=5;
	if(t1>t2)
		swap(t1,t2);
	if(((h<t1||h>t2)&&(m<t1||m>t2)&&(s<t1||s>t2))||((h>t1&&h<t2)&&(m>t1&&m<t2)&&(s>t1&&s<t2)))
	{
		cout<<"YES\n";
	}
	else
		cout<<"NO\n";
	
	return 0;
}
