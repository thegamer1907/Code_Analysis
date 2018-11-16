 #include<iostream>
using namespace std;
int a[100];
int main()
{
	int n, k;
	cin >> n >> k;
	if (n >= k)
		for (int i = 0; i < n; i++)
			cin >> a[i];
	int count = 0, s = a[k - 1];//k=1 ligth array 
	for (int i = 0; i < n; i++)
		if (a[i] >= s && a[i] > 0)
			count++;
	cout << count << endl;
	return 0;
}