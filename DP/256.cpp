#include <bits/stdc++.h>
using namespace std;
int a1[100] , b1[100];
int main(){
	int a , b ;
	cin >> a ;
	for (int i = 0 ; i < a ; i++)
	{
		cin >> a1[i] ;
	}
	cin >> b ;
	for (int i = 0 ; i < b ; i++)
	{
		cin >> b1[i];
	}
	sort(a1 , a1 + a) ;
	sort(b1 , b1 + b) ;
	int m = 0  ;
	for (int i = 0 ; i < a ; i++)
	{
		for (int j = 0 ; j < b ; j++)
		{
			if (a1[i] - b1[j] == 1 || a1[i] - b1[j] == -1 || a1[i] - b1[j] == 0)
			{
				m++;
				a1[i] = -2 ;
				b1[j] = -2 ;
			}
		}
	}
	cout << m ;
	
}

