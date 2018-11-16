#include <bits/stdc++.h>

using namespace std;

int n, m, k;
int i, j;

bool increase(void)
{
	if(i%2 == 0)
	{
		if(j == m-1)
		{
			if(i == n-1)
				return false;
			else
				++i;			
		}
		else
			++j;
	}
	else
	{
		if(j == 0)
		{
			if(i == n-1)
				return false;
			else
				++i;
		}
		else
			--j;
	}
	
	return true;
}

int main(void)
{
	int l, c;
	
	scanf("%d %d %d", &n, &m, &k);
	
	i = 0;
	j = 0;
	c = n*m;
	for( ; k>1 ; --k)
	{
		printf("%d", 2);
		for(l=0 ; l<2 ; ++l)
		{
			printf(" %d %d", i+1, j+1);
			increase();
		}
		c -= 2;
		printf("\n");
	}
	
	printf("%d", c);
	for( ; c>0 ; --c)
	{
		printf(" %d %d", i+1, j+1);
		increase();
	}
	printf("\n");
	
	return 0;
}

                                                                                                                            