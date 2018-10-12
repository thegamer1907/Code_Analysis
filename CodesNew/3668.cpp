#include<iostream>
using namespace std;
int main()
{
	int n,m,k,sum;
	k = 0;
	sum = 0;
	cin >> n >> m;
	int A[n];
	for(int i = 0; i<n;i++)
	{
		cin >> A[i];
		sum += A[i];
		k = max(A[i],k);
	}
	sum+=m;
	if(sum%n == 0)
	{
		cout << max(k,sum/n) << " ";
	}
	else
	{
		cout <<max(k,sum/n + 1) << " ";
	}
	cout << k + m << endl;

}