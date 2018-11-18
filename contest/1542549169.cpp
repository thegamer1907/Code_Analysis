#include<iostream>
#include<cstdio>
using namespace std;

struct details {int value,val;};

class problem
{
public:
	void idea()
	{
		input();
		clock();
		output();
	}

private:
	int h,m,s,p1,p2;
	details hands[60];
	int sum;

	void input()
	{
		scanf("%i %i %i %i %i",&h,&m,&s,&p1,&p2);
		h%=12; p1%=12; p2%=12;
		int a=min(p1,p2),z=max(p1,p2); p1=a; p2=z;
	}

	void clock()
	{
		for(int i=0;i<60;i++) {hands[i].value=0; hands[i].val=0;}
		hands[s].value++;
		minit();
		hours();

		sum=0;
		for(int i=p1*5;i<=p2*5-1;i++) sum+=(hands[i].value+hands[i].val);
		sum+=hands[p2*5].value;
	}

	void minit()
	{
		if(s==0) hands[m].value++;
		else hands[m].val++;
	}

	void hours()
	{
		double x=(h*5)+(m/60.0*5.0)+(s/3600.0*5);
		if(x==int(x)) hands[int(x)].value++;
		else hands[int(x)].val++;
	}

	void output()
	{
		if(sum==0 || sum==3) printf("YES\n");
		else printf("NO\n");
	}
};

int main()
{
	problem test;
	test.idea();

	//system("pause");
	return 0;
}