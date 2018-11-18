#include<bits/stdc++.h>

using namespace std;

int main()
{
	int h,m,s,t1,t2,count_cw=0,count_acw=0,i;

	cin >> h;
	cin >> m;
	cin >> s;
	cin >> t1;
	cin >> t2;

	if(h==12)
		h=0;
	else
		h=h*5;

	if(t1==12)
		t1=0;
	else
		t1=t1*5;


	if(t2==12)
		t2=0;
	else
		t2=t2*5;

	i=t1;

	if(i==60)
		i=0;

	while(i!=t2)
	{
		if(i==60)
			i=0;

		if(i==h || i==m || i==s)
		{
			count_cw++;
			break;
		}
		i++;

		if(i==60)
			i=0;
	}

	i=t2;

	if(i==60)
		i=0;

	while(i!=t1)
	{
		if(i==60)
			i=0;

		if(i==h || i==m || i==s)
		{
			count_acw++;
			break;
		}
		i++;

		if(i==60)
			i=0;
	}


	if(count_cw==0 || count_acw==0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;





}