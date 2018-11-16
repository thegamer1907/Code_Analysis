#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	int n, a[101], x[101], sum=0,sum_over=0;
	int id_l=0, id_rm, id_lm, i;

	scanf("%d",&n);
	
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);

	for(i=0; i<n; i++)
		if(a[i] == 0)
			x[i] = 1;
		else
			x[i] = -1;	

	id_lm=-1;
	id_rm=-1;
	for(i=0; i<n; i++)
	{
		sum += x[i];
		if(sum > sum_over)
		{
			sum_over = sum;
			id_lm = id_l;
			id_rm = i;
		}	
		if(sum < 0)
		{
			id_l=i+1;
			sum =0;
		}	
		//printf("%d",sum_over);
	}

	if(id_lm == -1 && id_rm == -1)
		printf("%d",n-1);
	else
	{
		sum_over =0;
		for(i=0; i<id_lm; i++)
			sum_over += a[i];
		for(i=id_rm+1; i<n; i++)
			sum_over += a[i];
		for(i=id_lm; i<=id_rm; i++)
			if(x[i]==1)
				sum_over+=1;		

		printf("%d", sum_over);
	}
	return 0;
}


