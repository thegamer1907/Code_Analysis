#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	vector <int> a;
	for(int i=0;i<n;i++)
	{   int num;
		cin >> num;
		a.push_back(num);
		
	}
	
	int kuch;
	kuch = a[k-1];
	
	int count =0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=kuch && a[i]>0)
			count ++ ;
	}
	cout << count;
	
}