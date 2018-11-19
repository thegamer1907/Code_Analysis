#include<iostream>
using namespace std;

int main()
{
	int h,m,s,t1,t2;
	cin >> h >>m >> s >> t1 >> t2;
	int flag1=0,flag2=0;
	if(t1==12)
		t1=0;
	if(t2==12)
		t2=0;
	if(h==12)
		h=0;
	if(t1==t2)
	{
		cout << "YES";
		return 0;
	}
	if(t1>t2)
	{
		int z = t1;
		t1 = t2;
		t2 = z;
	}
	if( (h<t1 || h>=t2) && (m<t1*5 || m >=t2*5) && (s < t1*5|| s>=t2*5 ))
		cout << "YES";
	else if( (h>=t1 && h<t2) && ( m >= t1*5 && m <t2*5) && ( s >= t1*5 && s<t2*5 ))
		cout << "YES";
	else
		cout << "NO";
}
