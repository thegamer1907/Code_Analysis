#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,count_1=0,count_2=0,i;
	char A[5],B[5];

	cin >> A;
	cin >> n;

	for(i=0;i<n;i++)
	{
		cin >> B;
		if((B[0]==A[0] && B[1]==A[1]) || (B[0]==A[1] && B[1]==A[0]))
		{
			break;
		}
		else
		{
			if(A[0]==B[1])
				count_1++;
			else if(A[1]==B[0])
				count_2++;
		} 
	}

	if(count_1>0 && count_2>0)
		cout << "YES" << endl;
	else if((B[0]==A[0] && B[1]==A[1]) || (B[0]==A[1] && B[1]==A[0]))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}