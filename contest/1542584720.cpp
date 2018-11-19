#include <bits/stdc++.h>

#define forr(A,B,C) for(int A=(B);A<(C);A++)

using namespace std;

int arr[1<<4];
int N,K;

int main()
{
	cin>>N>>K;
	
	forr(i,0,N)
	{
		int num = 0;
		
		forr(k,0,K)
		{
			int d; cin>>d;
			num = (num << 1) | d;
		}
		arr[num] = 1;
	}
	
	
	forr(i,0,(1<<K))
	forr(j,0,(1<<K))
	{
		if (i & j) continue;
		if (arr[i] && arr[j])
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	
	cout << "NO" << endl;
	
	
	return 0;
}