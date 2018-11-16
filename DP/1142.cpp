#include <iostream>
//#include <vector>
//#include <cstring>
using namespace std;
//void ShellSort(int n, int mass[]);
//int GCD(int a, int b);
int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int mass[n];
	int ones = 0;
	for(int i = 0; i < n; ++i)
	{
		cin >> mass[i];
		if(mass[i])
			ones++;
	}
	int dp[n][n] = {0};
	int max = 0;
	for(int i = 0; i < n; ++i)
	{
		if(mass[i])
			dp[i][i] = ones - 1;
		else
			dp[i][i] = ones + 1;
		if(max < dp[i][i])
			max = dp[i][i];
		for(int j = i + 1; j < n; ++j)
		{
			if(mass[j])
				dp[i][j] = dp[i][j - 1] - 1;
			else
				dp[i][j] = dp[i][j - 1] + 1;
			if(max < dp[i][j])
				max = dp[i][j];
		}
	}
	/*for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			cout << dp[i][j] << ' ';
		}
		cout << endl;
	}*/
	cout << max;
	return 0;
}
/*void ShellSort(int n, int mass[])
{
    int i, j, step;
    int tmp;
    for (step = n / 2; step > 0; step /= 2)
    {
        for (i = step; i < n; i++)
        {
            tmp = mass[i];
            for (j = i; j >= step; j -= step)
            {
                if (tmp < mass[j - step])
                    mass[j] = mass[j - step];
                else
                    break;
            }
            mass[j] = tmp;
        }
	}
}

int GCD(int a, int b)
{
	int temp;
	while(b)
	{
		temp = a % b;
		a = b;
		b = temp;
		
	}
	return a;
}*/