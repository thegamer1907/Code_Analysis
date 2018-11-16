#include<bits/stdc++.h>

using namespace std;

int main(){
	unsigned long int a,k,z[100],n,s;
	cin >> a >> k;
	for (int i = 0; i< a;i++)
		cin >> z[i];
	s = 0;
	for (int i = 0;i<a;i++)
	{
		if (z[i] != 0 && z[i] >= z[k-1])
			s++;
		if (z[i] < z[k-1])
			break;
	}
	cout << s;
	return 0;
}