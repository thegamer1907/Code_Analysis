#include <iostream>
using namespace std;

int main()
{
	int h,m,s,t1,t2,i,len,temp,flag,len_a1,flag1,mt,st;
	cin >> h >> m >> s >> t1 >> t2;
	int a1[20],a2[20];
	if(t1>t2)
	{
		temp=t1;
		t1=t2;
		t2=temp;
	}
	for(i=t1;i<=t2;i++)
		a1[i-t1]=i;
	len_a1=i-t1;
	for(i=t2;i<=12;i++)
		a2[i-t2]=i;
	len=i-t2;
	for(i=1;i<=t1;i++)
	{
		a2[len]=i;
		len++;
	}
	flag=0;
	flag1=0;
	mt=m/5;
	st=s/5;
	if(mt==0)
		mt=12;
	if(st==0)
		st=12;
	if(h>=t1 && h<t2)
	{
		flag1=1;
		flag=0;
		for(i=0;i<len-1;i++)
		{
			if(mt==a2[i])
				flag=1;

		}
		if(flag==0)
		{
			for(i=0;i<len-1;i++)
				if(st==a2[i])
					flag=1;
		}
	}
	else
	{
		//cout << "entered ";
		flag1=0;
		for(i=0;i<len_a1-1;i++)
		{
			if(mt==a1[i])
				flag1=1;
		}
		if(flag1==0)
		{
			for(i=0;i<len_a1-1;i++)
				if(st==a1[i])
					flag1=1;
		}
		if(flag1==1)
		{
			flag=0;
			for(i=0;i<len-1;i++)
			{
				if(a2[i]==h)
					flag=1;
			}
			if(flag==0)
			{
				for(i=0;i<len-1;i++)
					if(mt==a2[i])
						flag=1;
			}
			if(flag==0)
			{
				for(i=0;i<len-1;i++)
					if(st==a2[i])
						flag=1;
			}
		}
	}
	//cout << flag1 << flag << endl;
	if(flag==0 || flag1==0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}