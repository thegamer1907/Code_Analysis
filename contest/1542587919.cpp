#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
	int n, m=2;
	char A[m];
	gets(A);
	cin >> n;
//	n*=2;
	char B[n][2];
//	for (int i=0; i<n; i++)
//		cin >> B[i][];
	bool flg1 = false, flg2 = false; 
	for (int i = 0; i < n; i++) { 
		cin >> B[i][0] >> B[i][1]; 
		if (B[i][1] == A[0]) flg1 = true; 
		if (B[i][0] == A[1]) flg2 = true; 
		if (B[i][0] == A[0] && B[i][1] == A[1]) {
			flg1 = true; 
			flg2 = true; 
		}	 
	} 
	if (flg1 == true && flg2 == true) 
		cout << "YES"; 
	else cout << "NO"; 
}
